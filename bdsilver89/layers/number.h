#pragma once

#include "../common/keys.h"
#include "../config.h"

#ifdef WIDE_MODE
/* Number
 * ,-----------------------------------------------------------------------------------.
 * |      |      |   F  |   E  |   D  |      |      |   /  |   7  |   8  |   9  |   *  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |   C  |   B  |   A  |      |      |   .  |   4  |   5  |   6  |   -  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |   #  |   X  |   G  |      |      |   ,  |   1  |   2  |   3  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  f() |      |      |      |   =  |   0  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define NUM_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, KC_F,    KC_E,    KC_D,    XXXXXXX, KC_SLSH, KC_7,   KC_8,    KC_9,    KC_ASTR, _______, \
  XXXXXXX, XXXXXXX, KC_C,    KC_B,    KC_A,    XXXXXXX, KC_DOT,  KC_4,   KC_5,    KC_6,    KC_MINS, _______, \
  XXXXXXX, XXXXXXX, KC_HASH, KC_X,    KC_G,    XXXXXXX, KC_COMM, KC_1,   KC_2,    KC_3,    KC_PLUS, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_EQL,   KC_0,   _______, _______, _______ \
)
#else
/* Number
 * ,-----------------------------------------------------------------------------------.
 * |      |      |   F  |   E  |   D  |      |      |   /  |   7  |   8  |   9  |   *  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |   C  |   B  |   A  |      |      |   .  |   4  |   5  |   6  |   -  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |   #  |   X  |   G  |      |      |   ,  |   1  |   2  |   3  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  f() |      |      |   =  |   0  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define NUM_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, KC_F,    KC_E,    KC_D,    XXXXXXX, KC_SLSH, KC_7,   KC_8,    KC_9,    KC_ASTR, _______, \
  XXXXXXX, XXXXXXX, KC_C,    KC_B,    KC_A,    XXXXXXX, KC_DOT,  KC_4,   KC_5,    KC_6,    KC_MINS, _______, \
  XXXXXXX, XXXXXXX, KC_HASH, KC_X,    KC_G,    XXXXXXX, KC_COMM, KC_1,   KC_2,    KC_3,    KC_PLUS, _______, \
  _______, _______, _______, _______, _______, _______, KC_EQL,  KC_0,   _______, _______, _______, _______ \
)
#endif

#if 0
#ifdef WIDE_MODE

#else
/* Number Symbols
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |   {  |   &  |   ?  |   :  |   }  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |  f() |      |      |      |   (  |   $  |   %  |   ^  |   )  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   [  |   <  |   ~  |   >  |   ]  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  f() |      |      |      |   \  |   |  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define NUMSYM_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_AMPR, KC_QUES, KC_COLN, KC_RCBR, \
  _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_RPRN, \
  XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_LT,   KC_TILD, KC_GT,   KC_RBRC, \
  _______, _______, _______, _______, _______, _______, _______, KC_BSLS, KC_PIPE, _______, _______, _______ \
)
#endif
#endif

#ifdef WIDE_MODE

#else
/* Function
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |  F7  |  F8  |  F9  |  F12 |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|     
 * |      | Ctrl |  GUI |  Alt | Shift|      |      |  F4  |  F5  |  F6  |  F11 |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|     
 * |      |      |      |      |      |      |      |  F1  |  F2  |  F3  |  F10 |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
#define FN_LAYOUT LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F7,   KC_F8,   KC_F9,  KC_F12,   XXXXXXX, \
  XXXXXXX, OS_CTL,  OS_GUI,  OS_ALT,  OS_SFT,  XXXXXXX, XXXXXXX, KC_F4,   KC_F5,   KC_F6,  KC_F11,   XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,  KC_F10,   XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
)
#endif
