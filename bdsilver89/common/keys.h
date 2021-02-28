#pragma once

#include QMK_KEYBOARD_H

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

