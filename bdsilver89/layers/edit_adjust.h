#pragma once

/* Edit
 * ,-----------------------------------------------------------------------------------.
 * |      |      | Close| Find |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | All  | Save | Redo |      |      |      | Prev | Play | Next | BL+  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy | Paste|      |      | Mute | Vol- | Vol+ | BL-  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_EDIT] = LAYOUT(
  XXXXXXX, XXXXXXX, CLOSE,   FIND,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, ALL,     SAVE,    REDO,    XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, BL_INC,  XXXXXXX,
  XXXXXXX, UNDO,    CUT,     COPY,    PASTE,   XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, BL_DEC,  XXXXXXX,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Adjust
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |CModDH|      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | Sleep|      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Workmn|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Wake |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Lock |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT(
  XXXXXXX, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CMODDH,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_SLEP, XXXXXXX, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  WORKMAN, XXXXXXX,
  XXXXXXX, KC_WAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, LOCK,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)