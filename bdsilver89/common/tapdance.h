#pragma once

#include QMK_KEYBOARD_H

typedef struct {
  bool is_press_action;
  uint8_t state;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD,
  DOUBLE_TAP,
  DOUBLE_HOLD,
  DOUBLE_SINGLE_TAP,
  TRIPLE_TAP,
  TRIPLE_HOLD
};

enum {
  A_CTL,
  B_CTL,
  C_CTL,
  D_CTL,
  E_CTL,
  F_CTL,
  G_CTL,
  H_CTL,
  I_CTL,
  J_CTL,
  K_CTL,
  L_CTL,
  M_CTL,
  N_CTL,
  O_CTL,
  P_CTL,
  Q_CTL,
  R_CTL,
  S_CTL,
  T_CTL,
  U_CTL,
  V_CTL,
  W_CTL,
  X_CTL,
  Y_CTL,
  Z_CTL
};

#define TAP_DANCE_DECLARATION(KEY)                                 \
  void KEY_finished(qk_tap_dance_state_t *state, void *user_data); \
  void KEY_reset(qk_tap_dance_state_t *state, void *user_data);

#define TAP_DANCE_ALL_IMPLEMENTATION(KEY, STAP, SHOLD, DTAP, DHOLD) \
  static tap KEYtap_state {                                         \
    .is_press_action = true,                                        \
    .state = 0                                                      \
  }                                                                 \
  void KEY_finished(qk_tap_dance_state_t *state, void *user_data) { \
    KEYtap_state.state = current_dance(state);                      \
    switch (KEYtap_state.state) {                                   \
      case SINGLE_TAP:                                              \
        register_code(STAP);                                        \
        break;                                                      \
      case SINGLE_HOLD:                                             \
        register_code(KC_LSFT)                                      \
        register_code(SHOLD);                                       \
        break;                                                      \
      case DOUBLE_TAP:                                              \
        register_code(DTAP);                                        \
        break;                                                      \
      case DOUBLE_HOLD:                                             \
        register_code(DHOLD);                                       \
        break;                                                      \
      case DOUBLE_SINGLE_TAP:                                       \
        tap_code(STAP);                                             \
        break;                                                      \
    }                                                               \
  }                                                                 \
  void KEY_reset(qk_tap_dance_state_t* state, void* user_data) {    \
    switch (KEYtap_state.state) {                                   \
      case SINGLE_TAP:                                              \
        unregister_code(STAP);                                      \
        break;                                                      \
      case SINGLE_HOLD:                                             \
        unregister_code(SHOLD);                                     \
        unregister_code(KC_LSFT)                                    \
        break;                                                      \
      case DOUBLE_TAP:                                              \
        unregister_code(DTAP);                                      \
        break;                                                      \
      case DOUBLE_HOLD:                                             \
        unregister_code(DHOLD);                                     \
        break;                                                      \
      case DOUBLE_SINGLE_TAP:                                       \
        unregister_code(STAP);                                      \
        break;                                                      \
    }                                                               \
  }
