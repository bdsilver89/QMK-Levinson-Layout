#pragma once

#include QMK_KEYBOARD_H

enum custom_layer {
  _BASE = 0,
  _QWERTY,
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
