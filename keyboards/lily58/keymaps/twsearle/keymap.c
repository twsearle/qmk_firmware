#include QMK_KEYBOARD_H

#include "keymap_uk.h"

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |RShift|
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   #  |  /   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   UK_1,   UK_2,    UK_3,    UK_4,    UK_5,                     UK_6,    UK_7,    UK_8,    UK_9,    UK_0,    UK_MINS,
  KC_TAB,   UK_Q,   UK_W,    UK_E,    UK_R,    UK_T,                     UK_Y,    UK_U,    UK_I,    UK_O,    UK_P,    UK_QUOT,
  KC_LSFT,  UK_A,   UK_S,    UK_D,    UK_F,    UK_G,                     UK_H,    UK_J,    UK_K,    UK_L,    UK_SCLN, KC_RSFT,
  KC_LCTL,  UK_Z,   UK_X,    UK_C,    UK_V,    UK_B, UK_LBRC,  UK_RBRC,  UK_N,    UK_M,    UK_COMM, UK_DOT,  UK_HASH, UK_SLSH,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_RALT
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   "  |   £  |   $  |   %  |                    |SCROLU| MLCK | MRCK |      |   +  |   _  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------.    ,-------|MLEFT |MDOWN | MUP  |MRIGHT|   #  |RShift|
 * |------+------+------+------+------+------|   {   |    |    }  |------+------+------+------+------+------|
 * |   \  |      |      |      |      |      |-------|    |-------|SCROLD|   _  |   @  |      |   ~  |   /  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  UK_GRV, UK_EXLM, UK_DQUO, UK_PND,  UK_DLR,  UK_PERC,                   UK_CIRC, UK_AMPR, UK_ASTR, UK_LPRN, UK_RPRN, UK_UNDS,
  KC_LSFT, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, KC_RSFT,
  UK_BSLS, _______, _______, _______, _______, _______, UK_LCBR, UK_RCBR, XXXXXXX, UK_UNDS, UK_PLUS, UK_AT,  UK_TILD, UK_SLSH,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/*
 * RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   7  |   8  |   9  |   /  |   -  |                    | BKWD | PLAY | FWRD |  INS | DEL  | PGUP |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   4  |   5  |   6  |   *  |      |                    | WBAK | WFWD |   =  | PSCR | HOME | PGDN |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   1  |   2  |   3  |   +  |      |-------.    ,-------| WSCH |  UP  |   -  |   #  | END  |RShift|
 * |------+------+------+------+------+------|   [   |    |   ]   |------+------+------+------+------+------|
 * |      |      |   0  |   .  |   =  | CALC |-------|    |-------| LEFT | DOWN | RIGHT|   `  |      |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_RAISE] = LAYOUT(
  KC_ESC,  KC_P7,   KC_P8, KC_P9,   KC_PSLS, KC_PMNS,                   KC_MRWD, KC_MPLY, KC_MFFD, KC_INS,  KC_DEL,  KC_PGUP,
  KC_TAB,  KC_P4,   KC_P5, KC_P6,   KC_PAST, _______,                   KC_WBAK, KC_WFWD, UK_EQL,  KC_PSCR, KC_HOME, KC_PGDN,
  KC_LSFT, KC_P1,   KC_P2, KC_P3,   KC_PPLS, _______,                   KC_WSCH, KC_UP,   UK_MINS, UK_HASH, KC_END,  KC_RSFT,
  _______, _______, KC_P0, KC_PDOT, KC_PEQL, KC_CALC, UK_LCBR, UK_RCBR, KC_LEFT, KC_DOWN, KC_RGHT, UK_GRV,  _______, UK_BSLS,
                           _______, _______, _______, _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
