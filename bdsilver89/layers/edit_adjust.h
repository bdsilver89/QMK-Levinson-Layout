#pragma once

#include "../common/keys.h"
#include "../config.h"

#ifdef WIDE_MODE

#else
/* Edit
 * ,-----------------------------------------------------------------------------------.
 * |      |      | Close| Find |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | All  | Save | Redo | Caps |      |      | Prev | Play | Next | BL+  |ADJUST|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy | Paste|      |      | Mute | Vol- | Vol+ | BL-  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define EDIT_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, CLOSE,   FIND,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, ALL,     SAVE,    REDO,    KC_CAPS, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, BL_INC,  ADJUST, \
  XXXXXXX, UNDO,    CUT,     COPY,    PASTE,   XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, BL_DEC,  XXXXXXX, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)
#endif


/* Adjust
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | Sleep|      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Workmn|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Wake |      |      |      |      |      |Colemk|CModDH|CMDHM |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Lock |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define ADJUST_LAYOUT LAYOUT( \
  XXXXXXX, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CMODDH,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_SLEP, XXXXXXX, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  WORKMAN, DVORAK,  XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_WAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, COLEMAK, CMODDH,  CMODDHM, XXXXXXX, XXXXXXX, \
  _______, LOCK,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)
