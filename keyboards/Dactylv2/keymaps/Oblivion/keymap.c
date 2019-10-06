#include "Dactyl.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;
#define _QWERTY 0
#define _NAVIGATION 1
#define _LOWER 2
#define _RAISE 3
#define _ADJUST 4
enum {
    TD_CPY_PST = 0,
    TD_CMD,
    TD_SLSH,
    TD_VRDSK,
    TD_BRCS
};
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    NAVIGATION,
    LOWER,
    RAISE,
    ADJUST,
};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define KC_CAPW LGUI(LSFT(KC_3))        // Capture whole screen
#define KC_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen
#define KC_SNIP LGUI(LSFT(KC_4))       // Capture portion of screen
#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define KC_X0 MT(MOD_LCTL, KC_ESC)
#define KC_LDWN LOWER               //Numpad
#define KC_LUP RAISE
#define KC_TOGUP TG(4)
#define KC_REST RESET
#define KC_CTL_ESC LCTL_T(KC_ESC)
#define KC_BRCS TD(TD_BRCS)
#define KC_CTLL LCTL(KC_LEFT)
#define KC_CTLR LCTL(KC_RIGHT)
#define KC_NAV TT(_NAVIGATION)
#define KC_EN_NV LT(_NAVIGATION, KC_ENT)
#define KC_LOWER TG(_LOWER)
#define KC_RAISE TG(_RAISE)
#define KC_ADJ MO(_ADJUST)
#define KC_X4 LT(_ADJUST, KC_ENT) //Shift when held enter when pressed
#define KC_X5 LT(RAISE, KC_P0)  //Raise to functions when held P0 when pressed
#define KC_X6 TD(TD_SLSH)               //slash vs backslash
#define KC_X7 TD(TD_CPY_PST)        //single tap is copy double is paste
#define KC_X8 TD(TD_CMD)            //single tap is cmd double is ipconfig


#define KC_X9 RGUI(KC_TAB)  //gui tab to switch desktops
#define KC_X10 TD(TD_VRDSK)


#define KC_XLgn M(1)
#define KC_EMAL M(2)
#define KC_WWWX M(3)
#define KC_NTAB M(4)
#define KC_0CA M(6)
#define KC_PASS M(10)
#define KC_IPCF M(11)
#define KC_OP M(12)
#define KC_OC M(13)
#define KC_OD M(14)
#define KC_TCLK M(15)
#define KC_ESCT MT(MOD_LCTL, KC_ESC)
#define KC_GUIT M(0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-------------------------------------------.           ,-------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  |           |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |  { }   |
 * |--------+------+------+------+------+----- |           |------+------+------+------+------|--------|
 * |Esc/Ctrl|   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+------'           `------+------+------+------+------|--------'
 *    |Lower|   `  |   |  | Left | Right|                         | Down |  Up  |   {  |   }  |Raise|
 *    `---------------------------------'                         '---------------------------------'
 *                                 ,-------------.       ,-------------.
 *                                 |Delete| Ctrl |       | Home | End  |
 *                          ,------|------|------|       |------+------+------.
 *                          |      |      | Alt  |       | PgUp |      |      |
 *                          |Back  | Nav  |------|       |------| Enter| Space|
 *                          |Space |      | GUI  |       | PgDn | Nav  |      |
 *                          `--------------------'       `--------------------'
 */ 
 
        [_QWERTY] = KC_KEYMAP(
// .--------+------+------+------+------+------.           .------+------+------+------+------+--------.
       EQL  ,   1  ,   2  ,   3  ,   4  ,   5  ,               6  ,   7  ,   8  ,   9  ,   0  ,  MINS  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
       TAB  ,   Q  ,   W  ,   E  ,   R  ,   T  ,               Y  ,   U  ,   I  ,   O  ,   P  ,  BRCS  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
     CTL_ESC,   A  ,   S  ,   D  ,   F  ,   G  ,               H  ,   J  ,   K  ,   L  , SCLN ,  QUOT  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
      LSPO  ,   Z  ,   X  ,   C  ,   V  ,   B  ,               N  ,   M  , COMM ,  DOT , SLSH ,  RSPC  ,
// '--.-----+------+------+------+------+------|           |------+------+------+------+------+-----.--'
       LOWER,  GRV , BSLS , LEFT , RIGHT, BSPC ,              SPC , DOWN ,  UP  , LBRC , RBRC ,RAISE,
//    '-----+------+------+------+------+------'           '------+------+------+------+------+-----'
//
//                                 .------+------.       .------+------.
                                      DEL , LCTL ,         HOME ,  END ,
//                          .------+------+------|       |------+------+------.
                                            LALT ,         PGUP ,
//                          |      |      |------|       |------+      |      |
                              BSPC ,  NAV , LGUI ,         PGDN , EN_NV,  SPC
//                          `------+------+------'       `------+------+------'

    ),
    
/* Keymap 1: Navigation layer
 *
 * ,-------------------------------------------.           ,-------------------------------------------.
 * |  F12   |  F1  |  F2  |  F3  |  F4  |  F5  |           |  F6  |  F7  |  F8  |  F9  |  F10 |  F11   |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      | Home |  Up  |  End |      |           |      | Home |  Up  |  End | Bspc |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      | Left | Down | Right|      |           | PgUp | Left | Down | Right|      |  Adj   |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           | PgDn |Delete| CtlL | CtlR |      |        |
 * `--------+------+------+------+------+------'           `------+------+------+------+------|--------'
 *    | Adj |      |      | Home |  End |                         | PgDn | PgUp |      |      | RCtl|
 *    `---------------------------------'                         '---------------------------------'
 *                                 ,-------------.       ,-------------.
 *                                 | Snip |      |       |      |      |
 *                          ,------|------|------|       |------+------+------.
 *                          |      |      |      |       |      |      |      |
 *                          |Delete|      |------|       |------|      |      |
 *                          |      |      |      |       |      |      |      |
 *                          `--------------------'       `--------------------'
 */ 
 
        [_NAVIGATION] = KC_KEYMAP(
// .--------+------+------+------+------+------.           .------+------+------+------+------+--------.
       F12  ,  F1  ,  F2  ,  F3  ,  F4  ,  F5  ,              F6  ,  F7  ,  F8  ,  F9  ,  F10 ,   F11  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      , HOME ,  UP  ,  END ,      ,                  , HOME ,  UP  ,  END , BSPC ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      , LEFT , DOWN , RIGHT,      ,             PGUP , LEFT , DOWN , RIGHT,      ,   ADJ  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,             PGDN ,  DEL , CTLL , CTLR ,      ,        ,
// '--.-----+------+------+------+------+------|           |------+------+------+------+------+-----.--'
        ADJ ,      ,      , HOME ,  END ,      ,                  , PGDN , PGUP ,      ,      , RCTL,
//    '-----+------+------+------+------+------'           '------+------+------+------+------+-----'
//
//                                 .------+------.       .------+------.
                                     SNIP ,      ,              ,      ,
//                          .------+------+------|       |------+------+------.
                                                 ,              ,
//                          |      |      |------|       |------+      |      |
                               DEL ,      ,      ,              ,      ,      
//                          `------+------+------'       `------+------+------'

    ),

/* Keymap 2: Numpad layer
 *
 * ,-------------------------------------------.           ,-------------------------------------------.
 * |        |      |      |      |      |      |           |      | NumLk|   /  |   *  |   -  |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |   7  |   8  |   9  |   +  |    +   |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |   4  |   5  |   6  |   +  |    +   |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |   1  |   2  |   3  | Enter|  Enter |
 * `--------+------+------+------+------+------'           `------+------+------+------+------|--------'
 *    |     |      |      |      |      |                         |   0  |   0  |   .  | Enter|     |
 *    `---------------------------------'                         '---------------------------------'
 *                                 ,-------------.       ,-------------.
 *                                 |      |      |       |      |  Tab |
 *                          ,------|------|------|       |------+------+------.
 *                          |      |      |      |       |      |      |      |
 *                          |      |      |------|       |------|      |      |
 *                          |      |      |      |       |      |      |      |
 *                          `--------------------'       `--------------------'
 */ 
 
        [_RAISE] = KC_KEYMAP(
// .--------+------+------+------+------+------.           .------+------+------+------+------+--------.
            ,      ,      ,      ,      ,      ,                  , NLCK , PSLS , PAST , PMNS ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,  P7  ,  P8  ,  P9  , PPLS ,  PPLS  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,  P4  ,  P5  ,  P6  , PPLS ,  PPLS  ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,  P1  ,  P2  ,  P3  , PENT ,  PENT  ,
// '--.-----+------+------+------+------+------|           |------+------+------+------+------+-----.--'
            ,      ,      ,      ,      ,      ,                  ,  P0  ,  P0  , PDOT , PENT ,     ,
//    '-----+------+------+------+------+------'           '------+------+------+------+------+-----'
//
//                                 .------+------.       .------+------.
                                          ,      ,              ,  TAB ,
//                          .------+------+------|       |------+------+------.
                                                 ,              ,
//                          |      |      |------|       |------+      |      |
                                   ,      ,      ,              ,      ,      
//                          `------+------+------'       `------+------+------'

    ),
    
/* Keymap 3: Media layer
 *
 * ,-------------------------------------------.           ,-------------------------------------------.
 * |        |      |      |      |      |      |           |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      | VolD | Mute | VolU |      |           |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      | Rwnd | Play | FFwd |      |           |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |      |      |      |      |        |
 * `--------+------+------+------+------+------'           `------+------+------+------+------|--------'
 *    |     |      |      |      |      |                         |      |      |      |      |     |
 *    `---------------------------------'                         '---------------------------------'
 *                                 ,-------------.       ,-------------.
 *                                 | Prev | Next |       |      |      |
 *                          ,------|------|------|       |------+------+------.
 *                          |      |      | VolU |       |      |      |      |
 *                          | Play | Mute |------|       |------|      |      |
 *                          |      |      | VolD |       |      |      |      |
 *                          `--------------------'       `--------------------'
 */ 
 
        [_LOWER] = KC_KEYMAP(
// .--------+------+------+------+------+------.           .------+------+------+------+------+--------.
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      , VOLD , MUTE , VOLU ,      ,                  ,      ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      , MRWD , MPLY , MFFD ,      ,                  ,      ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,        ,
// '--.-----+------+------+------+------+------|           |------+------+------+------+------+-----.--'
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,     ,
//    '-----+------+------+------+------+------'           '------+------+------+------+------+-----'
//
//                                 .------+------.       .------+------.
                                     MPRV , MNXT ,              ,      ,
//                          .------+------+------|       |------+------+------.
                                            VOLU ,              ,
//                          |      |      |------|       |------+      |      |
                              MPLY , MUTE , VOLD ,              ,      ,      
//                          `------+------+------'       `------+------+------'

    ),
    
/* Keymap 4: Adjust layer
 *
 * ,-------------------------------------------.           ,-------------------------------------------.
 * |        |      |      |      |      |      |           |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      | Reset|      |           |      | Reset|      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|           |------+------+------+------+------|--------|
 * |        |      |      |      |      |      |           |      |      |      |      |      |        |
 * `--------+------+------+------+------+------'           `------+------+------+------+------|--------'
 *    |     |      |      |      |      |                         |      |      |      |      |     |
 *    `---------------------------------'                         '---------------------------------'
 *                                 ,-------------.       ,-------------.
 *                                 |      |      |       |      |      |
 *                          ,------|------|------|       |------+------+------.
 *                          |      |      |      |       |      |      |      |
 *                          |      |      |------|       |------|      |      |
 *                          |      |      |      |       |      |      |      |
 *                          `--------------------'       `--------------------'
 */ 
 
        [_ADJUST] = KC_KEYMAP(
// .--------+------+------+------+------+------.           .------+------+------+------+------+--------.
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      , REST ,      ,                  , REST ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,        ,
// |--------+------+------+------+------+------|           |------+------+------+------+------+--------|
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,        ,
// '--.-----+------+------+------+------+------|           |------+------+------+------+------+-----.--'
            ,      ,      ,      ,      ,      ,                  ,      ,      ,      ,      ,     ,
//    '-----+------+------+------+------+------'           '------+------+------+------+------+-----'
//
//                                 .------+------.       .------+------.
                                          ,      ,              ,      ,
//                          .------+------+------|       |------+------+------.
                                                 ,              ,
//                          |      |      |------|       |------+      |      |
                                   ,      ,      ,              ,      ,      
//                          `------+------+------'       `------+------+------'

    ),
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    
    switch (id) {
    case 0:
        if (record->event.pressed) {
            return MACRO(D(LGUI), T(TAB), U(LGUI), END);
        }
    case 1:
        if (record->event.pressed) {
        //  SEND_STRING("admin"SS_TAP(X_TAB)"1111"SS_TAP(X_ENTER));
        //return false; break;
            return MACRO(I(10), T(A), T(D), T(M), T(I), T(N), W(75), T(TAB), T(1), T(1),T(1), T(1), T(ENTER), END );
        }
    case 2:
        if (record->event.pressed) {
            SEND_STRING("email");// auto send email
            return false;   break;
        }
    case 3:
        if (record->event.pressed) {
            SEND_STRING("www.support.xerox.com"SS_TAP(X_ENTER));
                        return false;   break;
        }
    case 4:
        if(record->event.pressed) {
            return MACRO(I(10), D(LCTRL), T(T), T(V), T(ENTER), U(LCTRL), END);
        }
        
    case 5:{
            return  MACRO_TAP_HOLD_LAYER(record, MACRO(TYPE(KC_X), END), _LOWER);   
        }
    case 6: {
            if(record->event.pressed) 
            return MACRO(I(10), T(0), T(C), T(TAB), T(TAB), T(A), T(TAB), END);
        }
    case 10: {
        if(record->event.pressed) {
        SEND_STRING(""); //send string
            return false; break;}
    }       
    case 11: {
        if(record->event.pressed) {
            SEND_STRING("ipconfig /all");
                    return false; break;}
    }
    case 12: {
    if(record->event.pressed) 
        return MACRO( I(10),T(TAB), T(O), T(P), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(Z),T(R),T(TAB),T(ENTER), END );
    }   
        case 13: {
    if(record->event.pressed) 
        return MACRO( I(10),T(TAB), T(O), T(T), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(Z),T(R),T(TAB),T(ENTER), END );
    }   
        case 14: {
    if(record->event.pressed) 
        return MACRO( I(10),T(TAB), T(I), T(N), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(I),T(N),T(TAB),T(ENTER), END );
    }   
        case 15: {
    if(record->event.pressed) 
        SEND_STRING("username"SS_TAP(X_TAB)"pass"SS_TAP(X_TAB)SS_TAP(X_ENTER));//allows sending password for things that do NOT need to be secure
        return false; break;
    }   
        break;
    }       
    return MACRO_NONE;
}
//return MACRO_NONE;


void cmd_commands(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        action_macro_play(MACRO(D(LCTRL), T(C), U(LCTRL),END));
    }
    else if (state->count ==2){
        action_macro_play(MACRO(D(LCTRL), T(V), U(LCTRL),END));
    }
    else {
        action_macro_play(MACRO(D(LCTRL), T(A), T(C), U(LCTRL),END));
    }
}


void cmd(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count==1){
        action_macro_play(MACRO(D(LGUI), T(R),W(255), U(LGUI),W(255), T(C), T(M), T(D), T(ENTER),END));
    }
    else if (state->count == 2) {
        action_macro_play(MACRO(D(LGUI), T(R), U(LGUI), T(C), T(M), T(D), T(ENTER),W(255),W(255), T(I), T(P), T(C), T(O), T(N), T(F), T(I), T(G), T(SPACE), T(SLASH), T(A), T(L), T(L),T(ENTER),END));
    }
    else{
        action_macro_play(MACRO(D(LGUI), T(R),W(255), U(LGUI),W(255), T(C), T(M), T(D), T(ENTER), W(255), T(P), T(I), T(N), T(G),T(SPACE), D(LCTRL), T(V), U(LCTRL), END));
    }
}
void SLSH_BSLSH(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_SLSH);
        unregister_code (KC_SLSH);
    }
    else{
        register_code (KC_BSLS);
        unregister_code (KC_BSLS);
    }
}
void VirtualDesktop(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) 
        action_macro_play(MACRO(D(LGUI),D(LCTRL),T(LEFT),U(LCTRL),U(LGUI),END));
    else if(state->count==2)
        action_macro_play(MACRO(D(LGUI),D(LCTRL),T(RIGHT),U(LCTRL),U(LGUI),END));
}
    
qk_tap_dance_action_t tap_dance_actions[] = {
    
    //Tap once for Esc, twice for Caps Lock
    [TD_CPY_PST] = ACTION_TAP_DANCE_FN(cmd_commands),
    [TD_SLSH]= ACTION_TAP_DANCE_FN(SLSH_BSLSH),
    [TD_CMD]=ACTION_TAP_DANCE_FN(cmd),
    [TD_VRDSK]=ACTION_TAP_DANCE_FN(VirtualDesktop),
    [TD_BRCS]=ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC)
};

