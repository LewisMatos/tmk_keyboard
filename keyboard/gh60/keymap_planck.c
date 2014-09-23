#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP( /* Native */
      Q,    W,    E,    R,    T,    ESC,  BSPC, Y,    U,    I,    O,   P,
      A,    S,    D,    F,    G,    QUOT, BSLS, H,    J,    K,    L,   SCLN,
      Z,    X,    C,    V,    B,    TAB,  ENT,  N,    M,    COMM, DOT, SLSH,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [1] = KEYMAP( /* QWERTY->Colemak */
      Q,    W,    F,    P,    G,    ESC,  BSPC, J,    L,    U,    Y,   SCLN,
      A,    R,    S,    T,    D,    QUOT, BSLS, H,    N,    E,    I,   O,
      Z,    X,    C,    V,    B,    TAB,  ENT,  K,    M,    COMM, DOT, SLSH,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [2] = KEYMAP( /* 2: QWERTY->Dvorak */
      QUOT, COMM, DOT,  P,    Y,    ESC,  BSPC, F,    G,    C,    R,   L,
      A,    O,    E,    U,    I,    SLSH, BSLS, D,    H,    T,    N,   S,
      SCLN, Q,    J,    K,    X,    TAB,  ENT,  B,    M,    W,    V,   Z,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    [4] = KEYMAP( /* fn1 */
      FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN20, FN21,
      1,    2,    3,    4,    5,    MINS, EQL,  6,    7,    8,    9,    0,
      NO,   NO,   GRV,  FN22, NO,   TRNS, TRNS, NO,   LBRC, RBRC, FN23, FN24,
      TRNS, TRNS, TRNS, TRNS, FN1,  TRNS,       FN3,  HOME, PGDN, PGUP, END),
    [5] = KEYMAP( /* fn2 */
      F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20,  F21,  F22,  F23,  F24,
      F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,
      NO,   NO,   NO,   NO,   DEL,  TRNS, TRNS, CAPS, INS,  PSCR, SLCK, PAUS,
      TRNS, TRNS, TRNS, TRNS, FN3,  TRNS,       FN2,  MUTE, VOLD, VOLU, MPLY),
    [6] = KEYMAP( /* fn1+fn2 */
      FN7,  FN8,  FN9,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   PWR,
      NO,   NO,   NO,   UNDO, NO,   NO,   NO,   NO,   AGAIN, NO,  NO,   SLEP,
      NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   WAKE,
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
