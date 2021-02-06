#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FNB  1
#define _MAC  2
#define _FNM  3
#define _GAME 4
#define _FNG  5

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define TM_PREF LCTL(KC_B)
#define FZF_CD  LALT(KC_C)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  _______, KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, \
    TM_PREF, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_PGUP, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  MO(_FNB),          KC_SPC,  _______, KC_RALT, KC_RGUI, KC_LCTL, MO(_FNB), KC_PGDN
  ),

  [_FNB] = LAYOUT(
    KC_GRAVE,KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______,  KC_DELETE, \
    _______, _______, KC_UP,   _______, _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, DF(_GAME),KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,  KC_INS, \
    _______, _______, _______, _______, _______, DF(_BASE),_______, DF(_MAC),_______, _______, _______, _______,  KC_HOME, \
    KC_TILD, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,  KC_END
  ),


  [_MAC] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  _______, KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, \
    TM_PREF, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_PGUP, \
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  MO(_FNM),          KC_SPC,  _______, KC_RALT, KC_RGUI, KC_LCTL, MO(_FNM), KC_PGDN
  ),

  [_FNM] = LAYOUT(
    KC_GRAVE,KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______,  KC_DELETE, \
    _______, _______, KC_UP,   _______, _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, DF(_GAME),KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,  KC_INS, \
    _______, _______, _______, FZF_CD , _______, DF(_BASE),_______, DF(_MAC),_______, _______, _______, _______,  KC_HOME, \
    KC_TILD, _______, _______, KC_MPLY, _______,           KC_MPLY, _______, _______, _______, _______, _______,  KC_END
  ),


  [_GAME] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  _______, KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_PGUP, \
    KC_LCTL, KC_F13,  KC_LALT, KC_SPC,  MO(_FNG),          KC_SPC,  _______, KC_RGUI, KC_RALT, KC_LCTL, MO(_FNG), KC_PGDN
  ),

  [_FNG] = LAYOUT(
    KC_GRAVE,KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______,  KC_DELETE, \
    _______, _______, KC_UP,   _______, _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, DF(_GAME),KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,  KC_INS, \
    _______, _______, _______, _______, _______, DF(_BASE),_______, DF(_MAC),_______, _______, _______, _______,  KC_HOME, \
    KC_TILD, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,  KC_END
  )
};
