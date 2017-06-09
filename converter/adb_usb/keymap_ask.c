#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: M0116 Apple Standard Keyboard ANSI
   *                     +-------+
   *                     | power |
   *                     +-------+
   * +---+---+---+---+---+---+---+---+---+---+---+---+---+-----+ +---+---+---+---+
   * |esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | bks | |clr| = | / | * |
   * +---------------------------------------------------------+ +---+---+---+---+
   * | tab | q | w | e | r | t | y | u | i | o | p | [ | ] |   | | 7 | 8 | 9 | + |
   * +-----------------------------------------------------+   | +---+---+---+---+
   * | ctrl | a | s | d | f | g | h | j | k | l | ; | ' |return| | 4 | 5 | 6 | - |
   * +---------------------------------------------------------+ +---+---+---+---+
   * | shift  | z | x | c | v | b | n | m | , | . | / |  shift | | 1 | 2 | 3 |   |
   * +---------------------------------------------------------+ +-------+---|ent|
   * |cap|opt|comnd| ` |                   | \ |lef|dwn|up|rig | |   0   | . |   |
   * +---------------------------------------------------------+ +-------+---+---+
   */
    KEYMAP_M0116_ANSI(
                            NO,
      ESC,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,    MINS, EQL,  BSPC,               FN0,  EQL, PSLS,  PAST,
      TAB,  Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P,    LBRC, RBRC,                     P7,   P8,   P9,   PPLS,
      LCTL, A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN, QUOT, ENT,                      P4,   P5,   P6,   PMNS,
      LSFT, Z,  X,  C,  V,  B,  N,  M,  COMM,   DOT,  SLSH, RSFT,                     P1,   P2,   P3,
      LCAP, LALT,   LGUI,   GRV,        SPC,          BSLS, LEFT, DOWN, UP, RGHT,     P0,   PDOT, PENT
    ),

    /* Layer 1: Media Controls
     *                     +-------+
     *                     | power |
     *                     +-------+
     * +---+---+---+---+---+---+---+---+---+---+---+---+---+-----+ +---+---+---+---+
     * |esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | bks | |clr| = | / | * |
     * +---------------------------------------------------------+ +---+---+---+---+
     * | tab | q | w | e | r | t | y | u | i | o | p | [ | ] |   | | 7 | 8 | 9 | + |
     * +-----------------------------------------------------+   | +---+---+---+---+
     * | ctrl | a | s | d | f | g | h | j | k | l | ; | ' |return| | 4 | 5 | 6 | - |
     * +---------------------------------------------------------+ +---+---+---+---+
     * | shift  | z | x | c | v | b | n | m | , | . | / |  shift | | 1 | 2 | 3 |   |
     * +---------------------------------------------------------+ +-------+---|ent|
     * |cap|opt|comnd| ` |                   | \ |lef|dwn|up|rig | |   0   | . |   |
     * +---------------------------------------------------------+ +-------+---+---+
     */
      KEYMAP_M0116_ANSI(
                                          NO,
        ESC,  F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,   F11,  F12,  BSPC,         TRNS,   TRNS,   TRNS,   MUTE,
        TAB,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,               TRNS,   TRNS,   TRNS,   VOLU,
        LCTL, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, ENT,                TRNS,   TRNS,   TRNS,   VOLD,
        LSFT, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  RSFT,                     TRNS,   TRNS,   TRNS,
        LCAP, LALT,  LGUI,  GRV,          SPC,          BSLS,  LEFT,  DOWN,  UP,    RGHT,                     TRNS,   TRNS,   TRNS
      ),
};

const action_t PROGMEM fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),                  // FN0
};
