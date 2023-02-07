#include QMK_KEYBOARD_H

enum Kon_Tur_Layers {
    _Def
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_Def] = LAYOUT_ortho_6x6_split(
        KC_EQL  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                     KC_6    ,KC_7    ,KC_8     ,KC_9    ,KC_0    ,KC_MINS ,
        KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                                     KC_Y    ,KC_U    ,KC_I     ,KC_O    ,KC_P    ,KC_BSLS ,
        KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K     ,KC_L    ,KC_SCLN ,KC_QUOT ,
        KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                     KC_N    ,KC_M    ,KC_COMM  ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                 KC_GRV  ,KC_LWIN ,KC_LBRC ,KC_RBRC ,                                                       KC_LEFT ,KC_UP    ,KC_DOWN ,KC_RGHT ,
                                                             KC_LCTL ,KC_LALT ,     KC_RALT ,KC_RCTL ,
                                                    KC_BSPC ,KC_DEL  ,KC_HOME ,     KC_PGUP ,KC_ENT  ,KC_SPC,
                                                                      KC_END  ,     KC_PGDN ,
                                               KC_CAPS,                                                   KC_NUM,
                                        KC_LSCR,                                                                KC_MUTE
    )
};
