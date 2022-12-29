#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT_ortho(
                  KC_ESC, KC_1, KC_2, KC_3, KC_4,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R,
		KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, 
		KC_LCTL, KC_Y, KC_X, KC_C, KC_V, KC_B, 
		KC_DOT, KC_LALT, KC_SLSH, KC_SPC, KC_BSLS
				 )
};


