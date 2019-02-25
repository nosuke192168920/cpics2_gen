#ifndef _SHA1_H_
#define _SHA1_H_

#include <stdint.h>

enum {
    shaSuccess = 0,
    shaNull,            /* Null pointer parameter */
    shaInputTooLong,    /* input data too long */
    shaStateError,      /* called Input after FinalBits or Result */
    shaBadParam         /* passed a bad parameter */
};

#define SHA1HashSize 20
#define SHA1_Message_Block_Size 64

#ifndef USE_MODIFIED_MACROS
# define SHA_Ch(x,y,z)        (((x) & (y)) ^ ((~(x)) & (z)))
# define SHA_Maj(x,y,z)       (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))
#else /* USE_MODIFIED_MACROS */
/*
 * The following definitions are equivalent and potentially faster.
 */
# define SHA_Ch(x, y, z)      (((x) & ((y) ^ (z))) ^ (z))
# define SHA_Maj(x, y, z)     (((x) & ((y) | (z))) | ((y) & (z)))
#endif /* USE_MODIFIED_MACROS */

#define SHA_Parity(x, y, z)  ((x) ^ (y) ^ (z))

typedef struct SHA1Context {
    uint32_t Intermediate_Hash[SHA1HashSize/4]; /* Message Digest */
    uint32_t Length_High;               /* Message length in bits */
    uint32_t Length_Low;                /* Message length in bits */

    int_least16_t Message_Block_Index;  /* Message_Block array index */
                                        /* 512-bit message blocks */
    uint8_t Message_Block[SHA1_Message_Block_Size];

    int Computed;                   /* Is the hash computed? */
    int Corrupted;                  /* Cumulative corruption code */
} SHA1Context;


int SHA1Reset(SHA1Context *context);
int SHA1Input(SHA1Context *context,
              const uint8_t *message_array, unsigned length);

int SHA1FinalBits(SHA1Context *context, uint8_t message_bits,
                  unsigned int length);

int SHA1Result(SHA1Context *context,
               uint8_t Message_Digest[SHA1HashSize]);

#endif // _SHA1_H_
