#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_RAISE, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC          ,   KC_1    , KC_2, KC_3, KC_4, KC_5,                                        KC_6   , KC_7     , KC_8     ,  KC_9    , KC_0      ,  KC_1            ,
        KC_1            ,   KC_Q    , KC_W, KC_E, KC_R, KC_T,                                        KC_Y   , KC_U     , KC_I     ,  KC_O    , KC_P      ,  KC_2            ,
        LCTL_T(KC_ESC)  ,   KC_A    , KC_S, KC_D, KC_F, KC_G,                                        KC_H   , KC_J     , KC_K     ,  KC_L    , KC_QUOTE  ,  RCTL_T(KC_ESC) ,
        KC_LSPO         ,   KC_Z    , KC_X, KC_C, KC_V, KC_B,                                        KC_N   , KC_M     , KC_COMM  ,  KC_DOT  , KC_SLASH  ,  KC_RSPC         , 
        KC_LALT         ,   KC_LCMD , KC_6, KC_7, KC_8,                                                       KC_PGUP  , KC_PGDN  ,  KC_HOME , KC_END    ,  KC_ESC          ,
                                                        RAISE , KC_2  ,                     KC_1, RAISE,
                                                                KC_3  ,                     KC_3,
	                                        RAISE , KC_SPC, KC_TAB,                     KC_DELETE, KC_BSPC, KC_ENT
                                                                        
    ),
    // [_LOWER] = LAYOUT_6x6(
    //     _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
    //     _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_UP  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_PAST,KC_F12 ,
    //     _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                       KC_DOWN,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,_______,
    //     _______,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                                       KC_AMPR,KC_P1  ,KC_P2  ,KC_P3  ,KC_PSLS,_______,
    //     RESET  ,_______,_______,_______,_______,_______,                                       _______,_______,KC_PDOT,KC_P0  ,KC_PEQL,_______,
    //                                             _______,_______,_______,       _______,_______,_______,
    //                                                             _______,       _______,
    //                                                             _______,       _______
    // 
    [_RAISE] = LAYOUT(
	KC_F1   ,   KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,                         KC_F7     , KC_F8    , KC_F9    ,  KC_F10    , KC_F11    , KC_F12,
        _______ ,   KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6      , KC_7     , KC_8     ,  KC_9      , KC_0      ,  _______,
        _______ ,   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,                         KC_LEFT   , KC_DOWN  , KC_UP    ,  KC_RIGHT  , KC_SCLN   ,  _______,
        _______ ,   _______, _______, KC_BTN2, KC_BTN1, _______,                         KC_BSLASH , KC_LBRC  , KC_RBRC  ,  KC_MINUS  , KC_EQL    ,  _______,
        _______ ,   _______, _______, _______, _______,                                              _______  , _______  ,  _______   , _______   ,  _______,
                                               _______, _______ ,             _______, _______,
                                                        _______ ,             _______,
                                      _______, _______, _______ ,             _______, _______, _______
    ) 
};
