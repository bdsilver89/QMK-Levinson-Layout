#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _WORKMAN 3
#define _LOWER 4
#define _RAISE 5
#define _NAV 6
#define _SHTCUT 7
#define _ADJUST 16

// mod_taps
#define MT_SPC  MT(MOD_LSFT, KC_SPC)
#define MT_BSPC MT(MOD_LSFT, KC_BSPC)
#define MT_EQL  MT(MOD_LCTL | MOD_LSFT, KC_EQL)

#define MT_GRV  MT(MOD_LSFT | MOD_LGUI, KC_GRV)
#define MT_MINS MT(MOD_LSFT | MOD_LALT, KC_MINS)
#define MT_TAB  MT(MOD_LCTL | MOD_LALT, KC_TAB)

#define MT_SLSH MT(MOD_RSFT | MOD_RGUI, KC_SLSH)
#define MT_QUOT MT(MOD_RSFT | MOD_RALT, KC_QUOT)
#define MT_DEL  MT(MOD_RCTL | MOD_RALT, KC_DEL)
#define MT_RGHT MT(MOD_RCTL | MOD_RSFT, KC_RGHT)
#define MT_UP   MT(MOD_RCTL, KC_UP)
#define MT_DOWN MT(MOD_RGUI, KC_DOWN) 
#define MT_LEFT MT(MOD_RALT, KC_LEFT) 

// layer taps
#define LT_ESC LT(_LOWER, KC_ESC)
#define LT_ENT LT(_RAISE, KC_ENT)

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
  DVORAK,
  WORKMAN,
  LOWER,
  RAISE,
  NAV,
  SHTCUT,
  ADJUST,
  LOCK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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
[_QWERTY] = LAYOUT_ortho_4x12( \
  MT_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    MT_SLSH, \
  MT_MINS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT_QUOT, \
  MT_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_DEL, \
  MT_EQL,  KC_LCTL, KC_LGUI, KC_LALT, LT_ESC,  MT_SPC,  MT_BSPC, LT_ENT,  MT_LEFT, MT_DOWN, MT_UP,   MT_RGHT \
),

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_ortho_4x12( \
  _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______, \
  _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    _______, \
  _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |      |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_ortho_4x12( \
  _______, KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    _______, \
  _______, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH, \
  _______, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    _______ , \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Workman
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   D  |   R  |   W  |   B  |   J  |   F  |   U  |   P  |   ;  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   A  |   S  |   H  |   T  |   G  |   Y  |   N  |   E  |   O  |   I  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   Z  |   X  |   M  |   C  |   V  |   K  |   L  |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_WORKMAN] = LAYOUT_ortho_4x12( \
  _______, KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, _______, \
  _______, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT, \
  _______, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, _______ , \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Lower - Number Layer
 * ,-----------------------------------------------------------------------------------.
 * |Adjust|      |      |   {  |   }  |      |   /  |   7  |   8  |   9  |   *  |SHTCUT|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |   (  |   )  |      |   ,  |   4  |   5  |   6  |   -  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |   [  |   ]  |      |   .  |   1  |   2  |   3  |   +  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   =  |   0  | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12( \
  ADJUST,  XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, KC_SLSH, KC_7,    KC_8,    KC_9,    KC_ASTR, SHTCUT, \
  _______, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, KC_COMM, KC_4,    KC_5,    KC_6,    KC_MINS, _______, \
  _______, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_PLUS, _______, \
  _______, _______, _______, _______, _______, _______, KC_EQL,  KC_0,    KC_HOME, KC_PGDN, KC_PGUP, KC_END \
),

/* Raise - Symbol Layer
 * ,-----------------------------------------------------------------------------------.
 * |      |   &  |   *  |   \  |   {  |   }  |      |  F9  |  F10 |  F11 |  F12 |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   $  |   %  |   ^  |   (  |   )  |      |  F5  |  F6  |  F7  |  F8  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   !  |   @  |   #  |   [  |   ]  |      |  F1  |  F2  |  F3  |  F4  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12( \
  _______, KC_AMPR, KC_ASTR, KC_HASH, KC_LCBR, KC_RCBR, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
  _______, KC_DLR,  KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_LBRC, KC_RBRC, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END \
),

/* Navigation
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      | Home |  Up  |  End |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps | Ctrl | GUI  | Alt  | Shift|      |      | Left | Down |Right |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      | Bkspc| Del  |      |      | PgDn | PgUp |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_ortho_4x12( \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, _______, \
  KC_CAPS, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX, _______, \
  _______, _______, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______ \
),

/* Shortcuts
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      | Close| Undo | Redo |      |      |      |
 * |------+------+------+------+------+------+-------------+------+------+------+------|
 * |      | Prev | Play | Next | BL+  |      |      | Save | Cut  | Copy | Paste|      |
 * |------+------+------+------+------+------+------|------+------+------+------+------|
 * |      | Mute | Vol- | Vol+ | BL-  |      |      | Find | All  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SHTCUT] = LAYOUT_ortho_4x12( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CLOSE,   UNDO,    REDO,    XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, BL_INC,  XXXXXXX, SAVE,    CUT,     COPY,    PASTE,   XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, BL_DEC,  XXXXXXX, FIND,    ALL,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      | Sleep|      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Workmn|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Wake |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Lock |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12( \
  _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_SLEP, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  WORKMAN, _______, \
  _______, KC_WAKE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, LOCK,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)

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
    // case NAV:
    //   if (record->event.pressed) {
    //     layer_on(_NAV);
    //   } else {
    //     layer_off(_NAV);
    //   }
    //   return false;
    //   break;
    case SHTCUT:
      if (record->event.pressed) {
        layer_on(_SHTCUT);
      } else {
        layer_off(_SHTCUT);
      }
      return false;
      break;
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
