#pragma once
// -------------------
// -- include
// -------------------
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "action_layer.h"
#include "eeconfig.h"
#include "mousekey.h"
#include "keymap_japanese.h"
#include "bmp_custom_keycodes.h"

// Layer Lock
#include "features/layer_lock.h"

// -------------------
// -- Prototypes for keymap specific customized functions
// -------------------
void keyboard_post_init_keymap(void);
void matrix_scan_keymap(void);
bool process_record_keymap(uint16_t keycode, keyrecord_t *record);

// -------------------
// -- Extern Const
// -------------------
// extern const key_override_t at_key_override, circ_key_override, ampr_key_override, astr_key_override, lprn_key_override, rprn_key_override, unds_key_override, plus_key_override, lcbr_key_override, rcbr_key_override, dquo_key_override, pipe_key_override, coln_key_override, tild_key_override, eql_key_override, lbrc_key_override, rbrc_key_override, bsls_key_override, quot_key_override, grv_key_override;

// -------------------
// -- Define
// -------------------
// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_____   _______
#define KC_XXXX   XXXXXXX
#define ___       _______

// -- Over Ride
#define OVR_TGL KEY_OVERRIDE_TOGGLE
//#define OVR_ON  KEY_OVERRIDE_ON
//#define OVR_OFF KEY_OVERRIDE_OFF

// -----------------------
// -- Define keymap wrapper
// -----------------------
// -- BASE
#define BASE_L0_USER_5K KC_1,    KC_2,    KC_3,    KC_4,    KC_5   
#define BASE_L1_USER_5K KC_Q,    KC_W,    KC_E,    KC_R,    KC_T 
#define BASE_L2_USER_5K KC_A,    KC_S,    KC_D,    KC_F,    KC_G 
#define BASE_L3_USER_5K KC_Z,    KC_X,    KC_C,    KC_V,    KC_B 
#define BASE_R0_USER_5K KC_6,    KC_7,    KC_8,    KC_9,    KC_0  
#define BASE_R1_USER_5K KC_Y,    KC_U,    KC_I,    KC_O,    KC_P   
#define BASE_R2_USER_5K KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define BASE_R3_USER_5K KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH
// -- RAIS
#define RAIS_L1_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define RAIS_L2_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PIPE
#define RAIS_L3_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define RAIS_R1_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define RAIS_R2_USER_5K KC_UNDS, KC_MINS, KC_PLUS, KC_EQL,  KC_TILD
#define RAIS_R3_USER_5K KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_BSLS
// -- RAI2
#define RAI2_L1_USER_5K KC_GRV,  LALT(KC_F4),KC_UP,KC_DQUO, KC_QUOT
#define RAI2_L2_USER_5K F2ED,    KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS
#define RAI2_L3_USER_5K QSET,    BRSET,   BQSET,   PRSET,   DQSET 
#define RAI2_R1_USER_5K CLLCPY,  F2CPY,   F2HM,LCTL(KC_PPLS),CLLPST
#define RAI2_R2_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define RAI2_R3_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
// -- LOWE
#define LOWE_L1_USER_5K KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define LOWE_L2_USER_5K KC_1,    KC_2,    KC_3,    KC_4,    KC_5   
#define LOWE_L3_USER_5K KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5  
#define LOWE_R1_USER_5K KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define LOWE_R2_USER_5K KC_6,    KC_7,    KC_8,    KC_9,    KC_0  
#define LOWE_R3_USER_5K KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
// -- FNLY
#define FNLY_L1_USER_5K KC_HOME, KC_NO,   KC_MS_U, KC_NO,   KC_PGUP
#define FNLY_L2_USER_5K KC_END,  KC_MS_L, KC_MS_D, KC_MS_R, KC_PGDN
#define FNLY_L3_USER_5K KC_NUM,  KC_PAST, KC_PSLS, KC_PPLS, KC_PMNS
#define FNLY_R1_USER_5K OVR_ON,  OVR_OFF, KC_PSCR, KC_SCRL, KC_PAUS
// #define FNLY_R1_USER_5K ENABLE_US_KEY_ON_JP_OS_OVERRIDE,  DISABLE_KEY_OS_OVERRIDE, KC_PSCR, KC_SCRL, KC_PAUS
#define FNLY_R2_USER_5K KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO 
#define FNLY_R3_USER_5K KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO 

// -- ADJ
#define ADJ_L1_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define ADJ_L2_USER_5K KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define ADJ_L3_USER_5K KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define ADJ_R1_USER_5K KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17
#define ADJ_R2_USER_5K KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22
#define ADJ_R3_USER_5K KC_F23,  KC_F24,  KC_LNG6, KC_LNG7, KC_RSFT

// -- BASE
#define BASE_L0_USER_6K KC_ESC,  BASE_L0_USER_5K 
#define BASE_L1_USER_6K KC_TAB,  BASE_L1_USER_5K 
#define BASE_L2_USER_6K KC_LCTL, BASE_L2_USER_5K 
#define BASE_L3_USER_6K KC_LSFT, BASE_L3_USER_5K 
#define BASE_R0_USER_6K BASE_R0_USER_5K, KC_BSPC
#define BASE_R1_USER_6K BASE_R1_USER_5K, KC_MINS
#define BASE_R2_USER_6K BASE_R2_USER_5K, KC_QUOT
#define BASE_R3_USER_6K BASE_R3_USER_5K, KC_RSFT
// -- RAIS
#define RAIS_L1_USER_6K KC_TRNS, RAIS_L1_USER_5K 
#define RAIS_L2_USER_6K KC_TRNS, RAIS_L2_USER_5K 
#define RAIS_L3_USER_6K KC_TRNS, RAIS_L3_USER_5K 
#define RAIS_R1_USER_6K RAIS_R1_USER_5K, KC_TRNS 
#define RAIS_R2_USER_6K RAIS_R2_USER_5K, KC_GRV  
#define RAIS_R3_USER_6K RAIS_R3_USER_5K, KC_TRNS 
// -- RAI2
#define RAI2_L1_USER_6K KC_TRNS, RAI2_L1_USER_5K 
#define RAI2_L2_USER_6K KC_TRNS, RAI2_L2_USER_5K 
#define RAI2_L3_USER_6K KC_TRNS, RAI2_L3_USER_5K 
#define RAI2_R1_USER_6K RAI2_R1_USER_5K, F2PST  
#define RAI2_R2_USER_6K RAI2_R2_USER_5K, KC_TRNS 
#define RAI2_R3_USER_6K RAI2_R3_USER_5K, KC_TRNS 
// -- LOWE
#define LOWE_L1_USER_6K KC_TRNS, LOWE_L1_USER_5K 
#define LOWE_L2_USER_6K KC_TRNS, LOWE_L2_USER_5K 
#define LOWE_L3_USER_6K KC_TRNS, LOWE_L3_USER_5K 
#define LOWE_R1_USER_6K LOWE_R1_USER_5K, KC_F11 
#define LOWE_R2_USER_6K LOWE_R2_USER_5K, KC_F12 
#define LOWE_R3_USER_6K LOWE_R3_USER_5K, KC_TRNS 
// -- FNLY
#define FNLY_L1_USER_6K KC_CAPS, FNLY_L1_USER_5K 
#define FNLY_L2_USER_6K KC_TRNS, FNLY_L2_USER_5K 
#define FNLY_L3_USER_6K KC_TRNS, FNLY_L3_USER_5K 
#define FNLY_R1_USER_6K FNLY_R1_USER_5K, KC_NO
#define FNLY_R2_USER_6K FNLY_R2_USER_5K, KC_NO
#define FNLY_R3_USER_6K FNLY_R3_USER_5K, KC_TRNS

// -- ADJ
#define ADJ_L1_USER_6K KC_TRNS, ADJ_L1_USER_5K 
#define ADJ_L2_USER_6K KC_TRNS, ADJ_L2_USER_5K 
#define ADJ_L3_USER_6K KC_TRNS, ADJ_L3_USER_5K 
#define ADJ_R1_USER_6K ADJ_R1_USER_5K, KC_LNG8
#define ADJ_R2_USER_6K ADJ_R2_USER_5K, KC_LNG9
#define ADJ_R3_USER_6K ADJ_R3_USER_5K, KC_TRNS

#define DUMMY_5K XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
#define DUMMY_6K XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
#define TRNS_5K  _______,_______,_______,_______,_______
#define TRNS_6K  _______,_______,_______,_______,_______,_______

// -------------------
// -- layers
// -------------------
// enum keymap_layout {
enum layers {
  BASE = 0,
  RAIS,
  RAI2,
  LOWE,
  FNLY,
  ADJ,
};

// -------------------
// -- Custom Keycodes
// -------------------
enum custom_keycodes {
    // OVR_ON = SAFE_RANGE,
    OVR_ON = BMP_SAFE_RANGE,
    OVR_OFF,
    // OVR_STAT,
    IMOFF,
    IMON,
    IMTG,
    // CWF4,
    F2CPY,
    F2PST,
    CLLCPY,
    CLLPST,
    F2HM,
    F2ED,
    QSET,
    BRSET,
    BQSET,
    PRSET,
    DQSET,
    // PCSET,
    BRSETIM,
    PRSETIM,
    CBRSETIM,
    ABKSETIM,
    FOURSP,
    FOURL,
    FOURR,
    LLOCK,
	M_JIGL
};

// -------------------
// -- Combos
// -------------------
enum combo_events {
// #ifdef VIAL_ENABLE
//   CMB_HOME = 32,
// #else
  CMB_HOME,
// #endif
  CMB_END,
  CMB_PGUP,
  CMB_PGDN,
  CMB_TAB,
  CMB_STAB,
  CMB_BSPC,
  CMB_ESC,
  CMB_DEL,
  CMB_INS,
  CMB_APP,
  CMB_SHOME,
  CMB_SEND,
  CMB_ENT,
  CMB_SPC,
  CMB_F11,
  CMB_F12,
// Print
  CMB_APRI,
  CMB_PRI,
  CMB_WPRI,
// input method
//  CMB_IMOFF,
//  CMB_IMON,
  CMB_IMTG,
  CMB_HENK,
  CMB_MHEN,
  CMB_KANA,
  CMB_CAPS,
// x4
  CMB_FOURSP,
  CMB_FOURL,
  CMB_FOURR,
// HOME & END with Cursor key combination 
  CMB_CHOM,
  CMB_CEND,
  CMB_CSHOM,
  CMB_CSEND,
// mouse
  CMB_BTN1,
  CMB_BTN2,
  CMB_BTN3,
// modifier
  CMB_LCTL,
  CMB_RCTL,
  CMB_LALT,
  CMB_RALT,
  CMB_LSFT,
  CMB_RSFT,
  CMB_LGUI,
  CMB_RGUI,
  CMB_LCLA,
  CMB_RCRA,
  CMB_LCLS,
  CMB_RCRS,
  CMB_RCRG,
// Layer Control
  CMB_LL1,
  CMB_LL2,
  CMB_LL3,
  CMB_RL1,
  CMB_RL2,
  CMB_RL3,
  CMB_LL1a,
  CMB_LL2a,
  CMB_LL3a,
  CMB_LL4a,
  CMB_RL1a,
  CMB_RL2a,
  CMB_RL3a,
  CMB_RL4a,
  CMB_CL3,
  CMB_CSL3,
  CMB_AL3,
  CMB_CL1,
  CMB_CSL1,
  CMB_AL1,
// Windows Virtual Desktop
  CMB_CGLEFT,
  CMB_CGRGHT,
  CMB_CGF4,
  CMB_CGD,
  COMBO_LENGTH
};

/*
typedef union {
  uint32_t raw;
  struct {
    bool     key_override_state :1;
  };
} user_config_t;
user_config_t user_config;
 */

extern keymap_config_t keymap_config;

