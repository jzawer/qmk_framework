#pragma once

#define CUSTOM_CODES_BASE_INDEX SAFE_RANGE
#define NUMBER_OF_OS 2
#define SEQUENCE_MAX_LENGTH 3
#define H(k) C(A(S(k)))     //H = Hyper
#define XE(k) G(C(A(S(k))))  //X = Xeno

enum OS {
    OSX = 0,
    WINDOWS
};

extern enum OS os;  //it holds the OS mode of the keyboard. OSX by default

//Some keys could have a passive behaviour, for example, while being hold a key could
//output SHIFT keycode, but if any other key is pressed in conjuction shift is released
//to avoid acting as modifier. This enum is created only for readibility purposes
enum passive_keycodes{
    PASSIVE_SHIFT = KC_RSFT
};

enum custom_keycodes {
    NULL_KEY = CUSTOM_CODES_BASE_INDEX, //SAFE_RANGE = 23849

    //────────────── MODIFIERS AND HOLD KEYS ──────────────
    FIRST_MODIFIER_INDEX,
    M1,
    M2,
    M3,
    M4,
    M5,
    M6,
    M7,
    CMD,
    ALT,
    CTR,
    S1,
    TILDE,
    LAST_MODIFIER_INDEX,

    //────────────── SEQUENCE KEYS ──────────────
    FIRST_SEQUENCE_INDEX,
    MEMBER,
    FIELD,
    QUESTN,
    EXCLAM,
    CMNT_OP,
    CMNT_CL,
    ONEPLUS,
    ONEMINS,
    GR_EQ,
    LWR_EQ,
    NT_EQ,
    GRT,
    TAGCL,
    LWR,
    TAGOP,
    SHF_L,
    SHF_R,
    NOT_EQ,
    GRT_EQ,
    LSS_EQ,
    BCKQT,
    POW,
    //G,
    //G_DIE,
    LAST_SEQUENCE_INDEX,

    //────────────── OS DEPENDENT KEYS ──────────────
    FIRST_OS_INDEX,
    CMD_OS,
    CTR_OS,
    CUT,
    COPY,
    PASTE,
    PST_CLEAN,
    PST_PLACE,
    UNDO,
    REDO,
    SCRSHT1,
    SCRSHT2,
    EURO,
    REFRESH,
    SAVE,
    SELECT,
    MUTE,
    VOL_UP,
    VOL_DOWN,
    CLS_APPS,
    BR_UP,
    BR_DOWN,
    W_LEFT,
    W_RIGHT,
    MONITOR,
    Z_IN,
    Z_OUT,
    TOP,
    BOTTOM,
    FIRST,
    LAST,
    MINMZ,
    CLS_W,
    SEARCH,
    SRCH_NX,
    SRCH_PR,
    RPLC,
    SPOTL,
    SM_APP,
    EMOJI,
    LOCK,
    WAVE,
    DEL_W,
    SNG_PR,
    SNG_NX,
    PLAY,
    //REBOOT,
    //POWER,
    WIN_L,
    WIN_R,
    MAXMZ,
    RESTORE,
    CLS_APP,
    WIN_CTR,
    DEL_LN,
    TRASH,
    REMOVE,
    LAST_OS_INDEX,
    //────────────── UNICODE DEPENDENT KEYS ──────────────
    FIRST_UNICODE_INDEX,
    DBLN,
    MIDLN,
    LONGLN,
    TOPLN,
    INFNT,
    ELLIPSIS,
    PI,
    POUND,
    DIFF,
    SIM,
    QUOT_R,
    GREQ,
    QUOT_L,
    LSEQ,
    DEGR,
    REG,
    TM,
    BULLET,
    CR,
    CROSS,
    DCROSS,
    QCROSS,
    LAST_UNICODE_INDEX,

    //────────────── ALIAS KEYS ──────────────
    FIRST_ALIAS_INDEX,
    UNDERSC,
    TGL_APP,
    UNTAB,
    FLASH,
    UNICODE,
    LAST_ALIAS_INDEX,

    //────────────── CUSTOM HANDLED KEYS ──────────────
    FIRST_CUSTOM_INDEX,
    SWAP_OS,
    SCR_OFF,
    NEXT_APP,
    PREV_APP,
    DESK1,
    DESK2,
    DESK3,
    SHW_DSK,
    EXPS,
    H_LOCK,
    KBLOCK,
    OSLOCK,
    RGB_NEXT,
    RGB_PREV,
    DEL,
    DOT,
    NLOCK,
    GAMELOCK,
};

static void tap_unicode_key(uint16_t keyName);
static void tap_sequence(uint16_t seqName);
static void del_sequence(uint16_t seqName );
static uint16_t getAliasKey(uint16_t keyName);