#include QMK_KEYBOARD_H

#include "common/enums.h"
#include "layers/all.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = BASE_LAYOUT,
  [_QWERTY] = QWERTY_LAYOUT,
  [_DVORAK] = DVORAK_LAYOUT,
  [_COLEMAK] = COLEMAK_DH_LAYOUT,
  [_WORKMAN] = WORKMAN_LAYOUT,
  [_NUM] = NUM_LAYOUT,
  // [_NUMSYM] = NUMSYM_LAYOUT,
  [_FN] = FN_LAYOUT,
  [_EDIT] = EDIT_LAYOUT,
  [_SYM] = SYM_LAYOUT,
  [_MOUSE] = MOUSE_LAYOUT,
  [_ADJUST] = ADJUST_LAYOUT
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
float tone_workman[][2]    = SONG(WORKMAN_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<_COLEMAK);
      }
      return false;
      break;
    case CMODDH:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<_CMODDH);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_dvorak);
        #endif
        persistent_default_layer_set(1UL<<_DVORAK);
      }
      return false;
      break;
    case WORKMAN:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_workman);
        #endif
        persistent_default_layer_set(1UL<<_WORKMAN);
      }
      return false;
      break;  
    // case LOWER:
    //   if (record->event.pressed) {
    //     layer_on(_LOWER);
    //     update_tri_layer(_LOWER, _RAISE, _NAV);
    //   } else {
    //     layer_off(_LOWER);
    //     update_tri_layer(_LOWER, _RAISE, _NAV);
    //   }
    //   return false;
    //   break;
    // case RAISE:
    //   if (record->event.pressed) {
    //     layer_on(_RAISE);
    //     update_tri_layer(_LOWER, _RAISE, _NAV);
    //   } else {
    //     layer_off(_RAISE);
    //     update_tri_layer(_LOWER, _RAISE, _NAV);
    //   }
    //   return false;
    //   break;
    // case SHTCUT:
    //   if (record->event.pressed) {
    //     layer_on(_SHTCUT);
    //   } else {
    //     layer_off(_SHTCUT);
    //   }
    //   return false;
    //   break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    case LOCK:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        register_code(KC_RCTL);
        register_code(KC_POWER);
      } else {
        register_code(KC_POWER);
        register_code(KC_RCTL);
        register_code(KC_RSFT);
      }
  }
  return true;
}
