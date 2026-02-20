#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(1),                                          CW_TOGG,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           MO(6),          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           ALL_T(KC_GRAVE),                                KC_TILD,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    KC_BSPC,        MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_R),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_T),LT(3,KC_G),     MEH_T(KC_MINUS),                                                                KC_EQUAL,       KC_M,           MT(MOD_RGUI, KC_N),MT(MOD_RALT, KC_E),MT(MOD_RCTL, KC_I),MT(MOD_RSFT, KC_O),KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           LT(5,KC_D),     KC_V,                                           KC_K,           LT(2,KC_H),     KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_ESCAPE,      MO(3),                                                                                                          MO(2),          KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  TT(4),          
    KC_SPACE,       KC_BSPC,        TT(7),                          KC_TAB,         KC_DELETE,      KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_UNDS,                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_MINUS,       KC_PLUS,        KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_AMPR,        KC_ASTR,        KC_SCLN,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_RCBR,        KC_LCBR,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,                                  LCTL(KC_P),     KC_PGDN,        KC_PAGE_UP,     LCTL(KC_N),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MOON_LED_LEVEL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT,                                                                 MT(MOD_LSFT, KC_LBRC),KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NUM,         KC_TAB,         KC_KP_ASTERISK, KC_KP_SLASH,    KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_TRANSPARENT, KC_F20,                                         KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TAB,         KC_KP_0,        KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI,        RGB_HUD,        RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAI,        RGB_VAD,        TOGGLE_LAYER_COLOR,RGB_TOG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SAI,        RGB_SAD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SYSTEM_POWER,KC_SYSTEM_SLEEP,KC_SYSTEM_WAKE, KC_TRANSPARENT, KC_TRANSPARENT, AU_TOGG,                                                                                                        MU_NEXT,        RGB_SPI,        RGB_SPD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, MU_TOGG
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALL_T(KC_GRAVE):
            return TAPPING_TERM + 120;
        case MT(MOD_LSFT, KC_A):
            return TAPPING_TERM + 20;
        case MT(MOD_LCTL, KC_R):
            return TAPPING_TERM + 120;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 120;
        case MT(MOD_LGUI, KC_T):
            return TAPPING_TERM + 120;
        case LT(3,KC_G):
            return TAPPING_TERM + 120;
        case MEH_T(KC_MINUS):
            return TAPPING_TERM + 120;
        case LT(5,KC_D):
            return TAPPING_TERM + 120;
        case KC_M:
            return TAPPING_TERM + 120;
        case MT(MOD_RGUI, KC_N):
            return TAPPING_TERM + 120;
        case MT(MOD_RALT, KC_E):
            return TAPPING_TERM + 120;
        case MT(MOD_RCTL, KC_I):
            return TAPPING_TERM + 120;
        case MT(MOD_RSFT, KC_O):
            return TAPPING_TERM + 20;
        case LT(2,KC_H):
            return TAPPING_TERM + 120;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255} },

    [1] = { {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255}, {213,255,255} },

    [2] = { {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224} },

    [3] = { {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {0,183,238}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {163,224,224}, {0,204,255}, {0,183,237}, {0,183,237}, {163,224,224}, {163,224,224}, {0,183,238}, {0,183,238}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,183,238}, {0,204,255}, {163,224,224}, {163,224,224}, {0,204,255}, {0,183,237}, {0,204,255}, {163,224,224}, {163,224,224}, {163,224,224}, {0,183,238}, {0,183,238}, {0,183,238}, {163,224,224} },

    [4] = { {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {32,255,234}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {32,255,234}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {0,204,255}, {32,255,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {233,218,217}, {0,0,255}, {0,0,0}, {0,0,0}, {205,255,255}, {233,218,217}, {0,0,204}, {0,0,0}, {0,0,0}, {205,255,255}, {233,218,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,183,238}, {0,204,255}, {146,224,255}, {0,204,255}, {146,224,255}, {146,224,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,255,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,255,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {0,0,0}, {0,204,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {134,255,213}, {0,0,0}, {0,0,0}, {146,224,255}, {0,0,0}, {0,0,0}, {146,224,255} },

    [7] = { {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {98,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {98,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



