#pragma once

#include "../common/keys.h"
#include "../config.h"

#ifdef WIDE_MODE
/* Base
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |Space | Tab  |Bkspc |Enter | Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 */
#define BASE_LAYOUT LAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  OS_CTL,  OS_GUI,  OS_ALT,  LT_ESC,  MT_SPC,  LT_TAB,  MT_BSPC, LT_ENT,  MT_LEFT, MT_DOWN, MT_UP,   MT_RGHT  \
)

#else
/* Base
 * ,-----------------------------------------------------------------------------------.
 * |  `   |      |      |      |      |      |      |      |      |      |      |  \   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  -   |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |      |      |      |      |      | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  =   | Ctrl | GUI  | Alt  | Esc  |Space |Bkspc |Enter | Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 */
#define BASE_LAYOUT LAYOUT( \
  MT_GRV,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MT_SLSH, \
  MT_MINS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  LT_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, LT_DEL,  \
  MT_EQL,  KC_LCTL, KC_LGUI, KC_LALT, LT_ESC,  MT_SPC,  MT_BSPC, LT_ENT,  MT_LEFT, MT_DOWN, MT_UP,   MT_RGHT  \
)
#endif
