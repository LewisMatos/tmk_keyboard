#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP( /* 0: QWERTY */
      Q,    W,    E,    R,    T,    QUOT, BSLS, Y,    U,    I,    O,   P,
      A,    S,    D,    F,    G,    ESC,  TAB,  H,    J,    K,    L,   SCLN,
      Z,    X,    C,    V,    B,    BSPC, ENT,  N,    M,    COMM, DOT, SLSH,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    KEYMAP( /* 1: fn1 */
      FN10, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN20, FN21,
      1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,
      NO,   NO,   GRV,  FN22, NO,   TRNS, TRNS, NO,   LBRC, RBRC, FN23, FN24,
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, HOME, PGDN, PGUP, END),
    KEYMAP( /* 2: fn2 */
      F13,  F14,  F15,  F16,  F17,  F18,  F19,  F20,  F21,  F22,  F23,  F24,
      F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,
      FN3,  FN4,  FN5,  TRNS, DEL,  TRNS, TRNS, CAPS, INS,  PSCR, SLCK, PAUS,
      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, MUTE, VOLD, VOLU, MPLY),
    KEYMAP( /* 3: fn1+fn2 */
      FN3,  FN4,  FN5,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   PWR,
      NO,   NO,   NO,   UNDO, NO,   NO,   NO,   NO,   AGAIN, NO,  NO,   SLEP,
      NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   WAKE,
      NO,   NO,   NO,   NO,   NO,   NO,         NO,   NO,   NO,   NO,   NO),
    KEYMAP( /* 1: Colemak */
      Q,    W,    F,    P,    G,    QUOT, BSLS, J,    L,    U,    Y,   SCLN,
      A,    R,    S,    T,    D,    ESC,  TAB,  H,    N,    E,    I,   O,
      Z,    X,    C,    V,    B,    BSPC, ENT,  K,    M,    COMM, DOT, SLSH,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
    KEYMAP( /* 2: Dvorak */
      QUOT, COMM, DOT,  P,    Y,    SLSH, BSLS, F,    G,    C,    R,   L,
      A,    O,    E,    U,    I,    ESC,  TAB,  D,    H,    T,    N,   S,
      SCLN, Q,    J,    K,    X,    BSPC, ENT,  B,    M,    W,    V,   Z,
      LCTL, LALT, LGUI, LSFT, FN1,  SPC,        FN2,  LEFT, DOWN, UP,  RGHT),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(5), // to fn1+fn2 overlay (not implemented yet)
    [1] = ACTION_LAYER_MOMENTARY(1), // to fn1 overlay
    [2] = ACTION_LAYER_MOMENTARY(2), // to fn2 overlay
    [3] = ACTION_DEFAULT_LAYER_SET(0),  // set Qwerty layout
    [4] = ACTION_DEFAULT_LAYER_SET(1),  // set Colemak layout
    [5] = ACTION_DEFAULT_LAYER_SET(2),  // set Dvorak layout
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
