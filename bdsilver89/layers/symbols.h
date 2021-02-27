#pragma once

/* Symbol
 * ,-----------------------------------------------------------------------------------.
 * |   (  |   ~  |   *  |   &  |   )  |      |      | Home |  Up  |  End | PgUp |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   {  |   ^  |   %  |   $  |   }  |      |      | Left | Down | Right| PgDn |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   [  |   #  |   @  |   !  |   ]  |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Adjust|   \  |      |      |  f() |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT(
  XXXXXXX, KC_LPRN, KC_TILD, KC_ASTR, KC_AMPR, KC_RPRN, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP, XXXXXXX,
  XXXXXXX, KC_LCBR, KC_CIRC, KC_PERC, KC_DLR,  KC_RCBR, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
  XXXXXXX, KC_LBRC, KC_HASH, KC_AT,   KC_EXLM, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, _______, _______, ADJUST, LT_BSLS, _______, _______, _______, _______, _______, _______
),