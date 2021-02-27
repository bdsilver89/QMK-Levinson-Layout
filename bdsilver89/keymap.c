#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum custom_layer {
_QWERTY = 0,
_COLEMAK,
_CMODDH,
_DVORAK,
_WORKMAN,
// _CURSOR_RIGHT,
// _CURSOR_LEFT,
// _SHIFT,
// _LSHIFT,
// _RSHIFT,
_NUM,
_NUMSYM,
_FN,
_EDIT,
_SYM,
_MOUSE,
// _LOWER,
// _RAISE,
// _SHTCUT,
 _ADJUST
};


// custom combos
#define LT_BSLS LT(_MOUSE,   KC_BSLS)

#define LT_ESC  LT(_NUM,     KC_ESC)
#define MT_SPC  MT(MOD_LSFT, KC_SPC)
#define LT_TAB  LT(_FN,      KC_TAB)
#define LT_ENT  LT(_SYM,     KC_ENT)

#define MT_SPC  MT(MOD_LSFT, KC_SPC)
#define MT_BSPC MT(MOD_LSFT, KC_BSPC)
#define MT_EQL  MT(MOD_LCTL | MOD_LSFT, KC_EQL)

#define MT_GRV  MT(MOD_LSFT | MOD_LGUI, KC_GRV)
#define MT_MINS MT(MOD_LSFT | MOD_LALT, KC_MINS)
// #define MT_TAB  MT(MOD_LCTL | MOD_LALT, KC_TAB)
#define LT_TAB  LT(_FN, KC_TAB)

#define MT_SLSH MT(MOD_RSFT | MOD_RGUI, KC_BSLS)
#define MT_QUOT MT(MOD_RSFT | MOD_RALT, KC_QUOT)
// #define MT_DEL  MT(MOD_RCTL | MOD_RALT, KC_DEL)
#define LT_DEL  LT(_EDIT, KC_DEL)

#define MT_RGHT MT(MOD_RCTL | MOD_RSFT, KC_RGHT)
#define MT_UP   MT(MOD_RCTL, KC_UP)
#define MT_DOWN MT(MOD_RGUI, KC_DOWN) 
#define MT_LEFT MT(MOD_RALT, KC_LEFT) 


// temporary
#define CNTR_TL OSM(MOD_LALT | MOD_LCTL)
#define CNTR_TR OSM(MOD_LGUI | MOD_LCTL)
#define CNTR_ML OSM(MOD_LALT | MOD_LSFT)
#define CNTR_MR OSM(MOD_LGUI | MOD_LSFT)
#define CNTR_BL KC_CAPS //OSM(MOD_LATL | MOD_LCTL)
#define CNTR_BR OSM(MOD_LSFT | MOD_LCTL)

// modifiers
#define OS_ALT  OSM(MOD_LALT)
#define OS_CTL  OSM(MOD_LCTL)
#define OS_GUI  OSM(MOD_LGUI)
#define OS_SFT  OSM(MOD_LSFT)

// shortcuts
#define UNDO   LCTL(KC_Z)
#define REDO   LCTL(KC_Y)
#define COPY   LCTL(KC_C)
#define CUT    LCTL(KC_X)
#define PASTE  LCTL(KC_V)
#define SAVE   LCTL(KC_S)
#define CLOSE  LCTL(KC_W)
#define ALL    LCTL(KC_A)
#define FIND   LCTL(KC_F)
#define RELOAD LCTL(KC_R)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  CMODDH,
  DVORAK,
  WORKMAN,
  // LOWER,
  // RAISE,
  // NAV,
  // SHTCUT,
  ADJUST,
  LOCK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// primary layout
#include "layouts/qwerty.h"
#include "layouts/colemak.h"
#include "layouts/dvorak.h"
#include "layouts/workman.h"

#include "layouts/number_fn.h"
#include "layouts/symbols.h"
#include "layouts/mouse.h"
#include "layouts/edit_adjust.h"

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
