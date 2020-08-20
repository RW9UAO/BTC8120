
#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is a layout that uses all available switch positions.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
/*
  Matrix col/row mapping

  ,----.    ,-------------------. ,-------------------. ,-------------------. ,--------------.
  | H7 |    | G7 | H0 | G0 | H1 | | G1 | H6 | G6 | H5 | | G5 | H4 | G4 | H2 | | G2 | H3 | G3 |
  `----'    `-------------------' `-------------------' `-------------------' `--------------'
  ,-------------------------------------------------------------------------. ,--------------. ,-------------------.
  | E3 | F3 | M3 | L3 | K3 | J3 | I3 | I2 | J2 | K2 | L2 | M2 | F2 |     E2 | | P0 | O0 | N0 | | P5 | O5 | N5 | N4 |
  |-------------------------------------------------------------------------| |--------------| |-------------------|
  | E7   | F7 | M7 | L7 | K7 | J7 | I7 | I4 | J4 | K4 | L4 | M4 | F4 |   O2 | | P1 | O1 | N1 | | E5 | F5 | M5 | O4 |
  |-------------------------------------------------------------------------| '--------------' |--------------     |
  | C3    | E1 | F1 | M1 | L1 | K1 | J1 | I1 | I5 | J5 | K5 | L5 |       E4 |                  | E6 | F6 | M6 |    |
  |-------------------------------------------------------------------------|      ,----.      |-------------------|
  | D7      | E0 | F0 | M0 | L0 | K0 | J0 | I0 | I6 | J6 | K6 |          D2 |      | P4 |      | P6 | O6 | N6 | P7 |
  |-------------------------------------------------------------------------| ,--------------. |--------------     |
  | C1 | A3 | B0 |                  L6                  | B5 | ?? | P2 | C4 | | P3 | O3 | N3 | | N7      | O7 |    |
  `-------------------------------------------------------------------------' `--------------' `-------------------'
*/

#define LAYOUT_fullsize_ansi( \
  KH7,      KG7, KH0, KG0, KH1, KG1, KH6, KG6, KH5, KG5, KH4, KG4, KH2,   KG2, KH3, KG3,                       \
  KE3, KF3, KM3, KL3, KK3, KJ3, KI3, KI2, KJ2, KK2, KL2, KM2, KF2, KE2,   KP0, KO0, KN0,   KP5, KO5, KN5, KN4, \
  KE7, KF7, KM7, KL7, KK7, KJ7, KI7, KI4, KJ4, KK4, KL4, KM4, KF4, KO2,   KP1, KO1, KN1,   KE5, KF5, KM5, KO4, \
  KC3, KE1, KF1, KM1, KL1, KK1, KJ1, KI1, KI5, KJ5, KK5, KL5,      KE4,                    KE6, KF6, KM6,      \
  KD7,      KE0, KF0, KM0, KL0, KK0, KJ0, KI0, KI6, KJ6, KK6,      KD2,        KP4,        KP6, KO6, KN6, KP7, \
  KC1, KA3, KB0,                KL6,                KB5, KA0, KP2, KC4,   KP3, KO3, KN3,   KN7,      KO7       \
) \
{ \
/* Columns and rows need to be swapped in the below definition */ \
/*          A       B       C       D       E       F       G       H       I       J       K       L       M       N       O       P       */ \
/* 0 */ {   KA0,    KB0,    KC_NO,  KC_NO,  KE0,    KF0,    KG0,    KH0,    KI0,    KJ0,    KK0,    KL0,    KM0,    KN0,    KO0,    KP0,    }, \
/* 1 */ {   KC_NO,  KC_NO,  KC1,    KC_NO,  KE1,    KF1,    KG1,    KH1,    KI1,    KJ1,    KK1,    KL1,    KM1,    KN1,    KO1,    KP1,    }, \
/* 2 */ {   KC_NO,  KC_NO,  KC_NO,  KD2,    KE2,    KF2,    KG2,    KH2,    KI2,    KJ2,    KK2,    KL2,    KM2,    KC_NO,  KO2,    KP2,    }, \
/* 3 */ {   KA3,    KC_NO,  KC3,    KC_NO,  KE3,    KF3,    KG3,    KH3,    KI3,    KJ3,    KK3,    KL3,    KM3,    KN3,    KO3,    KP3,    }, \
/* 4 */ {   KC_NO,  KC_NO,  KC4,    KC_NO,  KE4,    KF4,    KG4,    KH4,    KI4,    KJ4,    KK4,    KL4,    KM4,    KN4,    KO4,    KP4,  }, \
/* 5 */ {   KC_NO,  KB5,    KC_NO,  KC_NO,  KE5,    KF5,    KG5,    KH5,    KI5,    KJ5,    KK5,    KL5,    KM5,    KN5,    KO5,    KP5,  }, \
/* 6 */ {   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KE6,    KF6,    KG6,    KH6,    KI6,    KJ6,    KK6,    KL6,    KM6,    KN6,    KO6,    KP6,  }, \
/* 7 */ {   KC_NO,  KC_NO,  KC_NO,  KD7,    KE7,    KF7,    KG7,    KH7,    KI7,    KJ7,    KK7,    KL7,    KM7,    KN7,    KO7,    KP7,  }  \
}
