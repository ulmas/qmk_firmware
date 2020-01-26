#include QMK_KEYBOARD_H

enum {
  TD_SLSH_QUES = 0,
  TD_SPC_DEL = 1,
  TD_ENT_BSPC = 2,
  TD_SCLN_COLN = 3,
  TD_QUOT_DQUO = 4,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_SLSH_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_QUES),
    [TD_SPC_DEL] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_DEL),
    [TD_ENT_BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, KC_BSPC),
    [TD_SCLN_COLN] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_COLN),
    [TD_QUOT_DQUO] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_DQUO)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_GESC       , KC_1 , KC_2  , KC_3   , KC_4 , KC_5          , KC_6   , KC_7   , KC_8, KC_9, KC_0   , KC_MINS,
        KC_TAB        , KC_Q , KC_W  , KC_E   , KC_R , KC_T          , KC_Y   , KC_U   , KC_I, KC_O, KC_P   , KC_BSLS,
        LCTL_T(KC_GRV), KC_A , KC_S  , KC_D   , KC_F , KC_G          , KC_H   , KC_J   , KC_K, KC_L, TD(3)  , TD(4)  ,
        KC_LSFT       , KC_Z , KC_X  , KC_C   , KC_V , KC_B          , _______, _______, KC_N, KC_M, KC_COMM, KC_DOT , TD(0), RSFT_T(KC_BSPC),
        KC_LGUI       , MO(1), KC_SPC, KC_ENT , MO(2), LALT_T(KC_DEL)
        ),
	[1] = LAYOUT(
        _______, _______ , _______, _______, _______, KC_LABK, KC_RABK, KC_PSLS, KC_PAST, KC_PAST, KC_PMNS, KC_MINS,
        BL_BRTG, BL_INC  , _______, _______, _______, KC_LPRN, KC_RPRN, KC_P7  , KC_P8  , KC_P9  , KC_PPLS, KC_EQL ,
        BL_STEP, BL_DEC  , KC_LEFT, KC_RGHT, KC_UP  , KC_LCBR, KC_RCBR, KC_P4  , KC_P5  , KC_P6  , KC_PCMM, _______,
        LT(3, _______), BL_TOGG, _______, _______, KC_DOWN, KC_LBRC, _______, _______, KC_RBRC, KC_P1  , KC_P2  , KC_P3, KC_PEQL, KC_PDOT,
        _______, _______ , KC_DEL , KC_BSPC, KC_P0  , KC_PDOT
        ),
	[2] = LAYOUT(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
        RESET  , KC_VOLU, _______, _______, _______, KC_PEQL, KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
        _______, KC_VOLD, _______, KC_HOME, KC_PGUP, KC_UNDS, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
        KC_MUTE, _______, _______, KC_END , KC_PGDN, KC_PMNS, _______, _______, KC_PPLS, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______
        ),
	[3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_WH_U,
        _______, _______, _______, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______, KC_WH_D,
        _______, _______, _______, _______, _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______,
        _______, _______, _______, KC_BTN1, _______, _______
        )
};
