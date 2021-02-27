#pragma once

#include "../common/keys.h"

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  -   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Tab  |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  =   | Ctrl | GUI  | Alt  | Esc  |Space |Bkspc |Enter | Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 */
#define QWERTY_LAYOUT LAYOUT( \
  MT_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    MT_SLSH, \
  MT_MINS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_QUOT, \
  LT_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LT_DEL, \
  MT_EQL,  KC_LCTL, KC_LGUI, KC_LALT, LT_ESC,  MT_SPC,  MT_BSPC, LT_ENT,  MT_LEFT, MT_DOWN, MT_UP,   MT_RGHT \
)
