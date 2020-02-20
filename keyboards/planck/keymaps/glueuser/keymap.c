#include QMK_KEYBOARD_H

enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  EMAIL_A,
	NAME_F,
	NAME_L,
	CITY,
  GMAIL,
  HTTPS,
  EMAIL_B,
  CUTALL,
  COPYALL,
  PASTEALL,
  P_QUOTE,
  COMMA
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case EMAIL_A:
      if (record->event.pressed) {
        SEND_STRING("boyle1984@gmail.com");
      } else {
      }
    break;

		case NAME_F:
			if (record->event.pressed) {
				SEND_STRING("Stephen");
			} else {
			}
		break;

		case NAME_L:
			if (record->event.pressed) {
				SEND_STRING("Boyle");
			} else {
			}
		break;

		case CITY:
			if (record->event.pressed) {
				SEND_STRING("Los Angeles");
			} else {
			}
		break;

    case GMAIL:
			if (record->event.pressed) {
				SEND_STRING("@gmail.com");
			} else {
			}
		break;

    case HTTPS:
			if (record->event.pressed) {
				SEND_STRING("https://");
			} else {
			}
		break;

    case EMAIL_B:
			if (record->event.pressed) {
				SEND_STRING("dr.boyle@pm.me");
			} else {
			}
		break;

    case CUTALL:
      if (record->event.pressed) {
                SEND_STRING(SS_LCTL("ax")); // selects all and copies
      }
    break;

    case COPYALL:
      if (record->event.pressed) {
                SEND_STRING(SS_LCTL("ac")); // selects all and copies
      }
    break;

		case PASTEALL:
      if (record->event.pressed) {
                SEND_STRING(SS_LCTL("av")); // selects all and copies
      }
    break;

    case P_QUOTE:
			if (record->event.pressed) {
				SEND_STRING("("SS_LSFT("'")SS_LSFT("'")")"SS_TAP(X_LEFT)SS_TAP(X_LEFT));
			} else {
			}
		break;

    case COMMA:
			if (record->event.pressed) {
				SEND_STRING(", ");
			} else {
			}
		break;

	}
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT, MO(5), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT, MO(5), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[2] = LAYOUT_ortho_4x12(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_SFTENT, MO(5), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[3] = LAYOUT_ortho_4x12(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_DQUO, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSLS, KC_LT, KC_GT, KC_SLSH, KC_SFTENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_END, KC_PGDN, KC_PGUP, KC_HOME),
	[4] = LAYOUT_ortho_4x12(KC_GRV, KC_BRID, KC_BRIU, KC_MRWD, KC_MPLY, KC_MFFD, KC_MSTP, KC_7, KC_8, KC_9, KC_MINS, KC_UNDS, KC_INS, EMAIL_A, NAME_F, NAME_L, CITY, GMAIL, HTTPS, KC_4, KC_5, KC_6, KC_PPLS, KC_DEL, KC_TRNS, EMAIL_B, CUTALL, COPYALL, PASTEALL, P_QUOTE, COMMA, KC_1, KC_2, KC_3, KC_SLSH, KC_SFTENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_DOT, KC_PAST, KC_EQL),
	[5] = LAYOUT_ortho_4x12(OSL(6), DM_RSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_VOLU, KC_DEL, KC_ESC, DM_REC1, DM_PLY1, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_VOLD, KC_NO, KC_LSFT, DM_REC2, DM_PLY2, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_MUTE, KC_SFTENT, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[6] = LAYOUT_ortho_4x12(KC_TRNS, RESET, DEBUG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL, KC_TRNS, KC_TRNS, MU_MOD, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), TO(5), KC_TRNS, KC_TRNS, MUV_DE, MUV_IN, MU_ON, MU_OFF, MI_ON, MI_OFF, TERM_ON, TERM_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
