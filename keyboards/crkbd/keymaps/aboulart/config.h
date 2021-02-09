/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Flash it with: make crkbd/rev1:aboulart:avrdude

// Select hand configuration: the side that has a USB connection will
// assume it's the right-hand side
#define MASTER_RIGHT

#define USE_SERIAL_PD2

//#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#undef RGBLED_NUM
#define RGBLED_NUM 42
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 20

#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_MATRIX_KEYPRESSES

// Disable unwanted effects to stay under the firmware size limit
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN

// Only keep the 'multi' variations of keypress effects
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH

#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH

// #define CONSOLE_ENABLE
// #undef NO_PRINT
// #undef NO_DEBUG

//#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DEBOUNCE 1

#define TAPPING_TERM 330
#define PERMISSIVE_HOLD

// #define IGNORE_MOD_TAP_INTERRUPT

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 60

// #define ONESHOT_TAP_TOGGLE 2
// #define ONESHOT_TIMEOUT 750
