#ifndef MOD60_H
#define MOD60_H

#include "quantum.h"

#define LAYOUT_split_all( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d, L2c,      R00, R01, R02, R03, \
    L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d,           R10, R11, R12, R13, \
    L20, L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b,      L2d,           R20, R21, R22, R23, \
    L30, L31, L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c, L3d,           R30, R31, R32, R33, \
    L40, L41, L42,      L44,      L46,      L48,      L4a, L4b, L4c, L4d,           R40, R41, R42, R43  \
) { \
    { L00,  L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d }, \
    { L10,  L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d }, \
    { L20,  L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b, L2c, L2d }, \
    { L30,  L31, L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c, L3d }, \
    { L40,  L41, L42,KC_NO,L44,KC_NO,L46,KC_NO,L48,KC_NO,L4a, L4b, L4c, L4d }, \
    { R00,  R01, R02, R03,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R10,  R11, R12, R13,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R20,  R21, R22, R23,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R30,  R31, R32, R33,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R40,  R41, R42, R43,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }  \
}


#define LAYOUT_ansi( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d,        R00, R01, R02, R03, \
    L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d,        R10, R11, R12, R13, \
    L20, L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b,      L2d,        R20, R21, R22, R23, \
    L30,      L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c,             R30, R31, R32, R33, \
    L40, L41, L42,                L46,                L4a, L4b, L4c, L4d,        R40, R41, R42, R43  \
) { \
    { L00,  L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d  }, \
    { L10,  L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d  }, \
    { L20,  L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b,KC_NO,L2d  }, \
    { L30,KC_NO, L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c,KC_NO }, \
    { L40,  L41, L42,KC_NO,KC_NO,KC_NO,L46,KC_NO,KC_NO,KC_NO,L4a,L4b,L4c,L4d }, \
    { R00,  R01, R02, R03,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R10,  R11, R12, R13,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R20,  R21, R22, R23,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R30,  R31, R32, R33,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R40,  R41, R42, R43,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }  \
}

#define LAYOUT_tsangan( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d, L2c,          R00, R01, R02, R03, \
    L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d,               R10, R11, R12, R13, \
    L20, L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b,      L2d,               R20, R21, R22, R23, \
    L30,      L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c, L3d,               R30, R31, R32, R33, \
    L40, L41, L42,                L46,                     L4b, L4c, L4d,               R40, R41, R42, R43  \
) { \
    { L00,  L01, L02, L03, L04, L05, L06, L07, L08, L09, L0a, L0b, L0c, L0d }, \
    { L10,  L11, L12, L13, L14, L15, L16, L17, L18, L19, L1a, L1b, L1c, L1d }, \
    { L20,  L21, L22, L23, L24, L25, L26, L27, L28, L29, L2a, L2b, L2c, L2d }, \
    { L30,KC_NO, L32, L33, L34, L35, L36, L37, L38, L39, L3a, L3b, L3c, L3d }, \
    { L40,  L41, L42,KC_NO,KC_NO,KC_NO,L46,KC_NO,KC_NO,KC_NO,KC_NO, L4b, L4c, L4d }, \
    { R00,  R01, R02, R03,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R10,  R11, R12, R13,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R20,  R21, R22, R23,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R30,  R31, R32, R33,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { R40,  R41, R42, R43,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }  \
}

#define LAYOUT_all LAYOUT_split_all

#endif
