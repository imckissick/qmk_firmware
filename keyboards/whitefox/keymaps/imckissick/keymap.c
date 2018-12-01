#include QMK_KEYBOARD_H
#include "imckissick.h"

enum layers {
  _BASE,
  _FN,
  _HHKB_FN,
  _MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_truefox(
		KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,       KC_8,     KC_9,       KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,  KC_GRAVE, KC_PSCR
		KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,       KC_I,     KC_O,       KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPACE, KC_DEL
		KC_F13,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,       KC_K,     KC_L,       KC_SCLN,  KC_QUOT,  KC_ENT, KC_HOME
		KC_LSFT,  _______,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,       KC_M,     KC_COMM,    KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP, KC_END
		KC_LCTL,  KC_LGUI,  KC_LALT,  _______,  KC_SPC,   _______,  KC_RALT,  MO(1),      KC_LEFT,  KC_DOWN,    KC_RIGHT
  ),
};
