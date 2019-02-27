/*
 * cpics2_gen
 * Copyright (c) 2019 nosuke <sasugaanija@gmail.com>
 *
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "sha1.h"
#include "keys_sha1.h"

#define KEY_LEN 20
#define KEY_OFFSET 0x1d8
#define KEY_INTERVAL 2


unsigned char
hexstr2val(char *hex)
{
    unsigned char ret;
    char buf[5] = "0x";
    buf[2] = hex[0];
    buf[3] = hex[1];
    buf[4] = '\0';
    ret = strtol(buf, NULL, 16);
    return ret;
}


enum record_type {
    DATA = 0,
    END_OF_FILE,
    EXT_SEG_ADDR,
    START_SEG_ADDR,
    EXT_LINEAR_ADDR,
    START_LINEAR_ADDR
};


int
patch_hex(char *line, unsigned char key[], int offset, int interval, int length)
{
    int byte_count = 0;
    char *p = line;
    unsigned short address = 0;
    unsigned char addr_low, addr_high;
    enum record_type type;
    unsigned char sum = 0;
    char tmp[3];
    int len = strlen(line);

    // start code
    if (p == NULL || *p != ':') {
        fprintf(stderr, "Invalid format\n");
        return -1;
    }
    p += 1;
    len --;

    if (len < 2) {
        fprintf(stderr, "invalid format\n");
        return -1;
    }

    // byte count
    byte_count = hexstr2val(p);
    sum += byte_count;
    p += 2;
    len -= 2;

    if (len < 4) {
        fprintf(stderr, "invalid format\n");
        return -1;
    }
    
    // address
    addr_high = (unsigned short)hexstr2val(p);
    addr_low = (unsigned short)hexstr2val(p + 2);
    sum += addr_high + addr_low;
    
    address = (unsigned short)(addr_high << 8)
        | (unsigned short)hexstr2val(p + 2);
    p += 4;
    len -= 4;

    if (len < 2) {
        fprintf(stderr, "invalid format\n");
        return -1;
    }

    // record type
    type = hexstr2val(p);
    sum += type;
    p += 2;
    len -= 2;

    
    if (len < byte_count * 2) {
        fprintf(stderr, "invalid format\n");
        return -1;
    }
    
    for (int i = 0; i < byte_count; i++) {
        unsigned char d;

        if (type == DATA
            && address >= offset
            && address < offset + interval * length
            && (address - offset) % interval == 0) {

            int idx = (address - offset) / interval;
            d = key[idx];
            sprintf(tmp, "%02X", d);
            *p = tmp[0];
            *(p + 1) = tmp[1];
        } else {
            d = hexstr2val(p);
        }

        sum += d;
        p += 2;
        len -= 2;
        
        address++;
    }

    
    if (len < 2) {
        fprintf(stderr, "invalid format\n");
        return -1;
    }

    sum = 0 - sum;

    sprintf(p, "%02X", sum);

    return 1;
}


int
parse_key(char *buf, unsigned char key[])
{
    char *p = buf;

    // parse key file
    for (int i = 0; i < KEY_LEN; i++) {
        char *p2;
        long val;
        p2 = strchr(p, ',');
        if (p2 != NULL) {
            *p2 = '\0';
        } else if (i < KEY_LEN - 1) {
            // ',' not found and i is not last value
            fprintf(stderr, "Invalid key (key should be %d Byte)\n", KEY_LEN);
            return -1;
        }
        
        errno = 0;
        val = strtol(p, NULL, 16);
        if (errno != 0) {
            perror("strtol");
            fprintf(stderr, "Invalid key (key should be hexadecimal value array)\n");
            return -1;
        }

        if (val < 0 || val > 256) {
            fprintf(stderr, "Invalid key (each value of key should be a single byte data)\n");
            return -1;
        }
        
        key[i] = val;

        if (p2 != NULL) {
            p = p2 + 1;
        }
    }
    return 1;
}


void
dump(unsigned char *p, int len)
{
    for (int i = 0; i < len; i++) {
        if (i % 16 == 0)
            printf("%08x  ", i);

        printf("%02x", p[i]);
        
        if (i % 16 < 16 - 1) {
            printf(" ");
            if (i % 16 == 7)
                printf(" ");
        } else {
            printf("\n");
        }
    }
    if (len % 16 != 0) {
        printf("\n");
    }
}


#define TEMPLATE_FILE "template.hex"
#define KEY_FILE "key.txt"
#define OUT_FILE "cpics2prg.hex"


int
main(int argc, char **argv)
{
    FILE *fpi, *fpo;
    char buf[256];

    char *templatefile;
    char *keyfile;
    char *outfile;
    unsigned char key[KEY_LEN];
    int ret = -1;

    SHA1Context sha;
    unsigned char digest[SHA1HashSize];
    int matched = -1;
    struct key_sha1 read_key;

    if (!(argc == 1 || argc == 4)) {
        fprintf(stderr, "Invalid argument\n");
        fprintf(stderr, "USAGE: cpics2_gen\n");
        fprintf(stderr, "USAGE: cpics2_gen <templatefile> <keyfile> <outfile>\n");
        goto FIN;
    }

    if (argc == 4) {
        templatefile = argv[1];
        keyfile = argv[2];
        outfile = argv[3];
    } else {
        templatefile = TEMPLATE_FILE;
        keyfile = KEY_FILE;
        outfile = OUT_FILE;
    }
    

    // read key file
    printf("Read key file \"%s\" ... ", keyfile);
    fflush(stdout);
    
    fpi = fopen(keyfile, "rb");
    if (fpi == NULL) {
        perror("fopen");
        fprintf(stderr, "Key file \"%s\" open failed\n", keyfile);
        goto FIN;
    }

    printf("OK\n");
    
    fgets(buf, sizeof(buf) - 1, fpi);

    fclose(fpi);

    if (parse_key(buf, key) < 0) {
        goto FIN;
    }

    SHA1Reset(&sha);
    SHA1Input(&sha, (const unsigned char *)key, KEY_LEN);
    SHA1Result(&sha, digest);

    for (int i = 0, j = 0; i < SHA1HashSize; i += sizeof(unsigned int), j++) {
        read_key.sha1[j] = ((unsigned int)digest[i] << 24)
            | ((unsigned int)digest[i + 1] << 16)
            | ((unsigned int)digest[i + 2] << 8)
            | (unsigned int)digest[i + 3];
    }
  
    
    for (int i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        matched = i;
        for (int j = 0; j < SHA1HashSize /sizeof(unsigned int); j++) {
            if (keys[i].sha1[j] != read_key.sha1[j]) {
                matched = -1;
                break;
            }
        }
        if (matched >= 0)
            break;
    }

    
    printf("================================\n");
    printf("Key data:\n");

    dump(key, KEY_LEN);

    printf("SHA1: ");
    for (int i = 0; i < SHA1HashSize / sizeof(unsigned int); i++) {
        printf("%08x", read_key.sha1[i]);
    }
    printf("\n");
    
    
    if (matched >= 0) {
        printf("Key name: %s\n", keys[matched].name);
    } else {
        printf("*** Unknown key ***\n");
    }
    
    printf("================================\n");
    
    // open template hex file

    printf("Read template hex file \"%s\" ... ", templatefile);
    fflush(stdout);
    
    fpi = fopen(templatefile, "rb");
    if (fpi == NULL) {
        perror("fopen");
        fprintf(stderr, "Template hex file \"%s\" open failed\n", templatefile);
        goto FIN;
    }

    printf("OK\n");

    printf("Write to output file \"%s\" ... ", outfile);
    fflush(stdout);
    
    fpo = fopen(outfile, "wb");
    if (fpo == NULL) {
        perror("fopen");
        fprintf(stderr, "Output file \"%s\" open failed\n", outfile);
        goto FIN;
    }
        
    while (fgets(buf, sizeof(buf) - 1, fpi) > 0) {
        patch_hex(buf, key, KEY_OFFSET, KEY_INTERVAL, KEY_LEN);
        fprintf(fpo, "%s\r\n", buf);
    }

    printf("OK\n");
    
    fclose(fpo);

    fclose(fpi);

    ret = 0;
    
 FIN:
    fflush(stderr);

    printf("Press any key to exit.\n");

    fflush(stdout);
    
    getchar();
    
    return ret;
}
