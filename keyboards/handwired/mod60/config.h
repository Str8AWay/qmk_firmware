#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6363
#define DEVICE_VER      0x0001
#define MANUFACTURER    Something
#define PRODUCT         Mod60
#define DESCRIPTION     Mod60 Keyboard PCBs

/* split details */
#define USE_I2C

/* key matrix size */
#define MATRIX_ROWS 10 // Doubled for split
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *         ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
/* Mod 60 wiring */
#define MATRIX_ROW_PINS { B1, B2, B3, F0, F1 }
#define MATRIX_COL_PINS { F4, F7, F5, F6, C7, C6, B6, B5, B4, D7, D6, D4, D5, D3 }
/* Soyuz wiring */
#define MATRIX_ROW_PINS_RIGHT { D4, C6, B6, E6, B4 }
#define MATRIX_COL_PINS_RIGHT { F4, B3, D7, B5 }
#define UNUSED_PINS

/* Backlight Setup */
#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* RGB Underglow
 */
#define RGB_DI_PIN D2
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 128

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
