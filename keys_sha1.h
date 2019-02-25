#ifndef _KEY_SHA1_H_
#define _KEY_SHA1_H_

#include "sha1.h"

#define NAMELEN 16

struct key_sha1 {
    unsigned char name[NAMELEN];
    unsigned int sha1[SHA1HashSize / sizeof(unsigned int)];
};

#define KEY_SHA1_1944 {"1944", {0xf0df9cf7, 0x772b48e6, 0x422e22bb, 0xce9340ee, 0x33bc09ba}}
#define KEY_SHA1_1944j {"1944j", {0xe3ba1d67, 0x5b3e16e9, 0x0b709c5a, 0xaf10bad7, 0x233c9ecb}}
#define KEY_SHA1_19xx {"19xx", {0x8c995bd0, 0x0941ffe0, 0x145cb80e, 0x4f105ef8, 0xef0a0001}}
#define KEY_SHA1_19xxa {"19xxa", {0x3c2df0e9, 0x3175c2e2, 0x5faae2ab, 0x3e062ac5, 0xd79b35a2}}
#define KEY_SHA1_19xxb {"19xxb", {0x8adae391, 0xe2e62ca1, 0xcf3caece, 0x813bf7f7, 0xe9a1f164}}
#define KEY_SHA1_19xxh {"19xxh", {0x86b83775, 0xd0bb76a2, 0x1d12be81, 0xd4dcdeb1, 0x7d7787ef}}
#define KEY_SHA1_19xxj {"19xxj", {0x82188cc6, 0x9e59d5ce, 0x86d0e178, 0xcf6d9f8f, 0x04da0633}}
#define KEY_SHA1_armwar {"armwar", {0xec4e0b24, 0xd6de9660, 0x221e6306, 0x3fba04df, 0x48682e1a}}
#define KEY_SHA1_armwara {"armwara", {0x51cca388, 0xe36712cb, 0xc8312774, 0xd07fa5fc, 0x6d06618e}}
#define KEY_SHA1_armwaru {"armwaru", {0x3a9b1339, 0x30be67fa, 0xd4d2de6e, 0x0ca51377, 0xe73edd25}}
#define KEY_SHA1_avsp {"avsp", {0xed0ca61e, 0xefe9ba13, 0x6539300b, 0x5bbbc856, 0x76abd490}}
#define KEY_SHA1_avspa {"avspa", {0x3f74bdab, 0x733af431, 0xf83fc99b, 0x112c6085, 0xd8973753}}
#define KEY_SHA1_avsph {"avsph", {0xb5f7c90c, 0x6c258ee9, 0xd0943028, 0x298bc8a0, 0xfcba63fb}}
#define KEY_SHA1_avspj {"avspj", {0x85b30ccd, 0xe86e2e1f, 0x50e66259, 0x8dc81d47, 0x219519a1}}
#define KEY_SHA1_avspu {"avspu", {0x60d5a12c, 0x77d07efc, 0x01f48968, 0xf4a12c59, 0xbf6b629e}}
#define KEY_SHA1_batcir {"batcir", {0xd390c5ce, 0x88ccc6c4, 0x0ec39fdd, 0x93475a7d, 0xeb5be2a5}}
#define KEY_SHA1_batcira {"batcira", {0x9f225220, 0x5d73c771, 0x389d03d0, 0x87f2a8e5, 0x492d309d}}
#define KEY_SHA1_batcirj {"batcirj", {0x9ea7e255, 0xf48ef5ea, 0xa8959835, 0x5292b858, 0xf37f342f}}
#define KEY_SHA1_choko {"choko", {0x5c481ffa, 0xa93faec5, 0x7d0b80b6, 0x78c8c0cc, 0xa1a699c0}}
#define KEY_SHA1_csclub {"csclub", {0xd70384b6, 0x4637dbbc, 0xc064d39f, 0x984f73fc, 0x48bbac44}}
#define KEY_SHA1_cscluba {"cscluba", {0xaacc663c, 0xd0a34505, 0xfc6aa94f, 0xdeaddfa3, 0x409a9ded}}
#define KEY_SHA1_csclubh {"csclubh", {0x37f29580, 0x497d24c8, 0xf248031a, 0xcdfab063, 0x74ed77fd}}
#define KEY_SHA1_csclubj {"csclubj", {0x8f792831, 0xdc7e07fb, 0x621806c4, 0xe320a047, 0xf801e9b8}}
#define KEY_SHA1_cybots {"cybots", {0xec7a322c, 0x8dceb16c, 0x98f7c283, 0x7679e91b, 0x738fdd0a}}
#define KEY_SHA1_cybotsj {"cybotsj", {0x66f2d85a, 0x25140ab9, 0x071a0e19, 0x2ee40e75, 0x0381bffc}}
#define KEY_SHA1_cybotsu {"cybotsu", {0x1a37f090, 0x28714d2b, 0x0f4543fa, 0xb3cbfe5b, 0xa4b571ff}}
#define KEY_SHA1_ddsom {"ddsom", {0x9239f9ad, 0x7c2ed0d7, 0xd062da2d, 0xb92b0710, 0x4b5bb9a7}}
#define KEY_SHA1_ddsoma {"ddsoma", {0xad19e78b, 0x938a67c9, 0xf5ed0dcd, 0x5c68b383, 0xe6ce0575}}
#define KEY_SHA1_ddsomb {"ddsomb", {0xf905cfa6, 0xd97741f7, 0x7994c8c9, 0xd0a1164f, 0x064f9343}}
#define KEY_SHA1_ddsomh {"ddsomh", {0xc17ea2da, 0xb973f54c, 0xe2eee457, 0xf83c519b, 0x86087117}}
#define KEY_SHA1_ddsomj {"ddsomj", {0xe07b50ae, 0x464c3543, 0x9333dd98, 0x3e2acac4, 0x8a1ce529}}
#define KEY_SHA1_ddsomu {"ddsomu", {0xc8c4e829, 0x8c8a6c37, 0xb91f9ae9, 0x5474a15d, 0xfad3e986}}
#define KEY_SHA1_ddtod {"ddtod", {0xd5fb970d, 0x54dff0ab, 0x08577853, 0x0bae3279, 0x1cb0f38e}}
#define KEY_SHA1_ddtoda {"ddtoda", {0x04667003, 0x776e2dbd, 0x207933b5, 0xc707bed6, 0x35871cac}}
#define KEY_SHA1_ddtodh {"ddtodh", {0x4bc2c096, 0x8115365f, 0xd8cd721b, 0x769f62ed, 0x32b02cf5}}
#define KEY_SHA1_ddtodj {"ddtodj", {0xf8cc1e2b, 0x9d9b8978, 0x99e55cc3, 0x679b836b, 0x27d22453}}
#define KEY_SHA1_ddtodu {"ddtodu", {0x4fbcb148, 0x4dd5b8d5, 0x69e54a96, 0xc81b3aa0, 0xfaf37789}}
#define KEY_SHA1_dimahoo {"dimahoo", {0xb21f0e7b, 0x6c8952c5, 0x3be43cd3, 0x3044feeb, 0x7736cae6}}
#define KEY_SHA1_dimahoou {"dimahoou", {0x023ffb14, 0xdd03548a, 0x23ad4ab0, 0x7d16041a, 0x31c75691}}
#define KEY_SHA1_dstlk {"dstlk", {0xce57b3d5, 0x3557f04a, 0xc53dac97, 0xd67374c2, 0x88d85866}}
#define KEY_SHA1_dstlka {"dstlka", {0xd008f22d, 0xe82d6df1, 0x430ceb5c, 0x121962bd, 0x0e322057}}
#define KEY_SHA1_dstlkh {"dstlkh", {0x748be38b, 0xbc766be8, 0xeebf6a60, 0x77080194, 0x2ad502f2}}
#define KEY_SHA1_dstlku {"dstlku", {0xbfd2f74d, 0x0b4a4df1, 0x28f2874f, 0x09b0e8b9, 0x57d1f47b}}
#define KEY_SHA1_ecofghtr {"ecofghtr", {0x167a189a, 0x4bd4a50c, 0x5df4ef9c, 0x19cb3d1f, 0xf11848f5}}
#define KEY_SHA1_ecofghtra {"ecofghtra", {0x6af89f5c, 0x8cec038b, 0x9066eb4e, 0xa0a5d719, 0xcfa58ed0}}
#define KEY_SHA1_ecofghtrh {"ecofghtrh", {0xd337dc05, 0x08eb896f, 0xcf6494df, 0xc00e2eaf, 0xebcfedfe}}
#define KEY_SHA1_ecofghtru {"ecofghtru", {0x933e6517, 0x79ea0b26, 0xb657de5d, 0xc62703e3, 0x7821b07f}}
#define KEY_SHA1_gigawing {"gigawing", {0x81a0aa67, 0x68a1e94a, 0xed25503a, 0xd8b3814b, 0xb23c41b5}}
#define KEY_SHA1_gigawinga {"gigawinga", {0xefc33bf7, 0x0953eeab, 0xf314ba0b, 0xf3d65d65, 0x113b4432}}
#define KEY_SHA1_gigawingb {"gigawingb", {0x034ba943, 0xa9c190a9, 0x9641301c, 0xc24422d4, 0xd299869f}}
#define KEY_SHA1_gigawingh {"gigawingh", {0x3285db4c, 0x4faffa57, 0xdcd506e0, 0x8fe36739, 0xa5fa545d}}
#define KEY_SHA1_gigawingj {"gigawingj", {0x6e21e1f6, 0x39394e0e, 0x442f6250, 0xa60f9d78, 0xe160ec09}}
#define KEY_SHA1_gmahou {"gmahou", {0x7babf076, 0xdee618ec, 0x9f88d8ca, 0x0eaef6af, 0x29c43a3b}}
#define KEY_SHA1_hsf2 {"hsf2", {0x457b6ba0, 0x5458f1be, 0x9ebb8aa9, 0xcbab0a88, 0x08cb6857}}
#define KEY_SHA1_hsf2a {"hsf2a", {0x65f99956, 0x9d8479bb, 0x8d27ba8c, 0x3e3c92f8, 0x80b69195}}
#define KEY_SHA1_hsf2j {"hsf2j", {0x925cee29, 0xb37cb7a4, 0x048383ac, 0x715ad96f, 0x83280d37}}
#define KEY_SHA1_jyangoku {"jyangoku", {0x6c0684ab, 0x321bd555, 0xec9f8f16, 0xe63f6c35, 0x8318ad7e}}
#define KEY_SHA1_megaman2 {"megaman2", {0x1039ed39, 0x6ee580dc, 0x46d104fa, 0x4cd97b6e, 0x67930ede}}
#define KEY_SHA1_megaman2a {"megaman2a", {0x8aef786f, 0xc619ecc7, 0x572f4dc1, 0x66bae789, 0xbf436c6b}}
#define KEY_SHA1_megaman2h {"megaman2h", {0x24b059ec, 0x7ef2188c, 0xce0636ea, 0xcfbc9e67, 0x6e8d558b}}
#define KEY_SHA1_mmancp2u {"mmancp2u", {0xf1f01efa, 0xfd16019a, 0x150dce2b, 0x80bd0349, 0xb4015d76}}
#define KEY_SHA1_mmatrix {"mmatrix", {0x324d7bf9, 0xd95220ec, 0xab140b13, 0x85eba708, 0x7f1a9669}}
#define KEY_SHA1_mmatrixj {"mmatrixj", {0xfb749a5d, 0xa0a79932, 0x2ec131a1, 0x5a017971, 0xe586c5fc}}
#define KEY_SHA1_mpang {"mpang", {0x6e015eda, 0x29ac94aa, 0x420d7c70, 0xcdebffee, 0x52fde032}}
#define KEY_SHA1_msh {"msh", {0x8efc561c, 0xec2bcc17, 0x902d27ed, 0x4e27b7d2, 0xb9eccdbc}}
#define KEY_SHA1_msha {"msha", {0xcf51a47b, 0x9a03c845, 0xfa815183, 0xdc43dcd6, 0xbdee369b}}
#define KEY_SHA1_mshb {"mshb", {0x46042a8b, 0x84627210, 0x2cc8f967, 0xa6b81e48, 0x013d19f4}}
#define KEY_SHA1_mshh {"mshh", {0x318b450a, 0xa9501f50, 0x6511a57e, 0x8c991659, 0x453c9a31}}
#define KEY_SHA1_mshj {"mshj", {0xa1c72dee, 0xdab2bafe, 0x5d594bba, 0x905a6274, 0x575b6e56}}
#define KEY_SHA1_mshu {"mshu", {0x86d31f26, 0x6f0fc20c, 0xa5f1607e, 0xebf4db68, 0x8323147f}}
#define KEY_SHA1_mshvsf {"mshvsf", {0x448eb440, 0x494c9718, 0x00370f10, 0x3b4d1f21, 0xa7266c6c}}
#define KEY_SHA1_mshvsfa {"mshvsfa", {0x6d5fff45, 0xe7cc4050, 0xb528deba, 0xec68a8fa, 0x60d40f34}}
#define KEY_SHA1_mshvsfb {"mshvsfb", {0xdbebcebf, 0x24997de4, 0x8e5174d8, 0x2af5cd53, 0xdbe0dada}}
#define KEY_SHA1_mshvsfh {"mshvsfh", {0xd7b83c72, 0xfe67394a, 0x8ee46fbb, 0x3168c0e5, 0xf4cab1b3}}
#define KEY_SHA1_mshvsfj {"mshvsfj", {0x762844b5, 0x9b2fcf52, 0x9a26ad3d, 0xde828241, 0x5db926b3}}
#define KEY_SHA1_mshvsfu {"mshvsfu", {0xdc1d5986, 0x2d07112b, 0x75348ae5, 0xad925d37, 0x16099e82}}
#define KEY_SHA1_mvsc {"mvsc", {0x9d725a7c, 0x6bbc20e4, 0x6f749eae, 0xc4bab15b, 0x0195077a}}
#define KEY_SHA1_mvsca {"mvsca", {0x17267ef1, 0x939348ad, 0x1f840df4, 0x913ff04e, 0x43a3aac8}}
#define KEY_SHA1_mvscb {"mvscb", {0x31ff54f7, 0x5b73661f, 0xbfa8ebbb, 0x2395924f, 0xea3cbae3}}
#define KEY_SHA1_mvsch {"mvsch", {0x942a2d8a, 0x294e826d, 0xe725aed2, 0x5cb918fe, 0x815be33a}}
#define KEY_SHA1_mvscj {"mvscj", {0x6468dd20, 0xba89e4f6, 0xdc03340d, 0x21869469, 0x0151ebe0}}
#define KEY_SHA1_mvscu {"mvscu", {0x7f7288ce, 0xadf233d9, 0x13728f7c, 0x4a8841ad, 0xcb5994e8}}
#define KEY_SHA1_nwarr {"nwarr", {0xb22762b9, 0xe85f0e70, 0xe0ec4833, 0xbcca7c5b, 0x6b902c4c}}
#define KEY_SHA1_nwarra {"nwarra", {0xe8856b4e, 0x60a9e42b, 0xd5126323, 0xad4f70f6, 0xa88b6f4c}}
#define KEY_SHA1_nwarrb {"nwarrb", {0x632c0e2a, 0xc666a97b, 0xb5d8ac59, 0x6cde8dd0, 0xbbfe303b}}
#define KEY_SHA1_nwarrh {"nwarrh", {0xc383c1df, 0x3deb8ca9, 0xd3b7677f, 0xbaa85424, 0xa18c8115}}
#define KEY_SHA1_nwarru {"nwarru", {0x77a91d9a, 0x223238ce, 0x80e20eb7, 0xb385994f, 0xc414eee9}}
#define KEY_SHA1_pfghtj {"pfghtj", {0xefe090ff, 0xa8992823, 0xcfd787ad, 0xe736df54, 0x87d69ca7}}
#define KEY_SHA1_pgear {"pgear", {0xe480d16b, 0xcfb58f9a, 0x8402bbb8, 0x1aedd686, 0xa0f2f754}}
#define KEY_SHA1_progear {"progear", {0x3fd0cc78, 0xfad80210, 0xa7cf8b11, 0x50cba1e6, 0x121998dd}}
#define KEY_SHA1_progeara {"progeara", {0xbe3884a2, 0x23e76750, 0xabe2556b, 0x000a821a, 0x262423f0}}
#define KEY_SHA1_progearj {"progearj", {0xd0cfe4ef, 0xfac0e9ed, 0xe8ad31db, 0x89724366, 0x38ff8d6f}}
#define KEY_SHA1_pzloop2 {"pzloop2", {0x5c715f0e, 0xf1e06640, 0x27faa6c2, 0xa7f0f878, 0x462cb7ae}}
#define KEY_SHA1_qndream {"qndream", {0x541da3a6, 0x2311e35e, 0x563cbf72, 0x03899884, 0x64b6ed7d}}
#define KEY_SHA1_ringdest {"ringdest", {0x596d94ba, 0x937a407d, 0xa94e85d9, 0xc2026a7c, 0x7d592173}}
#define KEY_SHA1_ringdesta {"ringdesta", {0x88ccc95c, 0xc2184b7e, 0x37e09b19, 0xff88ef05, 0x6a1561af}}
#define KEY_SHA1_ringdesth {"ringdesth", {0xc6d11141, 0x2c3960b2, 0x4a1be5c4, 0x9fe4ec4d, 0x17324e06}}
#define KEY_SHA1_rmancp2j {"rmancp2j", {0x7d72a07b, 0xd556874a, 0x4b9b5cf3, 0x727d3c54, 0x7051bb7a}}
#define KEY_SHA1_rockman2j {"rockman2j", {0xf9140da0, 0x84971193, 0x8c4d8a98, 0xfb38bc15, 0x04582a43}}
#define KEY_SHA1_sfa {"sfa", {0xaa54369b, 0x38543599, 0x1ae88480, 0x1228427a, 0x0d07cfc7}}
#define KEY_SHA1_sfa2 {"sfa2", {0xa8bc83b3, 0x41f9ea2b, 0xcc188614, 0x19bd574d, 0x159c6fcc}}
#define KEY_SHA1_sfa2u {"sfa2u", {0xe22567ab, 0x83b35c39, 0xc6545742, 0xbc85ca98, 0xae97f288}}
#define KEY_SHA1_sfa3 {"sfa3", {0xa0d2f8e6, 0x97a7a420, 0x1762cb02, 0x84258184, 0x0b2a7f78}}
#define KEY_SHA1_sfa3b {"sfa3b", {0x9973f186, 0x967a4737, 0x060978b2, 0xee5d0cb2, 0xda4aa78a}}
#define KEY_SHA1_sfa3h {"sfa3h", {0xd20e2b1b, 0xb2b90278, 0xa7667d52, 0x5a022c6c, 0x05b8c778}}
#define KEY_SHA1_sfa3u {"sfa3u", {0x11953de1, 0x2ed8fbb6, 0xf60ad03b, 0x1ba5e22a, 0x429b7cfa}}
#define KEY_SHA1_sfau {"sfau", {0x6fe6fc5a, 0x7984de06, 0x8b4a31ae, 0x64cd06b5, 0x7aac682e}}
#define KEY_SHA1_sfz2a {"sfz2a", {0xafae8510, 0x34749583, 0x5936fa04, 0xacab72af, 0xbff7a3dd}}
#define KEY_SHA1_sfz2al {"sfz2al", {0xf4fa4464, 0x6746ab4c, 0x6f2e76ea, 0xba57a7ae, 0xe32e2933}}
#define KEY_SHA1_sfz2alb {"sfz2alb", {0x42feb1c5, 0xc3fc6757, 0x4deef5cd, 0x0d783a29, 0xd108be08}}
#define KEY_SHA1_sfz2alh {"sfz2alh", {0x2bedd94a, 0xfd600da2, 0xf2a5c74b, 0xc0b0c2d3, 0x3a4c13cf}}
#define KEY_SHA1_sfz2alj {"sfz2alj", {0x0fabdab6, 0x77416c5a, 0x8060526d, 0x997e6f80, 0xb26f9bb3}}
#define KEY_SHA1_sfz2b {"sfz2b", {0xacdac3c4, 0xd422a345, 0x29f3c7a1, 0x51d1d3ab, 0x9404f999}}
#define KEY_SHA1_sfz2h {"sfz2h", {0xf50ea318, 0x185133ca, 0x4aef296d, 0x70b47136, 0x4372e060}}
#define KEY_SHA1_sfz2j {"sfz2j", {0x6a928a2d, 0x44f416cc, 0xdb0c09a8, 0xdd7466ac, 0x12f38110}}
#define KEY_SHA1_sfz2n {"sfz2n", {0xbcf9f8d1, 0xfb5fe74d, 0xd2568a4a, 0x8d8a00d5, 0x384ea0db}}
#define KEY_SHA1_sfz3a {"sfz3a", {0x0cfeb0b5, 0x3973fff0, 0x8b673a10, 0xb1f7e6e3, 0xb46aa214}}
#define KEY_SHA1_sfz3j {"sfz3j", {0xb0586990, 0x2d4d5968, 0xd5f79ed6, 0x165eb4b7, 0x8e1ddcdd}}
#define KEY_SHA1_sfza {"sfza", {0x0dc4732d, 0x7f1dc574, 0x2db646d5, 0xdc22fab2, 0xdc1620dc}}
#define KEY_SHA1_sfzb {"sfzb", {0x1d35b79c, 0xc1c48c86, 0x6d381f9a, 0x0a4b4062, 0x6ec617c5}}
#define KEY_SHA1_sfzh {"sfzh", {0xf1397e31, 0xf85fc35f, 0x8d4aeee6, 0x38c41459, 0x5ca09ce1}}
#define KEY_SHA1_sfzj {"sfzj", {0x5da2c407, 0x852ce7b2, 0x8153f3f9, 0x4de83288, 0x02ff2f2d}}
#define KEY_SHA1_sgemf {"sgemf", {0xf6189a7d, 0xcdd110f4, 0xd624cddf, 0xe2e51e49, 0xc40a0fdb}}
#define KEY_SHA1_sgemfa {"sgemfa", {0x1a5f1ada, 0xc6ebf1bf, 0x212d5937, 0x6afacb45, 0x9f5be23d}}
#define KEY_SHA1_sgemfh {"sgemfh", {0x19d43a7f, 0xc3c39fe7, 0x1c9b2888, 0x0d43dd4a, 0x6c2ebdbb}}
#define KEY_SHA1_smbomb {"smbomb", {0xefd40f5f, 0xf900b2ba, 0x1e1da5e3, 0x1d4a4717, 0xadacfe79}}
#define KEY_SHA1_spf2t {"spf2t", {0xdb4f257f, 0x6006b2f3, 0xcfa7cc70, 0x917228d6, 0x39324513}}
#define KEY_SHA1_spf2ta {"spf2ta", {0xb42e89be, 0x4bd36aa5, 0x7dc3c9b1, 0x34d8a021, 0xaca0814b}}
#define KEY_SHA1_spf2th {"spf2th", {0xe0b82bd4, 0x71ceadce, 0xe1e52ff5, 0xa4a8835d, 0x53a84a66}}
#define KEY_SHA1_spf2tu {"spf2tu", {0xc14c6b14, 0x8761856b, 0xf83b31b5, 0x2df83be4, 0x61ac8d62}}
#define KEY_SHA1_spf2xj {"spf2xj", {0xd18f0150, 0x70d08e77, 0x2677ef79, 0xb542f126, 0x64cfba53}}
#define KEY_SHA1_ssf2 {"ssf2", {0x43d49107, 0xe96a4a14, 0xf1f25931, 0xad3ae606, 0x5958150e}}
#define KEY_SHA1_ssf2a {"ssf2a", {0xd027d041, 0x36e208ac, 0xe6d31163, 0xc5e6de18, 0xe96694e6}}
#define KEY_SHA1_ssf2h {"ssf2h", {0x2d290871, 0x023f77cf, 0xe4eae3bd, 0x8611bb1a, 0x5f98df03}}
#define KEY_SHA1_ssf2j {"ssf2j", {0x5e9ccfde, 0x4b476efd, 0xce4e4fcb, 0xaf8facef, 0xe41a4c89}}
#define KEY_SHA1_ssf2t {"ssf2t", {0xfcd2b9a1, 0xa640a0de, 0xe4a674dc, 0x9cfb3975, 0x466f7757}}
#define KEY_SHA1_ssf2ta {"ssf2ta", {0x9e9fcfaa, 0x40e792b0, 0xebf4585f, 0x1f8995e5, 0xe3fee3fd}}
#define KEY_SHA1_ssf2tb {"ssf2tb", {0x22a3e778, 0x72259158, 0x33ffdef6, 0xed2a896b, 0x079fc2f1}}
#define KEY_SHA1_ssf2tba {"ssf2tba", {0xa211373e, 0x6f45ef07, 0x3f36bda2, 0xd6fbfc2c, 0xd5c7866b}}
#define KEY_SHA1_ssf2tbh {"ssf2tbh", {0x03fcad05, 0xf17edbcf, 0x037cad0e, 0x5c9acd68, 0x3f432781}}
#define KEY_SHA1_ssf2tbj {"ssf2tbj", {0x9c375eef, 0xfa599be4, 0x994e8efd, 0x7dee9d0e, 0x67613a13}}
#define KEY_SHA1_ssf2tbu {"ssf2tbu", {0xd740581a, 0xcdaccbc7, 0x5308f0a8, 0xc53a3a91, 0x0dc6a10f}}
#define KEY_SHA1_ssf2th {"ssf2th", {0xfc0704cb, 0x7f2da70f, 0x8d8b83d3, 0x23c8eab8, 0x51dfae89}}
#define KEY_SHA1_ssf2tu {"ssf2tu", {0x27a797fd, 0x6fe435e1, 0x4ca33494, 0x7df38d56, 0xf89f79de}}
#define KEY_SHA1_ssf2u {"ssf2u", {0x93f75708, 0x46b76464, 0xb2ec7d37, 0xa1ee1148, 0xef1ce76e}}
#define KEY_SHA1_ssf2xj {"ssf2xj", {0x187baff8, 0x3b54acfd, 0xcedd9b92, 0x22a4cc76, 0x8040c622}}
#define KEY_SHA1_ssf2xjr1r {"ssf2xjr1r", {0xe99efc6a, 0x5652fb96, 0x489ffcd7, 0xbcc6a172, 0x6b08d56b}}
#define KEY_SHA1_uecology {"uecology", {0xe71ca1ab, 0xf4101a8d, 0x580f9a81, 0xac71b5fd, 0x33c0fbfb}}
#define KEY_SHA1_vampj {"vampj", {0xe7128ac9, 0x4fc7c37a, 0x64e4640d, 0xb08f1769, 0x215769e5}}
#define KEY_SHA1_vhunt2 {"vhunt2", {0xf72cf448, 0x37f6d934, 0xdd6bc877, 0xc3c98db3, 0x88e72a67}}
#define KEY_SHA1_vhuntj {"vhuntj", {0x657a4484, 0xc40a8b58, 0x3abd74a8, 0xc7f0524e, 0xc6199dd2}}
#define KEY_SHA1_vsav {"vsav", {0x79fff0e2, 0x9f32e1ba, 0x21bdcc57, 0xd96f2c8e, 0x2997a2d1}}
#define KEY_SHA1_vsav2 {"vsav2", {0x35779f02, 0x84dc1559, 0x1493c8ec, 0x75ecda80, 0x1148f3e0}}
#define KEY_SHA1_vsava {"vsava", {0x3865972f, 0x2400b035, 0xac71b814, 0x4b0437ba, 0xde8dde22}}
#define KEY_SHA1_vsavh {"vsavh", {0x5c60390e, 0x540ea538, 0xb1cd0b31, 0x635a8ffa, 0x1844fa24}}
#define KEY_SHA1_vsavj {"vsavj", {0x7de11dbe, 0x4a7ea0e8, 0xb68ab332, 0xf80e32cb, 0x6c1bf48e}}
#define KEY_SHA1_vsavu {"vsavu", {0x214ea9a3, 0xbbb8e1c1, 0x33f77844, 0xdbe7a4de, 0xa94e35e1}}
#define KEY_SHA1_xmcota {"xmcota", {0xbeb8ac66, 0x2ac901ed, 0xf1a0e8a7, 0x999c24df, 0x64b8d219}}
#define KEY_SHA1_xmcotaa {"xmcotaa", {0xeffcfdf0, 0x3e71d386, 0x356c32c2, 0x803c8c84, 0x1871e24c}}
#define KEY_SHA1_xmcotab {"xmcotab", {0x99f9d1ec, 0xcd81c906, 0xb6adb08b, 0x5f154763, 0x6e649298}}
#define KEY_SHA1_xmcotah {"xmcotah", {0x6af21fe3, 0xc46133da, 0x9e085437, 0x5ff7ab2e, 0xaec64ce3}}
#define KEY_SHA1_xmcotaj {"xmcotaj", {0x06d94e8a, 0x20317279, 0x2f405c73, 0xf9cbb37f, 0x4738429f}}
#define KEY_SHA1_xmcotau {"xmcotau", {0x27e8209e, 0x5a0917b1, 0x27f0e65c, 0x53e95c28, 0xd78e7a0e}}
#define KEY_SHA1_xmvsf {"xmvsf", {0x1b401ffc, 0x241436c4, 0x869486c1, 0x74774b67, 0xe3bf3df8}}
#define KEY_SHA1_xmvsfa {"xmvsfa", {0x1938dee4, 0xbab79200, 0x576777a7, 0x0b814ff1, 0x179135c4}}
#define KEY_SHA1_xmvsfb {"xmvsfb", {0xa221b888, 0xd9ed1f9d, 0x1da0aab1, 0xb4749c3c, 0x6d2586f6}}
#define KEY_SHA1_xmvsfh {"xmvsfh", {0xb3914e72, 0xd391e0d7, 0x72542f78, 0x63680232, 0xfe3bc6f7}}
#define KEY_SHA1_xmvsfj {"xmvsfj", {0x65905400, 0xf4462c17, 0x5baa93b4, 0x3e015e85, 0x96def31b}}
#define KEY_SHA1_xmvsfu {"xmvsfu", {0x4de2691d, 0xe7de104d, 0xbba1f10b, 0x3f738e6f, 0x2b708a15}}
#define KEY_SHA1_phoenix {"phoenix", {0xeff33c65, 0xa4f3862c, 0x231f9e4d, 0x6fefa7b3, 0x4398dbf2}}

const struct key_sha1 keys[] = {
    KEY_SHA1_1944j,
    KEY_SHA1_1944,
    KEY_SHA1_19xxj,
    KEY_SHA1_19xx,
    KEY_SHA1_19xxa,
    KEY_SHA1_19xxb,
    KEY_SHA1_19xxh,
    KEY_SHA1_pgear,
    KEY_SHA1_armwar,
    KEY_SHA1_armwara,
    KEY_SHA1_armwaru,
    KEY_SHA1_avspj,
    KEY_SHA1_avsp,
    KEY_SHA1_avspa,
    KEY_SHA1_avsph,
    KEY_SHA1_avspu,
    KEY_SHA1_batcirj,
    KEY_SHA1_batcir,
    KEY_SHA1_batcira,
    KEY_SHA1_choko,
    KEY_SHA1_csclubj,
    KEY_SHA1_csclub,
    KEY_SHA1_cscluba,
    KEY_SHA1_csclubh,
    KEY_SHA1_cybotsj,
    KEY_SHA1_cybots,
    KEY_SHA1_cybotsu,
    KEY_SHA1_ddsomj,
    KEY_SHA1_ddsom,
    KEY_SHA1_ddsoma,
    KEY_SHA1_ddsomb,
    KEY_SHA1_ddsomh,
    KEY_SHA1_ddsomu,
    KEY_SHA1_ddtodj,
    KEY_SHA1_ddtod,
    KEY_SHA1_ddtoda,
    KEY_SHA1_ddtodh,
    KEY_SHA1_ddtodu,
    KEY_SHA1_gmahou,
    KEY_SHA1_dimahoo,
    KEY_SHA1_dimahoou,
    KEY_SHA1_vampj,
    KEY_SHA1_dstlk,
    KEY_SHA1_dstlka,
    KEY_SHA1_dstlkh,
    KEY_SHA1_dstlku,
    KEY_SHA1_uecology,
    KEY_SHA1_ecofghtr,
    KEY_SHA1_ecofghtra,
    KEY_SHA1_ecofghtrh,
    KEY_SHA1_ecofghtru,
    KEY_SHA1_gigawing,
    KEY_SHA1_gigawinga,
    KEY_SHA1_gigawingb,
    KEY_SHA1_gigawingh,
    KEY_SHA1_gigawingj,
    KEY_SHA1_hsf2,
    KEY_SHA1_hsf2a,
    KEY_SHA1_hsf2j,
    KEY_SHA1_jyangoku,
    KEY_SHA1_rockman2j,
    KEY_SHA1_megaman2,
    KEY_SHA1_megaman2a,
    KEY_SHA1_megaman2h,
    KEY_SHA1_rmancp2j,
    KEY_SHA1_mmancp2u,
    KEY_SHA1_mmatrix,
    KEY_SHA1_mmatrixj,
    KEY_SHA1_mpang,
    KEY_SHA1_mshj,
    KEY_SHA1_msh,
    KEY_SHA1_msha,
    KEY_SHA1_mshb,
    KEY_SHA1_mshh,
    KEY_SHA1_mshu,
    KEY_SHA1_mshvsfj,
    KEY_SHA1_mshvsf,
    KEY_SHA1_mshvsfa,
    KEY_SHA1_mshvsfb,
    KEY_SHA1_mshvsfh,
    KEY_SHA1_mshvsfu,
    KEY_SHA1_mvscj,
    KEY_SHA1_mvsc,
    KEY_SHA1_mvsca,
    KEY_SHA1_mvscb,
    KEY_SHA1_mvsch,
    KEY_SHA1_mvscu,
    KEY_SHA1_vhuntj,
    KEY_SHA1_nwarr,
    KEY_SHA1_nwarra,
    KEY_SHA1_nwarrb,
    KEY_SHA1_nwarrh,
    KEY_SHA1_nwarru,
    KEY_SHA1_pfghtj,
    KEY_SHA1_sgemf,
    KEY_SHA1_sgemfa,
    KEY_SHA1_sgemfh,
    KEY_SHA1_progear,
    KEY_SHA1_progeara,
    KEY_SHA1_progearj,
    KEY_SHA1_pzloop2,
    KEY_SHA1_qndream,
    KEY_SHA1_smbomb,
    KEY_SHA1_ringdest,
    KEY_SHA1_ringdesta,
    KEY_SHA1_ringdesth,
    KEY_SHA1_sfzj,
    KEY_SHA1_sfa,
    KEY_SHA1_sfau,
    KEY_SHA1_sfza,
    KEY_SHA1_sfzb,
    KEY_SHA1_sfzh,
    KEY_SHA1_sfz2j,
    KEY_SHA1_sfa2,
    KEY_SHA1_sfa2u,
    KEY_SHA1_sfz2a,
    KEY_SHA1_sfz2b,
    KEY_SHA1_sfz2h,
    KEY_SHA1_sfz2n,
    KEY_SHA1_sfz2alj,
    KEY_SHA1_sfz2al,
    KEY_SHA1_sfz2alb,
    KEY_SHA1_sfz2alh,
    KEY_SHA1_sfz3j,
    KEY_SHA1_sfz3a,
    KEY_SHA1_sfa3,
    KEY_SHA1_sfa3b,
    KEY_SHA1_sfa3h,
    KEY_SHA1_sfa3u,
    KEY_SHA1_spf2xj,
    KEY_SHA1_spf2t,
    KEY_SHA1_spf2tu,
    KEY_SHA1_spf2ta,
    KEY_SHA1_spf2th,
    KEY_SHA1_ssf2j,
    KEY_SHA1_ssf2,
    KEY_SHA1_ssf2u,
    KEY_SHA1_ssf2a,
    KEY_SHA1_ssf2h,
    KEY_SHA1_ssf2tbj,
    KEY_SHA1_ssf2tb,
    KEY_SHA1_ssf2tba,
    KEY_SHA1_ssf2tbh,
    KEY_SHA1_ssf2xj,
    KEY_SHA1_ssf2xjr1r,
    KEY_SHA1_ssf2t,
    KEY_SHA1_ssf2ta,
    KEY_SHA1_ssf2tu,
    KEY_SHA1_ssf2th,
    KEY_SHA1_vhunt2,
    KEY_SHA1_vsavj,
    KEY_SHA1_vsav,
    KEY_SHA1_vsava,
    KEY_SHA1_vsavh,
    KEY_SHA1_vsavu,
    KEY_SHA1_vsav2,
    KEY_SHA1_xmcotaj,
    KEY_SHA1_xmcota,
    KEY_SHA1_xmcotaa,
    KEY_SHA1_xmcotab,
    KEY_SHA1_xmcotah,
    KEY_SHA1_xmcotau,
    KEY_SHA1_xmvsfj,
    KEY_SHA1_xmvsf,
    KEY_SHA1_xmvsfa,
    KEY_SHA1_xmvsfb,
    KEY_SHA1_xmvsfh,
    KEY_SHA1_xmvsfu,
    KEY_SHA1_phoenix
};

#endif // _KEY_SHA1_H_
