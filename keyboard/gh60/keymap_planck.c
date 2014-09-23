#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP( /* Native */
      ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,   P,    BSPC,
      BSLS, A,    S,    D,    F,    G,    H,    J,    K,    L,   SCLN, QUOT,
      TAB,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT, SLSH, ENT,
      LGUI, LCTL, LALT, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [1] = KEYMAP( /* QWERTY->Colemak */
      ESC,  Q,    W,    F,    P,    G,    J,    L,    U,    Y,   SCLN, BSPC,
      BSLS, A,    R,    S,    T,    D,    H,    N,    E,    I,   O,    QUOT,
      TAB,  Z,    X,    C,    V,    B,    K,    M,    COMM, DOT, SLSH, ENT,
      LGUI, LCTL, LALT, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [2] = KEYMAP( /* 2: QWERTY->Dvorak */
      ESC,  QUOT, COMM, DOT,  P,    Y,    F,    G,    C,    R,   L,    BSPC,
      BSLS, A,    O,    E,    U,    I,    D,    H,    T,    N,   S,    SLSH,
      TAB,  SCLN, Q,    J,    K,    X,    B,    M,    W,    V,   Z,    ENT,
      LGUI, LCTL, LALT, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [4] = KEYMAP( /* fn1 */
      FN20, FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN21,
      MINS, 1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    EQL,
      NO,   NO,   NO,   GRV,  FN22, NO,   NO,   LBRC, RBRC, FN23, FN24, TRNS,
      TRNS, TRNS, TRNS, TRNS, FN1,  TRNS,       FN3,  HOME, PGDN, PGUP, END),
    [5] = KEYMAP( /* fn2 */
      F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20,  F21,  F22,  F23,  F24,
      F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,
      TRNS, DEL,  CUT, COPY, PASTE, MENU, CAPS, INS,  PSCR, SLCK, PAUS, TRNS,
      TRNS, TRNS, TRNS, TRNS, FN3,  TRNS,       FN2,  MUTE, VOLD, VOLU, MPLY),
    [6] = KEYMAP( /* fn1+fn2 */
      FN7,  FN8,  FN9,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   PWR,
      NO,   NO,   NO,   NO,   UNDO, NO,   NO,  AGAIN, NO,   NO,   NO,   SLEP,
      TRNS, NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   WAKE,
      TRNS, TRNS, TRNS, TRNS, FN4,  TRNS,       FN5,  MSTP, MPRV, MNXT, MPLY),
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_BIT_XOR(1, 0b0001, ON_BOTH), // swap fn1
    [2] = ACTION_LAYER_BIT_XOR(1, 0b0010, ON_BOTH), // swap fn2
    [3] = ACTION_LAYER_BIT_OR( 1, 0b0111, ON_BOTH), // + fn1 + fn2 + fn1+2
    [4] = ACTION_LAYER_BIT_AND(1, 0b1110, ON_BOTH), // - fn1
    [5] = ACTION_LAYER_BIT_AND(1, 0b1101, ON_BOTH), // - fn2

    [7] = ACTION_DEFAULT_LAYER_SET(0),  // set Qwerty layout
    [8] = ACTION_DEFAULT_LAYER_SET(1),  // set Colemak layout
    [9] = ACTION_DEFAULT_LAYER_SET(2),  // set Dvorak layout

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
};
