#pragma once

#include "quantum.h"

#define _______   KC_TRNS

enum userspace_keycodes {
  KC_MAKE = SAFE_RANGE,
  KC_CAD,
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
