#pragma once

#include "quantum.h"

#define _______   KC_TRNS

#define KC_CAD    LCTL(LALT(KC_DEL))
#define KC_DITTO  LALT(KC_A)

enum userspace_keycodes {
  KC_MAKE = SAFE_RANGE,
#ifdef UNICODE_ENABLE
  SHRUG,
  TABLE_FLIP,
#endif
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

#ifdef TAP_DANCE_ENABLE
enum {
  placeholder = 0
};
#endif
