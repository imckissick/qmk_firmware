#include QMK_KEYBOARD_H
#include "imckissick.h"

enum layers {
  _BASE,
  _FN,
  _HHKB_FN,
  _MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
		KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,       KC_8,     KC_9,       KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,  KC_GRAVE,
		KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,       KC_I,     KC_O,       KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPACE,
		KC_F13,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,       KC_K,     KC_L,       KC_SCLN,  KC_QUOT,  KC_ENT,
		KC_LSFT,  _______,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,       KC_M,     KC_COMM,    KC_DOT,   KC_SLSH,  KC_RSFT,  MO(_HHKB_FN),
		KC_LCTL,  KC_LGUI,  KC_LALT,  _______,  KC_SPC,   _______,  KC_RALT,  MO(_MEDIA), _______,  MO(_FN),    KC_RCTL
  ),

  [_FN] = LAYOUT(
		_______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,   _______,  KC_DEL,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_UP,    _______,  _______,    _______,  _______,  RESET,
		KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, _______,    _______,  _______,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______
  ),

  [_HHKB_FN] = LAYOUT(
		_______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,   _______,  KC_DEL,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PSCR,  KC_SLCK,  KC_PAUSE,   KC_UP,    _______,  RESET,
		KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGUP,  KC_LEFT,    KC_RIGHT, _______,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_END,   KC_PGDOWN,  KC_DOWN,  _______,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______
  ),
};
