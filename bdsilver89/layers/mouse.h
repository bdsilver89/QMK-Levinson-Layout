#pragma once

#include "../common/keys.h"
#include "../config.h"

#ifdef WIDE_MODE

#else
/* Mouse
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      | WLeft|  Up  |WRight| WUp  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | Btn3 | Btn2 | Btn1 |      |      | Left | Down | Right| WDown|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define MOUSE_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_BTN3, KC_BTN2, KC_BTN1, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
)
#endif
