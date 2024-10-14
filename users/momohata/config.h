/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

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

// #define COMBO_COUNT 32
// #define COMBO_PROCESS_KEY_RELEASE
#ifdef VIAL_KEY_OVERRIDE_ENTRIES
    #undef VIAL_KEY_OVERRIDE_ENTRIES
#endif
#define VIAL_KEY_OVERRIDE_ENTRIES 64

#define USB_POLLING_INTERVAL_MS 15

/* Use I2C or Serial, not both */
// #define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
// #define MASTER_LEFT
// #define _MASTER_RIGHT
// #define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200
// #define RETRO_TAPPING
#define PERMISSIVE_HOLD
#define PREVENT_STUCK_MODIFIERS

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 2000

/* MOUSEKEY SETTING */
#undef MOUSEKEY_INTERVAL
// #define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_TIME_TO_MAX
// #define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_TIME_TO_MAX 32
#undef MOUSEKEY_MAX_SPEED
// #define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_MAX_SPEED 32
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_INERTIA

#define LAYER_LOCK_IDLE_TIMEOUT 60000  // Turn off after 60 seconds.

