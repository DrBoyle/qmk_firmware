#include QMK_KEYBOARD_H

enum custom_keycodes {
  TEST = SAFE_RANGE,
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
  COMMA,
  SGOOD,
  THANK,
  SUDO,
  //Houdini Macros
  XBBOX,
  YBBOX,
  ZBBOX,
  CHAN,
  ITERAT,
  CENTR,
  //AE Macros
  LOOPO,
  LOOPP,
  WIGGLE,
  OSHOOT,
  BOUNCE,
  //tmux Macros
  TMUX,
  QMK,
  LOBSTER,
  GHOST
};

//qmk vars
char t_ent[] = SS_TAP(X_ENT);

//press a button many times
/*char mpress(char press, int npress){
  for (int a = 0; a == npress; a = a + 1) {
    return press;
  }
}*/

//term vars
char term_clear[] = "clear"SS_TAP(X_ENT);
char fish[] = "fish"SS_TAP(X_ENT);
char ssh_lobster[] = "ssh lobster"SS_TAP(X_ENT);
char bast_nginx[] = "sudo bastille console nginx"SS_TAP(X_ENT);
char bast_ghost[] = "sudo bastille console ghost"SS_TAP(X_ENT);

//dir vars
char qmk_repo[] = "cd ~/repo/qmk_firmware/"SS_TAP(X_ENT);

//file vars
char qmk_km[] = "vim ~/repo/qmk_firmware/keyboards/planck/keymaps/glueuser/keymap.c"SS_TAP(X_ENT);

//git vars
char git_pull[] = "git pull"SS_TAP(X_ENT);

// tmux vars
char tmux_start[] = "tmux"SS_TAP(X_ENT);
char split_h[] = SS_LCTL(SS_TAP(X_A))SS_LSFT(SS_TAP(X_MINS));
char split_v[] = SS_LCTL(SS_TAP(X_A))SS_LSFT(SS_TAP(X_BSLS));
char new_window[] = SS_LCTL(SS_TAP(X_A))SS_TAP(X_C);
char resize_up6[] = SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP)SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP)SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP)SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP)SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP)SS_LCTL(SS_TAP(X_A))SS_TAP(X_UP);
char resize_down6[] = SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN)SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN)SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN)SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN)SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN)SS_LCTL(SS_TAP(X_A))SS_TAP(X_DOWN);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

      case TEST:
          if (record->event.pressed) {
              SEND_STRING("test@gmail.com");
          } else {
          }
      break;

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
	            SEND_STRING("stephen.j.boyle@pm.me");
	        } else {
	        }
	    break;

        case CUTALL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("ax"));
            }
        break;

        case COPYALL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("ac"));
            }
        break;

	    case PASTEALL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("av"));
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

        case SGOOD:
	        if (record->event.pressed) {
	            SEND_STRING("Sounds good. Thanks!");
	        } else {
	        }
	    break;

        case THANK:
	        if (record->event.pressed) {
	            SEND_STRING("Thanks!");
	        } else {
	        }
	    break;

        case SUDO:
	        if (record->event.pressed) {
	            SEND_STRING("sudo ");
	        } else {
	        }
	    break;

        //Houdini Macros

        case XBBOX:
	        if (record->event.pressed) {
	            SEND_STRING("bbox(\"\", D_XSIZE)"SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)"../");
	        } else {
	        }
	    break;

        case YBBOX:
	        if (record->event.pressed) {
	            SEND_STRING("bbox(\"\", D_YSIZE)"SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)"../");
	        } else {
	        }
	    break;

        case ZBBOX:
	        if (record->event.pressed) {
	            SEND_STRING("bbox(\"\", D_ZSIZE)"SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)SS_TAP(X_LEFT)"../");
	        } else {
	        }
	    break;

        case CHAN:
	        if (record->event.pressed) {
	            SEND_STRING("ch(\"\")"SS_TAP(X_LEFT)SS_TAP(X_LEFT)"../");
	        } else {
	        }
	    break;

        case ITERAT:
          if (record->event.pressed) {
              SEND_STRING("fit(rand(detail(\"../foreach_begin1_metadata1/\", \"iteration\", 0)*9), 0, 1, 0, .5)");
          } else {
          }
      break;

        case CENTR:
          if (record->event.pressed) {
              SEND_STRING("centroid(\"\")"SS_TAP(X_LEFT)SS_TAP(X_LEFT)"../");
          } else {
          }
      break;

        //AE Macros

        case LOOPO:
	        if (record->event.pressed) {
	            SEND_STRING("loopOut()"SS_TAP(X_LEFT));
	        } else {
	        }
	    break;

        case LOOPP:
	        if (record->event.pressed) {
	            SEND_STRING("loopOut(type=\"pingpong\")");
	        } else {
	        }
	    break;

        case WIGGLE:
	        if (record->event.pressed) {
	            SEND_STRING("wiggle(9, 20)"SS_TAP(X_LEFT));
	        } else {
	        }
	    break;

        case OSHOOT:
	        if (record->event.pressed) {
	            SEND_STRING("freq = 3;"SS_TAP(X_ENT)"decay = 8;"SS_TAP(X_ENT)"strength = 1;"SS_TAP(X_ENT)SS_TAP(X_ENT)"n = 0;"SS_TAP(X_ENT)"if (numKeys > 0){"SS_TAP(X_ENT)"n = nearestKey(time).index;"SS_TAP(X_ENT)"if (key(n).time > time) n--;"SS_TAP(X_ENT)"}"SS_TAP(X_ENT)"if (n > 0){"SS_TAP(X_ENT)"t = time - key(n).time;"SS_TAP(X_ENT)"amp = velocityAtTime(key(n).time - .001)*strength;"SS_TAP(X_ENT)"w = freq*Math.PI*2;"SS_TAP(X_ENT)"value + amp*(Math.sin(t*w)/Math.exp(decay*t)/w);"SS_TAP(X_ENT)"}else"SS_TAP(X_ENT)"value"SS_TAP(X_RGHT)SS_TAP(X_RGHT)SS_TAP(X_BSPC));
	        } else {
	        }
	    break;

        case BOUNCE:
	        if (record->event.pressed) {
	            SEND_STRING("e = .7;"SS_TAP(X_ENT)"g = 5000;"SS_TAP(X_ENT)"nMax = 9;"SS_TAP(X_ENT)SS_TAP(X_ENT)"n = 0;"SS_TAP(X_ENT)"if (numKeys > 0){"SS_TAP(X_ENT)"n = nearestKey(time).index;"SS_TAP(X_ENT)"if (key(n).time > time) n--;"SS_TAP(X_ENT)"}"SS_TAP(X_ENT)"if (n > 0){"SS_TAP(X_ENT)"t = time - key(n).time;"SS_TAP(X_ENT)"v = -velocityAtTime(key(n).time - .001)*e;"SS_TAP(X_ENT)"vl = length(v);"SS_TAP(X_ENT)"if (value instanceof Array){"SS_TAP(X_ENT)"vu = (vl > 0) ? normalize(v) : [0,0,0];"SS_TAP(X_ENT)"}else{"SS_TAP(X_ENT)"vu = (v < 0) ? -1 : 1;"SS_TAP(X_ENT)"}"SS_TAP(X_ENT)SS_TAP(X_TAB)"tCur = 0;"SS_TAP(X_ENT)"segDur = 2*vl/g;"SS_TAP(X_ENT)"tNext = segDur;"SS_TAP(X_ENT)"nb = 1;"SS_TAP(X_ENT)"while (tNext < t && nb <= nMax){"SS_TAP(X_ENT)"vl *= e;"SS_TAP(X_ENT)"segDur *= e;"SS_TAP(X_ENT)"tCur = tNext;"SS_TAP(X_ENT)"tNext += segDur;"SS_TAP(X_ENT)"nb++"SS_TAP(X_ENT)"}"SS_TAP(X_ENT)"if(nb <= nMax){"SS_TAP(X_ENT)"delta = t - tCur;"SS_TAP(X_ENT)"value +  vu*delta*(vl - g*delta/2);"SS_TAP(X_ENT)"}else{"SS_TAP(X_ENT)"value"SS_TAP(X_ENT)"}"SS_TAP(X_ENT)"}else"SS_TAP(X_ENT)"value"SS_TAP(X_RGHT)SS_TAP(X_DOWN)SS_TAP(X_RGHT)SS_TAP(X_RGHT)SS_TAP(X_BSPC)SS_TAP(X_BSPC)SS_TAP(X_BSPC)SS_TAP(X_BSPC)SS_TAP(X_BSPC)SS_TAP(X_BSPC));
	        } else {
	        }
	    break;

        //tmux macros
        case TMUX:
	        if (record->event.pressed) {
                SEND_STRING(tmux_start);
	        } else {
	        }
	    break;

        case QMK:
	        if (record->event.pressed) {
                SEND_STRING(new_window);
                SEND_STRING(qmk_repo);
                SEND_STRING(git_pull);
                SEND_STRING(qmk_km);
	        } else {
	        }
	    break;


        case LOBSTER:
	        if (record->event.pressed) {
                SEND_STRING(ssh_lobster);
                SEND_STRING(tmux_start);
	        } else {
	        }
	    break;


        case GHOST:
	        if (record->event.pressed) {
                SEND_STRING(new_window);
                SEND_STRING(bast_ghost);
                SEND_STRING("cd ~/ghost");
                SEND_STRING(t_ent);
                SEND_STRING(term_clear);
            } else {
	        }
	    break;

	}
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  //QWERTY Standard
  [0] = LAYOUT_ortho_4x12(

    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,     KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,   KC_G,     KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,     KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_SFTENT,
    MO(8),    KC_LCTL,  KC_LALT,  KC_LGUI,  MO(4),  KC_SPC,   KC_SPC,  MO(5),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT

  ),

  //QWERTY Mac //reversed super
  [1] = LAYOUT_ortho_4x12(

    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,     KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,   KC_G,     KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,     KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_SFTENT,
    MO(8),    KC_LGUI,  KC_LALT,  KC_LCTL,  MO(4),  KC_SPC,   KC_SPC,  MO(5),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT

  ),

  //Colemac
  [2] = LAYOUT_ortho_4x12(

    KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,   KC_G,     KC_J,    KC_L,   KC_U,     KC_Y,     KC_SCLN,  KC_BSPC,
    KC_ESC,   KC_A,     KC_R,     KC_S,     KC_T,   KC_D,     KC_H,    KC_N,   KC_E,     KC_I,     KC_O,     KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,     KC_K,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_SFTENT,
    MO(8),    KC_LCTL,  KC_LALT,  KC_LGUI,  MO(4),  KC_SPC,   KC_SPC,  MO(5),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT

  ),

  //Dvorak
  [3] = LAYOUT_ortho_4x12(

    KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,   KC_Y,     KC_F,    KC_G,   KC_C,     KC_R,     KC_L,   KC_BSPC,
    KC_ESC,   KC_A,     KC_O,     KC_E,     KC_U,   KC_I,     KC_D,    KC_H,   KC_T,     KC_N,     KC_S,   KC_SLSH,
    KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,   KC_X,     KC_B,    KC_M,   KC_W,     KC_V,     KC_Z,   KC_SFTENT,
    MO(8),    KC_LCTL,  KC_LALT,  KC_LGUI,  MO(4),  KC_SPC,   KC_SPC,  MO(5),  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT

  ),

  //Lower //Symbols
  [4] = LAYOUT_ortho_4x12(

    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_PIPE,
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_LCBR,  KC_RCBR,  KC_LBRC,  KC_RBRC,  KC_DQUO,
    KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_BSLS,  KC_LT,    KC_GT,    KC_SLSH,  KC_SFTENT,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(6),    KC_END,   KC_PGDN,  KC_PGUP,  KC_HOME

  ),

  //Raise  //Numbers
  [5] = LAYOUT_ortho_4x12(

    KC_GRV,   KC_BRID,  KC_BRIU,  KC_MRWD,  KC_MPLY,   KC_MFFD,   KC_MSTP,  KC_7,     KC_8,   KC_9,    KC_MINS,  KC_UNDS,
    KC_INS,   EMAIL_A,  NAME_F,   NAME_L,   CITY,      GMAIL,     HTTPS,    KC_4,     KC_5,   KC_6,    KC_PPLS,  KC_DEL,
    KC_TRNS,  EMAIL_B,  CUTALL,   COPYALL,  PASTEALL,  P_QUOTE,   COMMA,    KC_1,     KC_2,   KC_3,    KC_SLSH,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(6),     KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_0,   KC_DOT,  KC_PAST,  KC_EQL

  ),

  //Both //Mouse
  [6] = LAYOUT_ortho_4x12(

    MO(7),    DM_RSTP,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BTN1,  KC_BTN2,  KC_BTN3,  KC_VOLU,  TG(6),
    KC_TRNS,  DM_REC1,  DM_PLY1,  KC_NO,    KC_NO,    KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_VOLD,  KC_NO,
    KC_TRNS,  DM_REC2,  DM_PLY2,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ACL0,  KC_ACL1,  KC_ACL2,  KC_MUTE,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LGUI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS

  ),

  //System
  [7] = LAYOUT_ortho_4x12(

    KC_NO,    DF(0),    DF(1),    DF(2),    DF(3),    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,   KC_NO,    RESET,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    AU_TOG,   CK_TOGG,   KC_NO,   KC_NO,    DEBUG,
    KC_NO,    MUV_DE,   MUV_IN,   MI_ON,    MI_OFF,   KC_NO,    KC_NO,    MU_TOG,   CK_DOWN,   CK_UP,   MU_MOD,   TERM_ON,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,   KC_NO,    TERM_OFF

  ),

  //Macros
  [8] = LAYOUT_ortho_4x12(

    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    OSL(11),  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    OSL(10),  SUDO,     KC_NO,    KC_NO,    SGOOD,    OSL(9),   KC_NO,    THANK,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

  ),

  //Macros //Houdini
  [9] = LAYOUT_ortho_4x12(

    KC_NO,    KC_NO,    KC_NO,    KC_NO,    CENTR,    KC_NO,    YBBOX,    KC_NO,    ITERAT,   KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    ZBBOX,    XBBOX,    CHAN,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

  ),

  //Macros //AE
  [10] = LAYOUT_ortho_4x12(

    KC_NO,    KC_NO,    WIGGLE,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    OSHOOT,   LOOPP,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    LOOPO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    BOUNCE,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

  ),

  //Macros //tmux
  [11] = LAYOUT_ortho_4x12(

    KC_NO,    QMK,      KC_NO,    KC_NO,    KC_NO,    TMUX,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    GHOST,    KC_NO,    KC_NO,    KC_NO,    LOBSTER,  KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

  )

  /*
  //BLANCK
  [0] = LAYOUT_ortho_4x12(

    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO

  )
  */
};
