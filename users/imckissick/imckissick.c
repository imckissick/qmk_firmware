#include "imckissick.h"
#include "quantum.h"
#include "action.h"
#include "version.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case KC_MAKE:
    if (record->event.pressed) {
      SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP
#if  (defined(BOOTLOADER_DFU) || defined(BOOTLOADER_LUFA_DFU) || defined(BOOTLOADER_QMK_DFU))
       ":dfu "
#elif defined(BOOTLOADER_HALFKAY)
      ":teensy "
#elif defined(BOOTLOADER_CATERINA)
       ":avrdude "
#endif
        SS_TAP(X_ENTER));
    }

    return false;
    break;

#ifdef UNICODE_ENABLED
  case SHRUG:
    if (record->event.pressed) {
      SEND_STRING("*shrug*");
    }

    return false;
    break;

  case TABLE_FLIP:
    if (record->event.pressed) {
      SEND_STRING("*flips table*");
    }

    return false;
    break;
#endif
  }

  return process_record_keymap(keycode, record);
}
