

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    RW9UAO
#define PRODUCT         BTC8120
#define DESCRIPTION     BTC8120

/* Address for jumping to bootloader on STM32 chips. */
/* It is chip dependent, the correct number can be looked up here:
 * http://www.st.com/web/en/resource/technical/document/application_note/CD00167594.pdf
 */
#define STM32_BOOTLOADER_ADDRESS 0x1FFFD800

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/* ROWS: Top to bottom, COLS: Left to right*/
// PA11, PA12 - USB
#define MATRIX_ROW_PINS { A3, A4, A5, A6, A7, B0, B1, B10}
#define MATRIX_COL_PINS { A15, B3, B4, B5, B6, B7, B8, B9, B12, B13, C13, C14, C15, A0, A1, A2 }

// call bootloader at power ON (insert USB cable)
// use `ESC` key
#define BOOTMAGIC_LITE_ROW 7
#define BOOTMAGIC_LITE_COLUMN 7

// RightOS key has dedicated connection to Ground and 6 pin of old CPU

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define MATRIX_HAS_GHOST

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

