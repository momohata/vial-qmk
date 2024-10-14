#include "momohata.h"
/*
Copyright 2021 Salicylic_Acid

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

#include "bmp.h"
#include "bmp_custom_keycodes.h"
// #include "keycode_str_converter.h"
// #include "app_ble_func.h"

#define BASE_L0_KEYMAP_6K KC_ESC, LOWE_L2_USER_5K
#define BASE_R0_KEYMAP_6K LOWE_R2_USER_5K, KC_BSPC
#define BASE_C_KEYMAP_8K LT(FNLY,KC_PSCR), LALT_T(KC_NO), LT(RAIS,KC_SPC), LT(LOWE,KC_BSPC), LT(LOWE,KC_DEL), LT(RAIS,KC_ENT), RALT_T(KC_NO), LT(FNLY,KC_APP)

#define TRNS_C_KEYMAP_8K _______, _______, _______, _______, _______, _______, _______, _______

#define BMPADV_ROW_PATTERN_1 AD_WO_L, ADV_ID0, ADV_ID1, ADV_ID2, ADV_ID3, ADV_ID4, KC_TRNS, KC_TRNS, ADV_ID5, ADV_ID6, ADV_ID7, KC_NO, KC_NO, KC_NO
#define BMPDEL_ROW_PATTERN_1 DELBNDS, DEL_ID0, DEL_ID1, DEL_ID2, DEL_ID3, DEL_ID4, KC_TRNS, KC_TRNS, DEL_ID5, DEL_ID6, DEL_ID7, KC_NO, KC_NO, KC_NO

#define DUMMY_ROW_PATTERN_1 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define DUMMY_ROW_PATTERN_2 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define TRNS_ROW_PATTERN_1 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
#define TRNS_ROW_PATTERN_2 _______, _______, _______, _______, _______, _______

// #define RAIS_L0_KEYMAP_6K KC_TRNS, CBRSETIM, BRSETIM, ABKSETIM, PRSETIM, KC_TRNS, KC_TRNS
// #define RAIS_R0_KEYMAP_6K KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS

// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
// 
//     // For BMP Functional Keymap
//     // if (!process_record_user_bmp(keycode, record)) { return false; }
// 
//     // process_record_user : true = usual behavior
//     return true;
// };

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_wrapper(
  BASE_L0_USER_6K, M_JIGL,  OVR_ON,   BASE_R0_USER_6K,
  BASE_L1_USER_6K, ENT_SLP, OVR_OFF,  BASE_R1_USER_6K,
  BASE_L2_USER_6K, SEL_BLE, MO(ADJ),  BASE_R2_USER_6K,
  BASE_L3_USER_6K, SEL_USB, MO(FNLY), BASE_R3_USER_6K,
  KC_INS, KC_LGUI, KC_MS_U, BASE_C_KEYMAP_8K, KC_UP, KC_RGUI, KC_RCTL,
  KC_MS_L, KC_MS_D, KC_MS_R, KC_LEFT, KC_DOWN, KC_RGHT
),
[RAIS] = LAYOUT_wrapper(
  BMPADV_ROW_PATTERN_1,
  RAIS_L1_USER_6K, KC_TRNS, KC_TRNS, RAIS_R1_USER_6K,
  RAIS_L2_USER_6K, KC_TRNS, KC_TRNS, RAIS_R2_USER_6K,
  RAIS_L3_USER_6K, KC_TRNS, KC_TRNS, RAIS_R3_USER_6K,
  KC_TRNS, KC_TRNS, KC_WH_U, TRNS_C_KEYMAP_8K, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS
),
[RAI2] = LAYOUT_wrapper(
  TRNS_ROW_PATTERN_1,
  RAI2_L1_USER_6K, KC_TRNS, KC_TRNS, RAI2_R1_USER_6K,
  RAI2_L2_USER_6K, KC_TRNS, KC_TRNS, RAI2_R2_USER_6K,
  RAI2_L3_USER_6K, KC_TRNS, KC_TRNS, RAI2_R3_USER_6K,
  TRNS_ROW_PATTERN_1,
  TRNS_ROW_PATTERN_2
),
[LOWE] = LAYOUT_wrapper(
  TRNS_ROW_PATTERN_1,
  LOWE_L1_USER_6K, KC_TRNS, KC_TRNS, LOWE_R1_USER_6K,
  LOWE_L2_USER_6K, KC_TRNS, KC_TRNS, LOWE_R2_USER_6K,
  LOWE_L3_USER_6K, KC_TRNS, KC_TRNS, LOWE_R3_USER_6K,
  TRNS_ROW_PATTERN_1,
  TRNS_ROW_PATTERN_2
),
[FNLY] = LAYOUT_wrapper( 
  KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS,
  FNLY_L1_USER_6K, KC_TRNS, KC_TRNS, FNLY_R1_USER_6K,
  FNLY_L2_USER_6K, KC_TRNS, LLOCK,   FNLY_R2_USER_6K,
  FNLY_L3_USER_6K, KC_TRNS, KC_TRNS, FNLY_R3_USER_6K,
  KC_CAPS, KC_TRNS, KC_TRNS,KC_BTN3,KC_BTN2,KC_BTN1,LLOCK,KC_TRNS,KC_TRNS,KC_TRNS,MO(4),KC_PGUP,KC_TRNS,KC_TRNS,
  _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),
[ADJ] = LAYOUT_wrapper ( 
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
  ADJ_L1_USER_6K, KC_TRNS, KC_TRNS, ADJ_R1_USER_6K,
  ADJ_L2_USER_6K, KC_TRNS, KC_TRNS, ADJ_R2_USER_6K,
  ADJ_L3_USER_6K, KC_TRNS, KC_TRNS, ADJ_R3_USER_6K,
  TRNS_ROW_PATTERN_1,
  TRNS_ROW_PATTERN_2
)
};

