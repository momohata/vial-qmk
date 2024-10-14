#include "momohata.h"
#include "bmp_settings.h"

#ifndef VIAL_ENABLE
const key_override_t at_key_override   = ko_make_basic(MOD_MASK_SHIFT, KC_2,    JP_AT);
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6,    JP_CIRC);
const key_override_t ampr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7,    JP_AMPR);
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8,    JP_ASTR);
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9,    JP_LPRN);
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0,    JP_RPRN);
const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, JP_UNDS);
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL,  JP_PLUS);
const key_override_t lcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, JP_LCBR);
const key_override_t rcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, JP_RCBR);
const key_override_t dquo_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO);
const key_override_t pipe_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, JP_PIPE);
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, JP_COLN);
const key_override_t tild_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_GRV,  JP_TILD);
const key_override_t eql_key_override  = ko_make_with_layers_and_negmods(0, KC_EQL,  JP_EQL,  ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t lbrc_key_override = ko_make_with_layers_and_negmods(0, KC_LBRC, JP_LBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t rbrc_key_override = ko_make_with_layers_and_negmods(0, KC_RBRC, JP_RBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t bsls_key_override = ko_make_with_layers_and_negmods(0, KC_BSLS, JP_BSLS, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t quot_key_override = ko_make_with_layers_and_negmods(0, KC_QUOT, JP_QUOT, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t grv_key_override  = ko_make_with_layers_and_negmods(0, KC_GRV,  JP_GRV,  ~0, (uint8_t) MOD_MASK_SHIFT);

const key_override_t **key_overrides = (const key_override_t *[]){
    &at_key_override,
    &circ_key_override,
    &ampr_key_override,
    &astr_key_override,
    &lprn_key_override,
    &rprn_key_override,
    &unds_key_override,
    &plus_key_override,
    &lcbr_key_override,
    &rcbr_key_override,
    &dquo_key_override,
    &pipe_key_override,
    &coln_key_override,
    &tild_key_override,
    &eql_key_override,
    &lbrc_key_override,
    &rbrc_key_override,
    &bsls_key_override,
    &quot_key_override,
    &grv_key_override,
    NULL
};
#endif

#ifndef VIAL_ENABLE
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM tabq_combo[] = {KC_TAB, KC_Q, COMBO_END};
// =============================================================
//   隣接キー
// =============================================================
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};

const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM vb_combo[] = {KC_V, KC_B, COMBO_END};

// const uint16_t PROGMEM yu_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};

// const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM mcomm_combo[] = {KC_M, KC_COMM, COMBO_END};

// const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM commdot_combo[] = {KC_COMM, KC_DOT, COMBO_END};

// const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM lscln_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM dotslsh_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
// =============================================================

// =============================================================
//   ひとつ飛ばしキー
// =============================================================
const uint16_t PROGMEM qe_combo[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM ad_combo[] = {KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM zc_combo[] = {KC_Z, KC_C, COMBO_END};

const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM sf_combo[] = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM xv_combo[] = {KC_X, KC_V, COMBO_END};

// const uint16_t PROGMEM et_combo[] = {KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM dg_combo[] = {KC_D, KC_G, COMBO_END};
// const uint16_t PROGMEM cb_combo[] = {KC_C, KC_B, COMBO_END};

// const uint16_t PROGMEM yi_combo[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM hk_combo[] = {KC_H, KC_K, COMBO_END};
// const uint16_t PROGMEM ncomm_combo[] = {KC_N, KC_COMM, COMBO_END};

const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM mdot_combo[] = {KC_M, KC_DOT, COMBO_END};

// const uint16_t PROGMEM ip_combo[] = {KC_I, KC_P, COMBO_END};
// const uint16_t PROGMEM kscln_combo[] = {KC_K, KC_SCLN, COMBO_END};
// const uint16_t PROGMEM commslsh_combo[] = {KC_COMM, KC_SLSH, COMBO_END};
// =============================================================

// =============================================================
//   ふたつ飛ばしキー
// =============================================================
// const uint16_t PROGMEM qr_combo[] = {KC_Q, KC_R, COMBO_END};
const uint16_t PROGMEM zf_combo[] = {KC_Z, KC_F, COMBO_END};
const uint16_t PROGMEM zv_combo[] = {KC_Z, KC_V, COMBO_END};

const uint16_t PROGMEM wt_combo[] = {KC_W, KC_T, COMBO_END};
const uint16_t PROGMEM sg_combo[] = {KC_S, KC_G, COMBO_END};
const uint16_t PROGMEM xb_combo[] = {KC_X, KC_B, COMBO_END};

// const uint16_t PROGMEM yo_combo[] = {KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM hl_combo[] = {KC_H, KC_L, COMBO_END};
// const uint16_t PROGMEM ndot_combo[] = {KC_N, KC_DOT, COMBO_END};

// const uint16_t PROGMEM up_combo[] = {KC_U, KC_P, COMBO_END};
const uint16_t PROGMEM jscln_combo[] = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM mslsh_combo[] = {KC_M, KC_SLSH, COMBO_END};
// =============================================================

// =============================================================
//   みっつ飛ばしキー
// =============================================================
// const uint16_t PROGMEM qt_combo[] = {KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM ag_combo[] = {KC_A, KC_G, COMBO_END};
const uint16_t PROGMEM zb_combo[] = {KC_Z, KC_B, COMBO_END};

// const uint16_t PROGMEM yp_combo[] = {KC_Y, KC_P, COMBO_END};
const uint16_t PROGMEM hscln_combo[] = {KC_H, KC_SCLN, COMBO_END};
const uint16_t PROGMEM nslsh_combo[] = {KC_N, KC_SLSH, COMBO_END};
// =============================================================

// =============================================================
//   その他キー
// =============================================================
const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM sdg_combo[] = {KC_S, KC_D, KC_G, COMBO_END};
const uint16_t PROGMEM sdv_combo[] = {KC_S, KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM sdb_combo[] = {KC_S, KC_D, KC_B, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM hkl_combo[] = {KC_H, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mkl_combo[] = {KC_M, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM nkl_combo[] = {KC_N, KC_K, KC_L, COMBO_END};

const uint16_t PROGMEM qv_combo[] = {KC_Q, KC_V, COMBO_END};
const uint16_t PROGMEM mp_combo[] = {KC_M, KC_P, COMBO_END};

const uint16_t PROGMEM av_combo[] = {KC_A, KC_V, COMBO_END};
const uint16_t PROGMEM sb_combo[] = {KC_S, KC_B, COMBO_END};
const uint16_t PROGMEM nl_combo[] = {KC_N, KC_L, COMBO_END};
const uint16_t PROGMEM mscln_combo[] = {KC_M, KC_SCLN, COMBO_END};

const uint16_t PROGMEM sv_combo[] = {KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM db_combo[] = {KC_D, KC_B, COMBO_END};
const uint16_t PROGMEM nk_combo[] = {KC_N, KC_K, COMBO_END};
const uint16_t PROGMEM ml_combo[] = {KC_M, KC_L, COMBO_END};

const uint16_t PROGMEM sc_combo[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM dv_combo[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM fb_combo[] = {KC_F, KC_B, COMBO_END};
const uint16_t PROGMEM nj_combo[] = {KC_N, KC_J, COMBO_END};
const uint16_t PROGMEM mk_combo[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM comml_combo[] = {KC_COMM, KC_L, COMBO_END};

const uint16_t PROGMEM qa_combo[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM ws_combo[] = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM ed_combo[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM rf_combo[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM tg_combo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM yh_combo[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM uj_combo[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM ik_combo[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM ol_combo[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM pscln_combo[] = {KC_P, KC_SCLN, COMBO_END};

const uint16_t PROGMEM az_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM sx_combo[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM dc_combo[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM fv_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM gb_combo[] = {KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM hn_combo[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM jm_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM kcomm_combo[] = {KC_K, KC_COMM, COMBO_END};
const uint16_t PROGMEM ldot_combo[] = {KC_L, KC_DOT, COMBO_END};
const uint16_t PROGMEM sclnslsh_combo[] = {KC_SCLN, KC_SLSH, COMBO_END};

const uint16_t PROGMEM leftdown_combo[] = {KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM rghtdown_combo[] = {KC_RGHT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM leftup_combo[] = {KC_LEFT, KC_UP, COMBO_END};
const uint16_t PROGMEM rghtup_combo[] = {KC_RGHT, KC_UP, COMBO_END};

const uint16_t PROGMEM zins_combo[] = {KC_Z, KC_INS, COMBO_END};
const uint16_t PROGMEM xins_combo[] = {KC_X, KC_INS, COMBO_END};
const uint16_t PROGMEM cins_combo[] = {KC_C, KC_INS, COMBO_END};

const uint16_t PROGMEM f3f4_combo[] = {KC_F3, KC_F4, COMBO_END};
const uint16_t PROGMEM f7f8_combo[] = {KC_F7, KC_F8, COMBO_END};

combo_t key_combos[] = {
  [CMB_HOME]   = COMBO(wr_combo, KC_HOME),
  [CMB_END]    = COMBO(xv_combo, KC_END),
  [CMB_PGUP]   = COMBO(er_combo, KC_PGUP),
  [CMB_PGDN]   = COMBO(cv_combo, KC_PGDN),
  [CMB_STAB]   = COMBO(we_combo, LSFT(KC_TAB)),
  [CMB_TAB]    = COMBO(xc_combo, KC_TAB),
  [CMB_BSPC]   = COMBO(fg_combo, KC_BSPC),
  [CMB_ESC]    = COMBO(sf_combo, KC_ESC),
  [CMB_DEL]    = COMBO(hj_combo, KC_DEL),
  [CMB_INS]    = COMBO(commdot_combo, KC_INS),
  [CMB_APP]    = COMBO(jl_combo, KC_APP),
  [CMB_SHOME]  = COMBO(uo_combo, LSFT(KC_HOME)),
  [CMB_SEND]   = COMBO(mdot_combo, LSFT(KC_END)),
  [CMB_ENT]    = COMBO(jkl_combo, KC_ENT),
  [CMB_SPC]    = COMBO(sdf_combo, KC_SPC),
// Print
  [CMB_APRI]   = COMBO(qe_combo, LALT(KC_PSCR)),
  [CMB_PRI]    = COMBO(ad_combo, KC_PSCR),
  [CMB_WPRI]   = COMBO(zc_combo, LGUI(KC_PSCR)),
// input method
//  [CMB_IMOFF]  = COMBO(dg_combo, IMOFF),
//  [CMB_IMON]   = COMBO(hk_combo, IMON),
  [CMB_IMTG]   = COMBO(qw_combo, IMTG),
  [CMB_HENK]   = COMBO(as_combo, JP_HENK),
  [CMB_MHEN]   = COMBO(zx_combo, JP_MHEN),
  [CMB_KANA]   = COMBO(lscln_combo, JP_KANA),
  [CMB_CAPS]   = COMBO(dotslsh_combo, KC_CAPS),
// x4
  [CMB_FOURSP] = COMBO(tabq_combo, FOURSP),
  [CMB_FOURL]  = COMBO(vb_combo, FOURL),
  [CMB_FOURR]  = COMBO(nm_combo, FOURR),
// HOME & END with Cursor key combination 
  [CMB_CHOM]   = COMBO(leftdown_combo, LCTL(KC_HOME)),
  [CMB_CEND]   = COMBO(rghtdown_combo, LCTL(KC_END)),
  [CMB_CSHOM]  = COMBO(leftup_combo, LCTL(LSFT(KC_HOME))),
  [CMB_CSEND]  = COMBO(rghtup_combo, LCTL(LSFT(KC_END))),
// mouse
  [CMB_BTN1]   = COMBO(zins_combo, KC_BTN1),
  [CMB_BTN2]   = COMBO(xins_combo, KC_BTN2),
  [CMB_BTN3]   = COMBO(cins_combo, KC_BTN3),
// modifier
  // Ctrl
  [CMB_LCTL]   = COMBO(mk_combo, KC_LCTL),
  [CMB_RCTL]   = COMBO(dv_combo, KC_RCTL),
  // Alt
  [CMB_LALT]   = COMBO(sd_combo, KC_LALT),
  [CMB_RALT]   = COMBO(kl_combo, KC_RALT),
  // Shift
  [CMB_LSFT]   = COMBO(df_combo, LSFT_T(KC_NO)),
  [CMB_RSFT]   = COMBO(jk_combo, RSFT_T(KC_NO)),
  // Gui
  [CMB_LGUI]   = COMBO(zf_combo, KC_LGUI),
  [CMB_RGUI]   = COMBO(jscln_combo, KC_RGUI),
  // Ctrl - Alt
  [CMB_LCLA]   = COMBO(sg_combo, LCTL(KC_LALT)),
  [CMB_RCRA]   = COMBO(hl_combo, RCTL(KC_RALT)),
  // Ctrl - Shift
  [CMB_LCLS]   = COMBO(dg_combo, LCTL(KC_LSFT)),
  [CMB_RCRS]   = COMBO(hk_combo, RCTL(KC_RSFT)),
  // Ctrl - Gui
  [CMB_RCRG]   = COMBO(hscln_combo, RCTL(KC_RGUI)),
// Layer Control
  [CMB_LL1]    = COMBO(sv_combo, MO(RAIS)),
  [CMB_LL2]    = COMBO(sb_combo, MO(LOWE)),
  [CMB_LL3]    = COMBO(sc_combo, MO(FNLY)),
  [CMB_RL1]    = COMBO(ml_combo, MO(RAIS)),
  [CMB_RL2]    = COMBO(nl_combo, MO(LOWE)),
  [CMB_RL3]    = COMBO(comml_combo, MO(FNLY)),
  [CMB_LL1a]   = COMBO(fv_combo, MO(RAIS)),
  [CMB_LL2a]   = COMBO(gb_combo, MO(LOWE)),
  [CMB_LL3a]   = COMBO(dc_combo, MO(FNLY)),
  [CMB_LL4a]   = COMBO(sx_combo, MO(ADJ)),
  [CMB_RL1a]   = COMBO(jm_combo, MO(RAIS)),
  [CMB_RL2a]   = COMBO(hn_combo, MO(LOWE)),
  [CMB_RL3a]   = COMBO(kcomm_combo, MO(FNLY)),
  [CMB_RL4a]   = COMBO(ldot_combo, MO(ADJ)),
  // Ctrl - FnLyr
  [CMB_CL3]   = COMBO(sdb_combo, LM(FNLY,MOD_LCTL)),
  // Ctrl Shift - FnLyr
  [CMB_CSL3]   = COMBO(sdg_combo, LM(FNLY,MOD_LCTL | MOD_LSFT)),
  // Alt  - FnLyr
  [CMB_AL3]   = COMBO(sdv_combo, LM(FNLY,MOD_LALT)),
  // Ctrl - Raise
  [CMB_CL1]   = COMBO(nkl_combo, LM(RAIS,MOD_RCTL)),
  // Ctrl Shift - Raise
  [CMB_CSL1]   = COMBO(hkl_combo, LM(RAIS,MOD_RCTL | MOD_RSFT)),
  // Alt  - Raise
  [CMB_AL1]   = COMBO(mkl_combo, LM(RAIS,MOD_RALT)),
// Windows Virtual Desktop
  [CMB_CGLEFT] = COMBO(rf_combo, LCTL(LGUI(KC_LEFT))),
  [CMB_CGRGHT] = COMBO(uj_combo, RCTL(RGUI(KC_RGHT))),
  [CMB_CGF4]   = COMBO(tg_combo, LCTL(LGUI(KC_F4))),
  [CMB_CGD]    = COMBO(yh_combo, LCTL(LGUI(KC_D))),
// Function key
  [CMB_F11]    = COMBO(f3f4_combo, KC_F11),
  [CMB_F12]    = COMBO(f7f8_combo, KC_F12),
};
#endif

// uint16_t get_combo_term(uint16_t index, combo_t *combo) {
//     switch (index) {
//         case CMB_LGUI:
//             return 20;
//     }
//     return COMBO_TERM;
// }

bool bmp_us_key_jp_os_override_active = false;

__attribute__ ((weak)) void keyboard_post_init_keymap(void) {};
void keyboard_post_init_user(void) {
    // Read the user config from EEPROM
    /*
    user_config.raw = eeconfig_read_user();

    // Set Key Override
    if (user_config.key_override_state) {
      key_override_on();
    } else {
      key_override_off();
    }
    */
    if (bmp_get_key_os_override() == BMP_US_KEY_JP_OS_OVERRIDE) {
        bmp_us_key_jp_os_override_active = true;
    } else {
        bmp_us_key_jp_os_override_active = false;
    }

    keyboard_post_init_keymap();
};

// Mouse Jiggler
bool is_mouse_jiggle_active = false;
bool mouse_jiggle_direction = false; // used to alternate direction
uint16_t mouse_jiggle_frequency = 15000; // how often to move the mouse (15 seconds)
uint16_t mouse_jiggle_timer = 0;
uint32_t mouse_jiggle_standby_time = 300000; 
uint32_t mouse_jiggle_enable_timer = 0;

__attribute__ ((weak)) void matrix_scan_keymap(void) {};
void matrix_scan_user(void) {
    // Layer Lock
    layer_lock_task();

    // Mouse Jiggler
    if (is_keyboard_master()) {
        // initialize timer on master half only, remove if statement above for non-split
    }
    if (is_mouse_jiggle_active) {
        if (is_keyboard_master()) {
            if (mouse_jiggle_timer == 0) mouse_jiggle_timer = timer_read();
            if (mouse_jiggle_enable_timer == 0) mouse_jiggle_enable_timer = timer_read32();
        }
        if (timer_elapsed32(mouse_jiggle_enable_timer) > mouse_jiggle_standby_time) {
            if (timer_elapsed(mouse_jiggle_timer) > mouse_jiggle_frequency) {
                mouse_jiggle_timer = timer_read();
                if (mouse_jiggle_direction) {
                    tap_code(KC_MS_LEFT);
                } else {
                    tap_code(KC_MS_RIGHT);
                }
                mouse_jiggle_direction = !mouse_jiggle_direction;
            }
        }
    }

    matrix_scan_keymap();
};

__attribute__ ((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    static bool lshift = false;
    static bool rshift = false;

    // Layer Lock
    if (!process_layer_lock(keycode, record, LLOCK)) { return false; }

    switch (keycode) {
    case LALT_T(KC_NO):
    case LSFT_T(KC_NO):
        if (record->tap.count && record->event.pressed) {
            // LALT when tap...
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                //  in JP mode.
                SEND_STRING(SS_TAP(X_CAPS));
            } else {
                //  in US mode.
                SEND_STRING(SS_LSFT(SS_TAP(X_CAPS)));
            }
            return false; // Return false to ignore further processing of key
        }
        break;
    case RALT_T(KC_NO):
    case RSFT_T(KC_NO):
        if (record->tap.count && record->event.pressed) {
            // RALT when tap...
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_KANA);
            } else {
                // in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
            }
            return false; // Return false to ignore further processing of key
        }
        break;
    case IMOFF:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                //  in JP mode.
                SEND_STRING(SS_TAP(X_CAPS));
            } else {
                //  in US mode.
                SEND_STRING(SS_LSFT(SS_TAP(X_CAPS)));
            }
        } else {
            // when keycode is released
        }
        break;
    case IMON:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_KANA);
            } else {
                // in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
            }
        } else {
            // when keycode is released
        }
        break;
    case IMTG:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(KC_GRV);
            } else {
                // in US mode.
                SEND_STRING(SS_LALT(SS_TAP(X_GRV)));
            }
        } else {
            // when keycode is released
        }
        break;
    case MO(RAIS):
    case LT(RAIS,KC_SPC):
    case LT(RAIS,KC_ENT):
    case LT(RAIS,KC_BSPC):
        if (record->event.pressed) {
            // when keycode is pressed
            if (!record->tap.count) {
                layer_on(RAI2);
            }
        } else {
            // when keycode is released
            if (layer_state_is(RAI2)) {
                layer_off(RAI2);
            }
        }
        break;
    case KC_MINS:
        if (record->event.pressed) {
            // when keycode is pressed
            if (layer_state_is(RAI2)) {
                layer_off(RAI2);
            }
        }
        break;
    // Directly inputting keys with the SHIFT key (ex.KC_PIPE, KC_AT...) does not trigger key_override_feature, so it needs to be manually override.
    case KC_PIPE:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_PIPE);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_UNDS:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_UNDS);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_PLUS:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_PLUS);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_EQL:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_EQL);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_TILD:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_TILD);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_GRV:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_GRV);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_LCBR:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_LCBR);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_RCBR:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_RCBR);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_AT:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_AT);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_CIRC:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_CIRC);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_AMPR:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_AMPR);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_ASTR:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_ASTR);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_LPRN:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_LPRN);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_RPRN:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                tap_code16(JP_RPRN);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_QUOT:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                lshift = keyboard_report->mods & MOD_BIT(KC_LSFT); // whether lshift key has been pressed or not.
                rshift = keyboard_report->mods & MOD_BIT(KC_RSFT); // whether rshift key has been pressed or not.
                if (lshift || rshift) {
                    tap_code16(JP_DQUO);
                } else {
                    tap_code16(JP_QUOT);
                }
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case KC_DQUO:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                tap_code16(JP_DQUO);
                return false; // Return false to ignore further processing of key
            }
        }
        break;
    case OVR_ON:
        if (record->event.pressed) {
            // when keycode is pressed
            // key_override_on();
            // user_config.key_override_state = 1;
            // eeconfig_update_user(user_config.raw); // Writes the new status to EEPROM
            bmp_set_key_os_override(BMP_US_KEY_JP_OS_OVERRIDE);
            bmp_us_key_jp_os_override_active = true;
        } else {
            // when keycode is released
        }
        break;
    case OVR_OFF:
        if (record->event.pressed) {
            // when keycode is pressed
            // key_override_off();
            // user_config.key_override_state = 0;
            // eeconfig_update_user(user_config.raw); // Writes the new status to EEPROM
            bmp_set_key_os_override(BMP_KEY_OS_OVERRIDE_DISABLE);
            bmp_us_key_jp_os_override_active = false;
        } else {
            // when keycode is released
        }
        break;
    /*
     * case OVR_STAT:
     *     if (record->event.pressed) {
     *         // when keycode is pressed
     *         // if (key_override_is_enabled()) {
     *         if (bmp_us_key_jp_os_override_active) {
     *             // in JP mode.
     *             SEND_STRING("OVR is ON.");
     *         } else {
     *             // in US mode.
     *             SEND_STRING("OVR is OFF.");
     *         }
     *     } else {
     *         // when keycode is released
     *     }
     *     break;
     */
    /*
     * case CWF4:
     *        // return MACRO(D(LCTL), D(LGUI), T(F4), U(LGUI), U(LCTL), END);
     *     if (record->event.pressed) {
     *         // when keycode is pressed
     *         SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_F4))));
     *     } else {
     *         // when keycode is released
     *     }
     *     break;
     */
    case F2CPY:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL("c"));
        } else {
            // when keycode is released
        }
        break;
    case F2PST:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL("v"));
        } else {
            // when keycode is released
        }
        break;
    case CLLCPY:
           // return MACRO(T(F2), T(HOME), D(LCTL), D(LSFT), T(END), U(LSFT), T(C), U(LCTL), END);
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END))"c"));
        } else {
            // when keycode is released
        }
        break;
    case CLLPST:
           // return MACRO(T(F2), T(HOME), D(LCTL), D(LSFT), T(END), U(LSFT), T(V), U(LCTL), END);
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END))"v"));
        } else {
            // when keycode is released
        }
        break;
    case F2HM:
           // return MACRO(T(F2), D(LCTL), T(HOME), U(LCTL), END);
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL(SS_TAP(X_HOME)));
        } else {
            // when keycode is released
        }
        break;
    case F2ED:
           // return MACRO(T(F2), D(LCTL), T(END), U(LCTL), END);
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_F2) SS_LCTL(SS_TAP(X_END)));
        } else {
            // when keycode is released
        }
        break;
    case QSET:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                SEND_STRING("&&" SS_TAP(X_LEFT));
            } else {
                // in US mode.
                SEND_STRING("''" SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case BRSET:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                SEND_STRING("]\\" SS_TAP(X_LEFT));
            } else {
                // in US mode.
                SEND_STRING("[]" SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case BRSETIM:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // IME ON when tapped in JP mode.
                tap_code16(JP_KANA);
                // in JP mode.
                SEND_STRING("]\\" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            } else {
                // IME ON when tapped in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
                // in US mode.
                SEND_STRING("[]" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case BQSET:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                SEND_STRING("{{" SS_TAP(X_LEFT));
            } else {
                // in US mode.
                SEND_STRING("``" SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case PRSET:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                SEND_STRING("*(" SS_TAP(X_LEFT));
            } else {
                // in US mode.
                SEND_STRING("()" SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case PRSETIM:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // IME ON when tapped in JP mode.
                tap_code16(JP_KANA);
                // in JP mode.
                SEND_STRING("*(" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            } else {
                // IME ON when tapped in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
                // in US mode.
                SEND_STRING("()" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case DQSET:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // in JP mode.
                SEND_STRING("@@" SS_TAP(X_LEFT));
            } else {
                // in US mode.
                SEND_STRING("\"\"" SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    /*
     * case PCSET:
     *     if (record->event.pressed) {
     *         // when keycode is pressed
     *         if (key_override_is_enabled()) {
     *             // IME OFF when tapped in JP mode.
     *             SEND_STRING(SS_TAP(X_CAPS));
     *         } else {
     *             // IME OFF when tapped in US mode.
     *             SEND_STRING(SS_LSFT(SS_TAP(X_CAPS)));
     *         }
     *         SEND_STRING("%%" SS_TAP(X_LEFT));
     *     } else {
     *         // when keycode is released
     *     }
     *     break;
     */
    case CBRSETIM:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // IME ON when tapped in JP mode.
                tap_code16(JP_KANA);
                // in JP mode.
                SEND_STRING("}|" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            } else {
                // IME ON when tapped in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
                // in US mode.
                SEND_STRING("{}" SS_TAP(X_ENT) SS_TAP(X_LEFT));
            }
        } else {
            // when keycode is released
        }
        break;
    case ABKSETIM:
        if (record->event.pressed) {
            // when keycode is pressed
            // if (key_override_is_enabled()) {
            if (bmp_us_key_jp_os_override_active) {
                // IME ON when tapped in JP mode.
                tap_code16(JP_KANA);
            } else {
                // IME ON when tapped in US mode.
                SEND_STRING(SS_LCTL(SS_TAP(X_CAPS)));
            }
            SEND_STRING("<>" SS_TAP(X_ENT) SS_TAP(X_LEFT));
        } else {
            // when keycode is released
        }
        break;
    case FOURSP:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_SPC) SS_TAP(X_SPC) SS_TAP(X_SPC) SS_TAP(X_SPC));
        } else {
            // when keycode is released
        }
        break;
    case FOURL:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
        } else {
            // when keycode is released
        }
        break;
    case FOURR:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING(SS_TAP(X_RGHT) SS_TAP(X_RGHT) SS_TAP(X_RGHT) SS_TAP(X_RGHT));
        } else {
            // when keycode is released
        }
        break;
    case M_JIGL:
        if (record->event.pressed) {
            is_mouse_jiggle_active = !is_mouse_jiggle_active;
        }
        break;
    }

    // -----------------------
    // キー入力により無操作タイマーをリセット
    // -----------------------
    if (record->event.pressed) {
        if (is_mouse_jiggle_active) {
            mouse_jiggle_enable_timer = timer_read32();
      }
    }
    // -----------------------

    // process_record_user : true = usual behavior
    // return true;
    return process_record_keymap(keycode, record);
};

