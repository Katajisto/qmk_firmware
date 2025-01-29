#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_LAYER0] = LAYOUT(KC_QUOT, KC_COMMA, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L,
                    LCTL_T(KC_A), LALT_T(KC_O), LSFT_T(KC_E), LGUI_T(KC_U), KC_I, KC_D, RGUI_T(KC_H), RSFT_T(KC_T), RALT_T(KC_N), RCTL_T(KC_S),
                    KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z,
                    KC_SPC, KC_ENT, MO(_LAYER2), MO(_LAYER1)),
 [_LAYER1] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
                    KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_HOME, KC_END, KC_RGUI, KC_RSFT, KC_RALT, KC_RCTL,
                    KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, KC_GRV, KC_BSLS, KC_RBRC, KC_MINS, KC_EQL, KC_TRNS,
                    KC_BSPC, KC_ESC, KC_TRNS, KC_TRNS),
 [_LAYER2] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
                    KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_F11, KC_F12, KC_RGUI, KC_RSFT, KC_RALT, KC_RCTL,
                    KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, KC_GRV, KC_BSLS, KC_RBRC, KC_MINS, KC_EQL, KC_TRNS,
                    KC_BSPC, KC_TAB, KC_TRNS, KC_TRNS)
};
