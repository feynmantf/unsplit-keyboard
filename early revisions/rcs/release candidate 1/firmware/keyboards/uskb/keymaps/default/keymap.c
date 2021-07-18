/* Copyright 2021 feynmantf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_F13,    KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_F14,    KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_F15,    KC_CAPS,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,               KC_AUDIO_MUTE,
        KC_F16,    KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_LGUI,
        KC_F17,    KC_LCTL,              KC_LALT,                        KC_SPC,                             KC_RALT, MO(_FN),   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT(
        _______,   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______,   _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,   _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______,
        _______,   _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RESET,
        _______,   _______,              _______,                       _______,                             _______, _______, _______,   _______, _______, _______
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
    }
    return true;
}

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;  // flips the display 270 degrees
}

void oled_task_user(void) {
  // Host Keyboard Layer Status
  oled_write_P(PSTR("LAYER"), false);
  switch (biton32(layer_state)) {
    case _QWERTY:
      oled_write_ln_P(PSTR("def:*"), false);
      oled_write_ln_P(PSTR("fnc:."), false);
      break;
    case _FN:
      oled_write_ln_P(PSTR("def:."), false);
      oled_write_ln_P(PSTR("fnc:*"), false);
      break;
    default:
      // Or use the write_ln shortcut over adding '\n' to the end of your string
      oled_write_ln_P(PSTR("und"), false);
      oled_write_ln_P(PSTR("und"), false);
  }
  
  oled_write_ln_P(PSTR(""), false);
  
  // Host Keyboard LED Status
  uint8_t led_usb_state = host_keyboard_leds();
  oled_write_P(PSTR("-----"), false);
  oled_write_P(PSTR("STATS"), false);
  oled_write_P(led_usb_state & (1<<USB_LED_NUM_LOCK) ? PSTR("num:*") : PSTR("num:."), false);
  oled_write_P(led_usb_state & (1<<USB_LED_CAPS_LOCK) ? PSTR("cap:*") : PSTR("cap:."), false);
  oled_write_P(led_usb_state & (1<<USB_LED_SCROLL_LOCK) ? PSTR("scr:*") : PSTR("scr:."), false);
}

#endif