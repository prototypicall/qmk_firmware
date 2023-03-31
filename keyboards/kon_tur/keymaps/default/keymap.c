#include QMK_KEYBOARD_H

enum Kon_Tur_Layers {
    _Def = 0,
    _Def_Kp= 1,
    _Def_Fn = 2,
    _Mac = 3,
    _Mac_Kp = 4,
    _Mac_Fn = 5
};

#define MC_HOME LCTL(KC_A)
#define MC_END LCTL(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_Def] = LAYOUT_ortho_6x6_split(
        KC_EQL  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                     KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
        KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                                     KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_BSLS ,
        KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
        KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                     KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                 KC_ESC  ,KC_GRV  ,KC_LBRC ,KC_RBRC ,                                                       KC_LEFT ,KC_UP   ,KC_DOWN ,KC_RGHT ,
                                                             KC_LCTL ,KC_LWIN ,     KC_RALT ,KC_RCTL ,
                                                    KC_BSPC ,KC_DEL  ,KC_HOME ,     KC_PGUP ,KC_ENT  ,KC_SPC ,
                                                                      KC_END  ,     KC_PGDN ,
                                               MO(1)  ,                                                     MO(1)  ,
                                        MO(2)  ,                                                                  MO(2)
    ),
    [_Def_Kp] = LAYOUT_ortho_6x6_split(
        DF(_Mac),KC_ACL0 ,KC_ACL1 ,KC_ACL2 ,_______ ,_______ ,                                     KC_CALC ,KC_NUM  ,KC_EQL  ,KC_PSLS ,KC_PAST ,KC_VOLU ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PMNS ,KC_VOLD ,
        KC_CAPS ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PPLS ,KC_MUTE ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P1   ,KC_P2   ,KC_P3   ,KC_EQL  ,_______ ,
                 KC_INS  ,_______ ,_______ ,_______ ,                                                       KC_P0   ,KC_P0   ,KC_PDOT ,KC_PENT ,
                                                             _______ ,_______ ,     _______ ,_______ ,
                                                    _______ ,_______ ,_______ ,     _______ ,_______ ,_______ ,
                                                                      _______ ,     _______ ,
                                              _______ ,                                                    _______ ,
                                       _______ ,                                                                     _______
    ),
    [_Def_Fn] = LAYOUT_ortho_6x6_split(
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                     KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,
        _______ ,_______ ,KC_MS_U ,KC_WH_U ,KC_BTN4 ,KC_BTN5 ,                                     _______ ,KC_PGUP ,KC_UP   ,KC_LPRN ,KC_RPRN ,KC_F12  ,
        _______ ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_BTN1 ,KC_BTN3 ,                                     KC_HOME ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_END  ,KC_F13  ,
        _______ ,KC_WH_L ,KC_WH_R ,KC_WH_D ,KC_BTN2 ,_______ ,                                     _______ ,KC_PGDN ,_______ ,_______ ,_______ ,_______ ,
                 _______ ,_______ ,_______ ,_______ ,                                                       _______ ,_______ ,_______ ,_______ ,
                                                             _______ ,_______ ,     _______ ,_______ ,
                                                    _______ ,_______ ,_______ ,     _______ ,_______ ,_______ ,
                                                                      _______ ,     _______ ,
                                              _______ ,                                                    _______ ,
                                       _______ ,                                                                     _______
    ),
    [_Mac] = LAYOUT_ortho_6x6_split(
        KC_EQL  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                     KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
        KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                                     KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_BSLS ,
        KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
        KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                     KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                 KC_ESC  ,KC_GRV  ,KC_LBRC ,KC_RBRC ,                                                       KC_LEFT ,KC_UP   ,KC_DOWN ,KC_RGHT ,
                                                             KC_LCMD ,KC_LCTL ,     KC_RALT ,KC_RCMD ,
                                                    KC_BSPC ,KC_DEL  ,KC_HOME ,     KC_PGUP ,KC_ENT  ,KC_SPC ,
                                                                      KC_END  ,     KC_PGDN ,
                                               MO(4)  ,                                                     MO(4)  ,
                                        MO(5)  ,                                                                  MO(5)
    ),
    [_Mac_Kp] = LAYOUT_ortho_6x6_split(
        DF(_Def),KC_ACL0 ,KC_ACL1 ,KC_ACL2 ,_______ ,_______ ,                                     _______ ,KC_NUM  ,KC_PEQL ,KC_PSLS ,KC_PAST ,KC_VOLU ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PMNS ,KC_VOLD ,
        KC_CAPS ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PPLS ,KC_MUTE ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PEQL ,_______ ,
                 KC_INS  ,_______ ,_______ ,_______ ,                                                       _______ ,_______ ,KC_PDOT ,KC_PENT ,
                                                             _______ ,_______ ,     _______ ,_______ ,
                                                    _______ ,_______ ,_______ ,     _______ ,_______ ,KC_P0   ,
                                                                      _______ ,     _______ ,
                                              _______ ,                                                    _______ ,
                                       _______ ,                                                                     _______
    ),
    [_Mac_Fn] = LAYOUT_ortho_6x6_split(
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                     KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,
        _______ ,_______ ,KC_MS_U ,KC_WH_U ,KC_BTN4 ,KC_BTN5 ,                                     _______ ,KC_PGUP ,KC_UP   ,KC_LPRN ,KC_RPRN ,KC_F12  ,
        _______ ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_BTN1 ,KC_BTN3 ,                                     MC_HOME ,KC_LEFT ,KC_DOWN ,KC_RGHT ,MC_END  ,KC_F13  ,
        _______ ,KC_WH_L ,KC_WH_R ,KC_WH_D ,KC_BTN2 ,_______ ,                                     _______ ,KC_PGDN ,_______ ,_______ ,_______ ,_______ ,
                 _______ ,_______ ,_______ ,_______ ,                                                       _______ ,_______ ,_______ ,_______ ,
                                                             _______ ,_______ ,     _______ ,_______ ,
                                                    _______ ,_______ ,_______ ,     _______ ,_______ ,_______ ,
                                                                      _______ ,     _______ ,
                                              _______ ,                                                    _______ ,
                                       _______ ,                                                                     _______
    )
};

/* TRANSPARENT
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                 _______ ,_______ ,_______ ,_______ ,                                                       _______ ,_______ ,_______ ,_______ ,
                                                             _______ ,_______ ,     _______ ,_______ ,
                                                    _______ ,_______ ,_______ ,     _______ ,_______ ,_______ ,
                                                                      _______ ,     _______ ,
                                              _______ ,                                                    _______ ,
                                       _______ ,                                                                     _______
*/