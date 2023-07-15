#ifndef ASSET_H
#define ASSET_H

enum asset_e
{
    ASSET_1_ANIM_BSCROUCH_ENTER = 0x1,
    ASSET_2_ANIM_BSWALK_CREEP,
    ASSET_3_ANIM_BSWALK,
    /* [4] empty */
    ASSET_5_ANIM_BSPUNCH = 0x5,
    /* [6] empty */
    ASSET_7_ANIM_BSBTROT_EXIT = 0x7,
    ASSET_8_ANIM_BSJUMP,
    ASSET_9_ANIM_BSDIE,
    ASSET_A_ANIM_BSCLIMB_MOVE,
    ASSET_B_ANIM_BSWALK_MUD,
    ASSET_C_ANIM_BSWALK_RUN,
    //ASSET_D_
    ASSET_E_ANIM_BSTURN = 0xe,
    ASSET_F_ANIM_BSREBOUND,
    ASSET_10_ANIM_BIGBUTT_RUN,
    ASSET_11_ANIM_BSWHIRL_WALK,
    /* [0x12..=0x14] empty */
    ASSET_15_ANIM_BSBTROT_WALK = 0x15,
    ASSET_16_ANIM_BSBTROT_ENTER,
    ASSET_17_ANIM_BSBFLAP,
    ASSET_18_ANIM_BSBFLAP_ENTER,
    ASSET_19_ANIM_BSBPECK_ENTER,
    ASSET_1A_ANIM_BSBPECK,
    ASSET_1B_ANIM_BSWHIRL_JUMP,
    ASSET_1C_ANIM_BSBBARGE,
    ASSET_1D_ANIM_BSBBUSTER,
    /* [0x1E..=0x20] empty */
    ASSET_21_ANIM_BIGBUTT_SLIDE = 0x21,
    ASSET_22_ANIM_BSWHIRL_EXIT,
    ASSET_23_ANIM_BSWONDERWING_IDLE,
    ASSET_24_ANIM_CLAM_HOP,
    /* [0x25] empty */
    ASSET_26_ANIM_BSBTROT_IDLE = 0x26,
    ASSET_27_ANIM_BSBTROR_JUMP,
    ASSET_28_ANIM_BSANT_OW,
    ASSET_29_ANIM_BSANT_DIE,
    ASSET_2A_ANIM_BSEGGHEAD,
    ASSET_2B_ANIM_BSEGGASS,
    ASSET_2C_ANIM_CRAB_WALK,
    ASSET_2D_ANIM_JINJO_IDLE,
    ASSET_2E_ANIM_BSJIG_JIGGY,
    ASSET_2F_ANIM_JINJO_HELP,
    ASSET_30_ANIM_JIGSAWDANCE_DANCE,
    ASSET_31_ANIM_JINJO_JUMP,
    ASSET_32_ANIM_BIGBUTT_ATTACK,
    ASSET_33_ANIM_BIGBUTT_EAT,
    ASSET_34_ANIM_BIGBUTT_DIE,
    ASSET_35_ANIM_BIGBUTT_ALERT,
    ASSET_36_ANIM_BIGBUTT_WALK,
    //ASSET_37_
    ASSET_38_ANIM_BSBFLY = 0x38,
    ASSET_39_ANIM_BSSWIM_MOVE,
    /* [0x3A, 0x3B] empty */
    ASSET_3C_ANIM_BSSWIM_DIVE_ENTER = 0x3C,
    ASSET_3D_ANIM_BSLONGLEG_JUMP,
    ASSET_3E_ANIM_BSBFLY_BEAKBOMB_CRASH,
    ASSET_3F_ANIM_BSSWIM_DIVE_MOVE,
    ASSET_40_ANIM_BSLONGLEG_ENTER_FROM_BTROT,
    ASSET_41_ANIM_BSLONGLEG_IDLE,
    ASSET_42_ANIM_BSLONGLEG_WALK,
    ASSET_43_ANIM_BSBFLY_BEAKBOMB_START,
    ASSET_44_ANIM_BSBTROT_TURBO_WALK,
    ASSET_45_ANIM_BSBFLY_ENTER,
    /* [0x46] empty */
    //ASSET_47_
    ASSET_48_ANIM_BSBSHOCK_CHARGE    = 0x48,
    ASSET_49_ANIM_BSBSHOCK_JUMP,
    /* [0x4A] empty */
    ASSET_4B_ANIM_BSBFLIP_ENTER    = 0x4B,
    ASSET_4C_ANIM_BSBFLIP_HOLD,
    ASSET_4D_ANIM_BSOW,
    ASSET_4E_ANIM_MUDHUT_SMASH,
    ASSET_4F_ANIM_BSTWIRL,
    /* [0x50] empty */
    ASSET_51_ANIM_CONGA_IDLE     = 0x51,
    ASSET_52_ANIM_CONGA_OW,
    ASSET_53_ANIM_CONGA_DEFEAT,
    ASSET_54_ANIM_CONGA_THROW,
    ASSET_55_ANIM_CONGA_BEAT_CHEST,
    ASSET_56_ANIM_CONGA_RAISE_ARMS,
    ASSET_57_ANIM_BSSWIM_IDLE,
    ASSET_58_ANIM_BSSWIM_IDLE2,
    ASSET_59_ANIM_BSSLIDE_BACK,
    ASSET_5A_ANIM_BSSLIDE_FRONT,
    ASSET_5B_ANIM_CHIMPY_JUMP,
    ASSET_5C_ANIM_CHIMPY_IDLE,
    ASSET_5D_ANIM_CHIMPY_WALK,
    ASSET_5E_ANIM_BSANT_IDLE,
    ASSET_5F_ANIM_BSANT_WALK,
    ASSET_60_ANIM_BSANT_JUMP,
    ASSET_61_ANIM_BSBFLIP_EXIT,
    ASSET_62_ANIM_GRUBLIN_IDLE,
    ASSET_63_ANIM_GRUBLIN_WALK,
    ASSET_64_ANIM_GRUBLIN_JUMP,
    ASSET_65_ANIM_BEEHIVE_DIE,
    ASSET_66_ANIM_BSBTROT_OW,
    ASSET_67_ANIM_WADINGBOOTS_WALK,
    ASSET_68_ANIM_BSJUMP_TUMBLE,
    ASSET_69_ANIM_BSSURF,
    ASSET_6A_ANIM_MUMBO_SLEEP,
    ASSET_6B_ANIM_MUMBO_WAKEUP,
    ASSET_6C_ANIM_MUMBO_IDLE,
    ASSET_6D_ANIM_MUMBO_TRANSFORM,
    ASSET_6E_ANIM_MUMBO_UNKNOWN,
    ASSET_6F_ANIM_BSSTAND_IDLE,
    ASSET_70_ANIM_BSSWIM_DIVE_IDLE,
    ASSET_71_ANIM_BSSWIM_DIVE_SLOW,
    ASSET_72_ANIM_BSCARRY_IDLE,
    ASSET_73_ANIM_BSCARRY_WALK,
    /* [0x74, 0x75] empty */
    ASSET_76_ANIM_JIGSAWDANCE_HOLD = 0x76,
    ASSET_77_ANIM_BSTIMEOUT,
    //ASSET_78 // snacker_swimming
    //ASSET_79 // Mumbo Concert Playing Instrument
    //ASSET_7A // Banjo Concert Angry
    //ASSET_7B // Banjo Concert Play
    //ASSET_7C // Banjo Concert End
    //ASSET_7D // Tooty Concert Start
    //ASSET_7E // Banjo Concert Start
    //ASSET_7F // Concert Cutscene
    //ASSET_80 // Concert Timer
    //ASSET_81 // Concert Unknown (0x81)
    //ASSET_82 // Mumbo Concert Dance
    //ASSET_83 // Tooty Concert Dance
    //ASSET_84 // Tooty Hopping
    //ASSET_85 // ???
    /* [0x86 .. =0x8B] empty */
    //ASSET_8C //Rareware Logo Falling
    /* [0x8D, 0x8E] empty */
    //ASSET_8F //Nintendo Logo Walking
    //ASSET_90 //Nintendo Logo Shrugging
    //ASSET_91 //Frog Hopping (Concert)
    ASSET_92_ANIM_SHRAPNEL_MOVE = 0x92,
    //ASSET_93 //Tooty Running (Concert)
    ASSET_94_ANIM_GRUBLIN_DIE = 0x94,
    ASSET_95_ANIM_BSSTAND_KAZOOIE_PECK,
    ASSET_96_ANIM_CRAB_UPSIDEDOWN,
    ASSET_97_ANIM_CRAB_FLIP_UPSIDEDOWN,
    ASSET_98_ANIM_FIRE_SPARKLE,
    /* [0x99] empty */
    ASSET_9A_ANIM_GRAVESTONE_IDLE = 0x9A,
    ASSET_9B_ANIM_GRAVESTONE_WALK = 0x9B,
    /* [0x9C] empty */
    ASSET_9D_ANIM_BAT_FLY = 0x9D,
    ASSET_9E_ANIM_TEEHEE_IDLE,
    ASSET_9F_ANIM_TEEHEE_ALERTED,
    ASSET_A0_ANIM_BSPUMPKIN_WALK,
    ASSET_A1_ANIM_BSPUMPKIN_JUMP,
    ASSET_A2_ANIM_CONGA_THROW_2,
    ASSET_A3_ANIM_NAPPER_ASLEEP,
    ASSET_A4_ANIM_NAPPER_AWAKE,
    ASSET_A5_ANIM_NAPPER_WALK,
    ASSET_A6_ANIM_NAPPER_ALERT,
    ASSET_A7_ANIM_MOTZHAND_IDLE,
    ASSET_A8_ANIM_MOTZHAND_PLAY,
    ASSET_A9_ANIM_FLOWER_POT,
    ASSET_AA_ANIM_CLAM_IDLE,
    ASSET_AB_ANIM_CLAM_EAT,
    ASSET_AC_ANIM_TEEHEE_CHASE,
    ASSET_AD_ANIM_BAT_TAKE_FLIGHT,
    ASSET_AE_ANIM_BAT_ROOST,
    /* [0xAF] empty */
    ASSET_B0_ANIM_BSJUMP_FALL = 0xB0,
    ASSET_B1_ANIM_BSCLIMB_IDLE_1,
    ASSET_B2_ANIM_BSCLIMB_IDLE_2,
/*HERE*/

    ASSET_B5_ANIM_BLUBBER_WALK = 0xB5,
    ASSET_B6_ANIM_BLUBBER_CRY,
    ASSET_B7_ANIM_BLUBBER_DANCE,
    ASSET_B8_ANIM_BLUBBER_RUN,
    ASSET_B9_ANIM_BSSWIM_DIE,
    /* [0xBA, 0xBB] empty */
    ASSET_BC_ANIM_LOCKUP = 0xBC,
    ASSET_BD_ANIM_NIPPER_VULNERABLE,
    ASSET_BE_ANIM_NIPPER_OW,
    ASSET_BF_ANIM_NIPPER_ATTACK,
    ASSET_C0_ANIM_NIPPER_IDLE,

    ASSET_C3_ANIM_CLANKER_IDLE = 0xC3,
    ASSET_C4_ANIM_CLANKER_BITE,
    ASSET_C5_ANIM_GRABBA_APPEAR,
    ASSET_C6_ANIM_GRABBA_HIDE,
    ASSET_C7_ANIM_GRABBA_IDLE,
    ASSET_C8_ANIM_GRABBA_DEFEATED,
    ASSET_C9_ANIM_MAGIC_CARPET,
    ASSET_CA_ANIM_GLOOP_SWIMMING,
    ASSET_CB_ANIM_GLOOP_BLOWING_BUBBLE,
    ASSET_CC_ANIM_BSFLY_BEAKBOMB_END,
    ASSET_CD_ANIM_SARCOPHAGUS_OPEN,
    ASSET_CE_ANIM_RUBEE_STOP_PLAYING,
    ASSET_CF_ANIM_HISTUP_RAISED,
    ASSET_D0_ANIM_HISTUP_GROW,
    ASSET_D1_ANIM_HISTUP_HIDE,
    ASSET_D2_ANIM_BSSPLAT,
    ASSET_D3_ANIM_BSBFLY_BEAKBOMB_REBOUND,
    ASSET_D4_ANIM_SWITCH_DOWN,
    ASSET_D5_ANIM_SWITCH_UP,
    ASSET_D6_ANIM_TURBO_TALON_TRAINERS,

    ASSET_DB_ANIM_FLIBBIT_HOP = 0xDB,
    ASSET_DC_ANIM_GOBI_ROPE_PULLING,
    ASSET_DD_ANIM_GOBI_ROPE,

    ASSET_DF_ANIM_RUBEE_PET_TOOTS = 0xDF,
    ASSET_E0_ANIM_BSCROC_WALK,
    ASSET_E1_ANIM_BSCROC_IDLE,
    ASSET_E2_ANIM_HISTUP_PEEK, 
    ASSET_E3_ANIM_RUBEE_IDLE,
    ASSET_E4_ANIM_RUBEE_PLAY,
    // ASSET_E5_ANIM_SLAPPA_APPEAR = 0xE5,
    // ASSET_E6_ANIM_SLAPPA_IDLE,
    // ASSET_E7_ANIM_SLAPPA_HIDE,
    // ASSET_E8_ANIM_SLAPPA_DIE,

    ASSET_ED_ANIM_ANCIENT_ONE = 0xED,

    ASSET_F0_ANIM_MINI_SHPYNX_EATING = 0xF0,
    ASSET_F1_ANIM_MAGIC_CARPET,

    ASSET_F4_ANIM_GOBI_IDLE = 0xF4,

    ASSET_F6_ANIM_BSSTAND_PULL_KAZOOIE = 0xF6,

    ASSET_F8_ANIM_GOBI_RUNNING = 0xF8,

    ASSET_FA_ANIM_FLIBBIT_IDLE = 0xFA,
    ASSET_FB_ANIM_FLIBBIT_TURN,
    ASSET_FC_ANIM_GOBI_SPITTING,
    ASSET_FD_ANIM_GOBI2_GETTING_UP,
    ASSET_FE_ANIM_TRUCKER_SHORT,
    ASSET_FF_ANIM_TRUCKER_GROW,

    ASSET_100_ANIM_GOBI_SPIT = 0x100,

    ASSET_108_ANIM_SIR_SLUSH_IDLE = 0x108,
    ASSET_109_ANIM_SIR_SLUSH_ATTACK,

    ASSET_10C_ANIM_BSCROUCH_IDLE = 0x10C,

    ASSET_112_ANIM_FLIBBIT_DIE = 0x112,
    ASSET_113_ANIM_FLIBBIT_DEAD,

    ASSET_116_ANIM_BSCROUCH_NOINPUT = 0x116,

    ASSET_11B_ANIM_BSTHROW = 0x11B,
    ASSET_11C_ANIM_BSCROC_JUMP,
    ASSET_11D_ANIM_BSCROC_BOUNCE,
    ASSET_11E_ANIM_BSCROC_DIE,
    ASSET_11F_ANIM_BSWALRUS_IDLE,
    ASSET_120_ANIM_BSWALRUS_WALK,
    ASSET_121_ANIM_BSWALRUS_JUMP,
    ASSET_122_ANIM_BSCROC_BITE,
    ASSET_123_ANIM_BSCROC_EAT_BAD,

    ASSET_125_ANIM_YUMBLIE_APPEAR = 0x125,
    ASSET_126_ANIM_YUMBLIE_HIDE,
    ASSET_127_ANIM_YUMBLIE_IDLE,
    ASSET_128_ANIM_GRUMBLIE_APPEAR,
    ASSET_129_ANIM_GRUMBLIE_HIDE,
    ASSET_12A_ANIM_GRUMBLIE_IDLE,
    ASSET_12B_ANIM_TIPTUP_IDLE,
    ASSET_12C_ANIM_TIPTUP_TAPPING,
    ASSET_12D_ANIM_CHOIR_TURTLE_IDLE,
    ASSET_12E_ANIM_CHOIR_TURTLE_SING,
    ASSET_12F_ANIM_CHOIR_TURTLE_HURT,
    ASSET_130_ANIM_JINJO_FLY_START,
    ASSET_131_ANIM_JINJO_FLY_END,
    ASSET_132_ANIM_FLOTSAM_MOVE,
    ASSET_133_ANIM_NIPPER_DIE,

    ASSET_138_ANIM_ZOOMBOX = 0x138,
    ASSET_139_ANIM_BOTTLES_EXIT,
    ASSET_13A_ANIM_BOTTLES_ENTER,
    ASSET_13B_ANIM_BOTTLES_IDLE,

    ASSET_13E_ANIM_SNORKEL_SWIM = 0x13E,
    ASSET_13F_ANIM_SNORKEL_STUCK,

    ASSET_141_ANIM_ANCHOR_LOWERED = 0x141,
    ASSET_142_ANIM_ANCHOR_RISING,
    ASSET_143_ANIM_SNOWMAN_BUTTON,

    ASSET_146_ANIM_BOSS_BOOMBOX_APPEAR = 0x146,
    ASSET_147_ANIM_BOOMBOX_MOVE,
    ASSET_148_ANIM_BOOMBOX_DIE,
    ASSET_149_ANIM_BSSPLAT,
    ASSET_14A_ANIM_BSREST_LISTEN,

    ASSET_153_ANIM_BURIED_TREASURE_APPEAR = 0x153,

    ASSET_155_ANIM_CRAB_FLIP_UPRIGHT = 0x155,
    ASSET_156_ANIM_MUTANT_CRAB_WALK,
    ASSET_157_ANIM_MUTANT_CRAB_FLIP_UPSIDEDOWN,
    ASSET_158_ANIM_MUTANT_CRAB_UPSIDEDOWN,
    ASSET_159_ANIM_MUTANT_CRAB_UPRIGHT,
    ASSET_15A_ANIM_GRILL_CHOMPA_ATTACK,
    ASSET_15B_ANIM_GRILL_CHOMPA_DIE,
    ASSET_15C_ANIM_CLANKER_WHIPCRACK_IDLE,
    ASSET_15D_ANIM_CLANKER_WHIPCRACK_ATTACK,

    ASSET_162_ANIM_TOOTS_IDLE = 0x162,
    
    ASSET_164_ANIM_TOOTS_SING = 0x164,
    ASSET_165_ANIM_BEEHIVE_IDLE,
    ASSET_166_ANIM_BURIED_TREASURE_BOUNCE,
    ASSET_167_ANIM_BSREST_MOVE,

    ASSET_16E_ANIM_MUMBO_RECLINE = 0x16E,
    ASSET_16F_ANIM_ZUBBA_FLY_MOVE,
    ASSET_170_ANIM_ZUBBA_FLY_IDLE,
    ASSET_171_ANIM_ZUBBA_DIE,
    ASSET_172_ANIM_ZUBBA_LAND,

    ASSET_176_ANIM_GOBI_YAWN = 0x176,
    ASSET_177_ANIM_GOBI_SLEEP,

    ASSET_17C_ANIM_TWINKLY_IDLE = 0x17C,
    ASSET_17D_ANIM_POLAR_BEAR_CUB_HAPPY = 0x17D,
    ASSET_17E_ANIM_POLAR_BEAR_CUB_SAD,
    ASSET_17F_ANIM_MUMBO_SWEEP,
    ASSET_180_ANIM_MUMBO_ROTATE,

    ASSET_184_ANIM_CLUCKER_ATTACK_SHORT = 0x184,
    ASSET_185_ANIM_CLUCKER_ATTACK_LONG,
    ASSET_186_ANIM_CLUCKER_DIE,

    ASSET_188_ANIM_BSPUMPKIN_DIE = 0x188,
    ASSET_189_ANIM_FLOTSAM_DIE,
    ASSET_18A_ANIM_XMAS_GIFT,

    ASSET_18E_ANIM_CATERPILLAR_IDLE = 0x18E,

    ASSET_19B_ANIM_UNKNOWN = 0x19B,

    ASSET_19D_ANIM_BSWALRUS_DIE = 0x19D,
    ASSET_19E_ANIM_BSWALRUS_SLED,
    ASSET_19F_ANIM_BSWALRUS_SLED_JUMP,

    ASSET_1A1_ANIM_SLED = 0x1A1,
    ASSET_1A2_ANIM_NABNUT_SLEEP,

    ASSET_1A9_ANIM_BSWALRUS_LOSS = 0x1A9,

    ASSET_1AF_ANIM_TWINKLY_MUNCHER_APPEAR = 0x1AF,
    ASSET_1B0_ANIM_TWINKLY_MUNCHER_DIE,
    ASSET_1B1_ANIM_TWINKLY_MUNCHER_IDLE,
    ASSET_1B2_ANIM_TWINKLY_MUNCHER_ATTACK,

    ASSET_1DA_ANIM_CRAB_IDLE = 0x1da,
    ASSET_1DB_ANIM_MUTANT_CRAB_IDLE,
    ASSET_1DC_ANIM_BEE_FLY,
    ASSET_1DD_ANIM_BEE_WALK,
    ASSET_1DE_ANIM_BEE_IDLE,

    ASSET_1E0_ANIM_BEE_OW     = 0x1e0,
    ASSET_1E1_ANIM_BEE_DIE,
    ASSET_1E2_ANIM_BEE_JUMP,
    
    ASSET_1ED_ANIM_GRAVESTONE_OW = 0x1ED,
    ASSET_1EE_ANIM_GRAVESTONE_DIE,


    ASSET_1F4_ANIM_SHRAPNEL_IDLE = 0x1F4,
    ASSET_1F5_ANIM_TRANSITION_FALLING_JIGGIES,

    ASSET_220_ANIM_SIR_SLUSH_DIE = 0x220,
    ASSET_221_ANIM_WOZZA_IN_CAVE,

    ASSET_228_ANIM_BANJO_SLED = 0x228,
    ASSET_229_ANIM_WHIPCRACK_ATTACK,
    ASSET_22A_ANIM_WHIPCRACK_IDLE,
    ASSET_22B_ANIM_NABNUT_FAT,
    ASSET_22C_ANIM_NABNUT_CRY,
    ASSET_22D_ANIM_NABNUT_BACKFLIP,
    ASSET_22E_ANIM_NABNUT_STAND,
    ASSET_22F_ANIM_NABNUT_RUN,

    ASSET_233_ANIM_ICECUBE  = 0x233,

    ASSET_236_ANIM_BSPUMPKIN_REBOUND = 0x236,

    ASSET_238_ANIM_LOGGO_IDLE = 0x238,

    ASSET_240_ANIM_LOGGO_FLUSH = 0x240,

    ASSET_242_ANIM_GOBI_RELAXING  = 0x242,

    ASSET_253_ANIM_BIGBUTT_OW   = 0x253,
    ASSET_254_ANIM_BIGBUTT_FALL,
    ASSET_255_ANIM_BIGBUTT_GET_UP,
    ASSET_256_ANIM_TERMITE_OW,

    ASSET_25B_ANIM_ACORN_IDLE = 0x25B,

    ASSET_281_ANIM_WISHYWASHY_DOOOH = 0x281,
    ASSET_282_ANIM_BSJIG_NOTEDOOR,

    ASSET_288_ANIM_FLIBBIT_OW = 0x288,

    ASSET_2A9_ANIM_BAT_FALL = 0x2A9,
    ASSET_2AA_ANIM_BAT_DIE,
    ASSET_2AB_ANIM_TEEHEE_DIE,
    // 2d1 Grey House Brick (Upon Smashing MM Huts)
    ASSET_2D2_MODEL_ORANGE            = 0x2d2, //projectile
    // 2d3 MM Conga Tree
    // 2d4 (Shadow?)
    // 2d5 FP Blue Present
    // 2d6 FP Tartan Present
    // 2d7 FP Green/White Present
    // Unused
    // Unused
    // 2da TTC Palm Tree
    // 2db RBB Grey Toxic Barrel
    // 2dc RBB Yellow Toxic Barrel
    // 2dd Shock Jump Pad
    // Unused
    // 2df TTC Light Crate
    // 2e0 TTC Dark Crate
    // 2e1 TTC Light & Dark Crate
    // Unused
    // 2e3 RBB Light Pipe Opening
    // 2e4 RBB Dark Pipe Opening
    // 2e5 (Grey Pipe?)
    ASSET_2E6_MODEL_JUJU              = 0x2e6,
    // 2e7 (Grey Plank?)
    // 2e8 Flight Pad
    // 2e9 MM Orange Splat
    // Unused
    ASSET_2EB_MODEL_ORANGE_PAD        = 0x2eb,
    // Unused
    // 2ed Banjo's House Dustbin
    // 2ee Mumbo's On Vacation Sign
    // Unused
    // Unused
    // 2f1 MMM Tumblar
    // Unused
    // Unused
    // 2f4 CCW Autumn Leaf
    // 2f5 Green BK Flag Pole (Beta?)
    // 2f6 Blue BK Flag Pole (Beta?)
    // 2f7 CCW Spring Leaf
    // 2f8 RIP Tombstone
    // 2f9 Red BK Flag Pole (Beta?)
    // Unused
    // 2fb CCW Summer Leaf
    // 2fc MMM Grave Plot
    // Unused
    // Unused
    // 2ff MM Tree
    // 300 Jinxy Head
    ASSET_301_MODEL_5_MUMBO_TOKEN_SIGN = 0x301,
    ASSET_302_MODEL_10_MUMBO_TOKEN_SIGN,
    ASSET_303_MODEL_15_MUMBO_TOKEN_SIGN,
    ASSET_304_MODEL_20_MUMBO_TOKEN_SIGN,
    ASSET_305_MODEL_25_MUMBO_TOKEN_SIGN,
    // 306 (Grey Platform Red Top?)
    // Unused
    // 308 Clanker's Blue Ring
    ASSET_309_MODEL_CLANKER_TOKEN_TOOTH_EXTERIOR = 0x309,
    ASSET_30A_MODEL_CLANKER_JIGGY_TOOTH_EXTERIOR,
    // Unused
    // Unused
    ASSET_30D_MODEL_LEAFBOAT = 0x30D,
    // 30e (Wood Pipe?)
    // Unused
    // Unused
    // 311 Corn On The Cob
    // 312 Hamper
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 318 Melon
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 322 FP Present Stand Large
    // 323 FP Present Stand Small
    // 324 FP Present Ramp
    // 325 FP Icicle Large
    // 326 FP Icicle Small
    // Unused
    // Unused
    // 329 FP Stack Of Presents 1
    // Unused
    // Unused
    // Unused
    // 32d (Shadow)
    // 32e (Banjo's Pillow?)
    // 32f Corner Cobweb
    // 330 Banjo's Arm Chair
    // 331 Banjo's Towel Holder
    // 332 BGS Floating Log
    // 333 Banjo's Flower Pot
    // 334 Palm Tree
    // 335 BGS Cattail
    // 336 Banjo's Drawers
    // 337 Banjo's Kitchen
    // 338 Table And Radio
    // 339 Winter Tree
    // 33a Wall Torch
    // 33b Parasol
    // 33c GV Maze Pot
    ASSET_33D_MODEL_SARCOPHAGUS = 0x33D,
    // 33e GV Rock 1 (Behind Entrance?)
    // 33f GV Rock 2 (Behind Entrance?)
    // 340 GL Beauty Stealing Machine
    // 341 GL Beauty Stealing Machine Console
    // 342 GV Short Platform
    // 343 Tooty Picture Frame
    // 344 (Wooden Block?)
    // 345 (Golden Block?)
    // 346 (Transparent Ice Floor?)
    // 347 GL Machine Room Door
    // 348 (Leaf Floor?)
    // 349 (Unknown?)
    // 34a Floor Cobweb
    // 34b Banjo's Bed
    // 34c Furnace Fun Booth
    ASSET_34D_MODEL_BANJOKAZOOIE_LOW_POLY = 0x34D,
    ASSET_34E_MODEL_BANJOKAZOOIE_HIGH_POLY,
    ASSET_34F_MODEL_BANJO_TERMITE,
    ASSET_350_MODEL_TERMITE,
    ASSET_351_MODEL_CLAM,
    ASSET_352_MODEL_SLED,
    ASSET_353_MODEL_BIGBUTT,
    ASSET_354_MODEL_BULL_INTRO,
    // 355 Concert Banjo Kazooie
    ASSET_356_MODEL_BANJO_WISHYWASHY = 0x356,
    // Unused
    // 358 TTC Snippet
    ASSET_358_SNIPPET = 0x358,
    ASSET_359_MODEL_BANJO_WALRUS,
    // 35a Concert Tooty
    ASSET_35B_FF_PRIZE_TOOTY = 0x35b,
    ASSET_35C_MODEL_CONGA,
    ASSET_35D_MODEL_CHIMPY,
    ASSET_35E_MODEL_JIGSAW_DANCE,
    ASSET_35F_MODEL_JIGGY,
    // 360 Blue Egg Fragment
    ASSET_361_MODEL_EMPTY_HONEYCOMB = 0x361,
    ASSET_362_MODEL_BANJO_BEE,
    ASSET_363_MODEL_HONEYCOMB,
    ASSET_364_MODEL_BEEHIVE,
    // Unused
    ASSET_366_MODEL_WADING_BOOTS = 0x366,
    ASSET_367_MODEL_TURBO_TALON_TRAINERS,
    // Unused
    // 369 Concert Frog
    // Unused
    ASSET_36B_CHUMP_FISH = 0x36B,
    // 36c Unused
    ASSET_36D_SPRITE_BLUE_EGG = 0x36D,
    ASSET_36E_MODEL_EXTRA_LIFE,
    ASSET_36F_MODEL_BANJO_PUMPKIN,
    ASSET_370_MODEL_BLUBBER,
    ASSET_371_MODEL_GRABBA,
    ASSET_372_MODEL_GLOOP,
    ASSET_373_MODEL_MR_VILE,
    ASSET_374_MODEL_BANJO_CROC = 0x374,
    ASSET_375_MODEL_FLIBBIT_RED,
    ASSET_376_MODEL_SLAPPA,
    ASSET_377_MODEL_SIR_SLUSH,
    ASSET_378_MODEL_SNOWBALL,
    ASSET_379_MODEL_SIRSLUSH_HAT,
    ASSET_37A_MODEL_TINY_SNOWBALL,
    // 37b Snowball Fragment
    ASSET_37C_MODEL_CLAM_LARGE_SHELL_PIECE = 0x37C,
    ASSET_37D_MODEL_CLAM_EYE,
    ASSET_37E_MODEL_CLAM_SMALL_SHELL_PIECE,
    // 37f (White Dot?)
    ASSET_380_MODEL_PINK_EGG_LARGEST = 0x380,
    ASSET_381_MODEL_PINK_EGG_LARGE,
    ASSET_382_MODEL_PINK_EGG_MEDIUM,
    ASSET_383_MODEL_PINK_EGG_SMALL,
    ASSET_384_MODEL_PINK_EGG_SMALLEST,
    // 385 Yellow Flibbit
    ASSET_385_MODEL_FLIBBIT_YELLOW = 0x385,
    // Unused
    ASSET_387_MODEL_BOTTLES = 0x387,
    ASSET_388_MODEL_MOLEHILL,
    // Unused
    ASSET_38A_MODEL_BOGGY_1 = 0x38A,
    // 38b Boggy Race Red Flag
    ASSET_38C_MODEL_CRAB_CLAW = 0x38c,
    ASSET_38D_MODEL_CRAB_LEG,
    ASSET_38E_MODEL_CRAB_HEAD,
    ASSET_38F_MODEL_MUTIE_SNIPPET,
    ASSET_390_MODEL_MUTANT_CRAB_HEAD,
    ASSET_391_MODEL_MUTANT_CRAB_LEG,
    ASSET_392_MODEL_MUTANT_CRAB_CLAW,
    ASSET_393_MODEL_TERMITE_LEG,
    ASSET_394_MODEL_TERMITE_HEAD,
    ASSET_395_MODEL_TERMITE_BODY,
    ASSET_396_MODEL_TERMITE_EYES,
    ASSET_397_MODEL_BIG_ALLIGATOR,
    // 398 Concert Ant
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 3a6 Nintendo Cube
    // 3a7 Rareware Logo
    // 3a8 (Brown Triangle?)
    ASSET_3A9_MODEL_PALM_TREE = 0x3A9,
    // Unused
    // Unused
    // Unused
    ASSET_3AD_FIRE_SPARKLE = 0x3AD,
    ASSET_3AE_MODEL_GRAVE_FLOWER_POT,
    // 3af (Green Plank?)
    // 3b0 Snacker
    // 3b1 Concert Mumbo
    // 3b2 (Two Poles?)
    // 3b3 Mumbo's Hut
    // Unused
    // Unused
    // 3b6 TTC Stairs 1
    // 3b7 TTC Stairs 2
    // Unused
    // Unused
    // Unused
    ASSET_3BB_MODEL_JINJO_YELLOW = 0x3BB,
    ASSET_3BC_MODEL_JINJO_ORANGE,
    // 3bd TTC Lighthouse A
    // 3be TTC Lighthouse B
    ASSET_3BF_MODEL_PLAYER_SHADOW = 0x3BF,
    ASSET_3C0_MODEL_JINJO_BLUE,
    ASSET_3C1_MODEL_JINJO_PINK,
    ASSET_3C2_MODEL_JINJO_GREEN,
    // Unused
    // Unused
    ASSET_3C5_MODEL_GRUBLIN = 0x3c5,
    ASSET_3C6_MODEL_MUMBO,
    ASSET_3C7_MODEL_GOLD_BULLION,
    ASSET_3C8_MODEL_CHIMPY_STUMP,
    ASSET_3C9_MODEL_GRAVESTONE,
    ASSET_3CA_MODEL_BAT,
    ASSET_3CB_MODEL_TEEHEE,
    // 3cc MMM Barrel Lid
    // 3cd MMM Tumblar Door
    // 3ce MMM Mansion Door
    // 3cf MMM Cellar Hatch
    // 3d0 MMM Locked Gate (Lock On Left)
    // 3d1 MMM Locked Gate (Lock On Right) 1
    // 3d2 TTC Blubber's Ship Top Hatch
    // 3d3 MMM Church Door
    // 3d4 Lockup
    ASSET_3D4_MODEL_LOCKUP = 0x3d4,
    ASSET_3D5_MODEL_NIPPER,
    ASSET_3D6_MODEL_LIGHTHOUSE_DOOR,
    ASSET_3D7_MODEL_STAR_SWITCH,
    ASSET_3D8_MODEL_GV_BANJO_DOOR,
    ASSET_3D9_MODEL_GV_KAZOOIE_DOOR,
    // 3da GV Sun Door
    ASSET_3DB_MODEL_GV_STAR_HATCH = 0x3db,
    ASSET_3DC_MODEL_MAGIC_CARPET,
    ASSET_3DD_MODEL_RUBEE,
    ASSET_3DE_MODEL_HISTUP,
    ASSET_3DF_MODEL_TRUNKER,
    ASSET_3E0_MODEL_GOBI,
    ASSET_3E1_MODEL_RUBEES_EGG_POT = 0x3E1,
    ASSET_3E2_MODEL_GV_KAZOOIE_TARGET = 0x3E2,
    ASSET_3E3_MODEL_GOBI_ROPE,
    ASSET_3E4_MODEL_GOBI_ROCK,
    // 3e5 GV Hand Shadow
    // 3e6 GV Jinxy Head 2
    ASSET_3E7_MODEL_MAGIC_CARPET_SHADOW = 0x3e7,
    ASSET_3E8_MODEL_ANCIENT_ONE,
    ASSET_3E9_MODEL_RED_ARROW,
    ASSET_3EA_MODEL_RED_X,
    ASSET_3EB_MODEL_RED_QUESTION_MARK,
    ASSET_3EC_MODEL_SHRAPNEL,
    ASSET_3ED_MODEL_BUZZBOMB,
    ASSET_3EE_TANKTUP,
    ASSET_3EF_MODEL_TANKTUP_LEG_FL,
    ASSET_3F0_MODEL_TANKTUP_LEG_BL,
    ASSET_3F1_MODEL_TANKTUP_LEG_FR,
    ASSET_3F2_MODEL_TANKTUP_LEG_BR,
    ASSET_3F3_MODEL_GOBI_SPIT,
    // Unused
    // 3f5 BGS Green Jiggy Switch
    ASSET_3F5_BGS_JIGGY_SWITCH = 0x3F5,
    ASSET_3F6_MODEL_YUMBLIE,
    ASSET_3F7_MODEL_GRUMBLIE,
    ASSET_3F8_MODEL_TIPTUP,
    ASSET_3F9_MODEL_CHOIR_TURTLE,
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    ASSET_3FF_MODEL_GV_SUN_DOOR = 0x3FF,
    ASSET_400_MODEL_SUN_SWITCH,
    ASSET_401_MODEL_FLOTSAM,
    ASSET_402_MODEL_EGG_TOLL,
    ASSET_403_MODEL_RUSTY_BUCKET_REAR_PROPELLER,
    // 404 RBB Green Propeller Switch (Stop Propellers)
    // 405 RBB Grey Propeller Switch (Stop Propellers)
    // 406 RBB Thin Shaft
    // 407 RBB Double Shaft 1
    // 408 RBB Double Shaft 2
    // 409 RBB Small Cog
    // 40a RBB Medium Cog
    // 40b RBB Large Cog
    // 40c RBB Spinning Platform 1
    // 40d RBB Spinning Platform 2
    // 40e RBB Spinning Platform 3
    ASSET_40F_MODEL_ENGINE_ROOM_PROPELLER_1 = 0x40f,
    ASSET_410_MODEL_ENGINE_ROOM_PROPELLER_2,
    ASSET_411_MODEL_ENGINE_ROOM_PROPELLER_3,
    // 412 RBB Grey Propeller Switch (Slow Fans)
    // 413 RBB 1 Switch
    // 414 RBB 2 Switch
    // 415 RBB 3 Switch
    // 416 RBB Whistle 1 (Yellow)
    // 417 RBB Whistle 2 (Gold)
    // 418 RBB Whistle 3 (Blue)
    ASSET_419_MODEL_GRIMLET = 0x419,
    ASSET_41A_SPRITE_MUMBO_TOKEN,
    // 41b RBB Anchor Button
    // 41c Snorkel
    // 41d RBB Anchor & Chain
    // 41e RBB Rareware Flag
    // 41f (Gruntilda's Final Battle Forcefield?)
    // 420 (Explosion 2D?)
    ASSET_421_MODEL_FP_SNOWMAN_BUTTON = 0x421,
    ASSET_422_MODEL_JINXY,
    // Unused
    // 424 GV Cactus
    ASSET_425_MODEL_CROCTUS = 0x425,
    // 426 FP Christmas Tree Star
    // 427 (Wooden Plank)
    ASSET_428_MODEL_BOSS_BOOM_BOX = 0x428,
    ASSET_429_MODEL_CC_KEY,
    // 42a (Smoke 2D?)
    // 42b (Orange Triangle?)
    ASSET_42C_MODEL_BURIED_TREASURE = 0x42C,
    ASSET_42D_MODEL_QUARRIE = 0x42D,
    // 42d SM Quarrie
    // 42e SM Quarrie Fragment
    // 42f RBB Empty Honeycomb Button
    ASSET_430_MODEL_GRILL_CHOMPA = 0x430,
    // 431 Beta Vent
    ASSET_432_MODEL_CLANKER_WHIPCRACK = 0x432,
    // Unused
    ASSET_434_MODEL_TOOTS = 0x434,
    // 435 CC Green Grate
    // 436 CC Teal Grate
    // 437 (Unknown?)
    ASSET_438_MODEL_HONEYCOMB_SWITCH = 0x438,
    // 439 (Unknown?)
    ASSET_43A_MODEL_CLANKER_SAWBLADE_PROPELLOR = 0x43A,
    // 43b RBB Bell Buoy
    // 43c RBB Row Boat
    // 43d MMM Church Clock Switch
    // 43e MMM Locked Gate (Lock On Right) 2
    // 43f (White Star?)
    ASSET_440_MODEL_SNAREBEAR = 0x440,
    // 441 (Sir Slush Snowball?)
    // 442 FP Twinklies Box
    // 443 CCW Zubba Honey Lump
    // 444 (CCW Zubba Entrance Lid?)
    // 445 (CCW Zubba Entrance Lid?)
    ASSET_446_MODEL_ZUBBA = 0x446,
    // 447 CCW Beanstalk
    ASSET_448_MODEL_TWINKLY_BLUE = 0x448,
    ASSET_449_MODEL_TWINKLY_GREEN,
    ASSET_44A_MODEL_TWINKLY_ORANGE,
    ASSET_44B_MODEL_TWINKLY_RED,
    ASSET_44C_MODEL_POLAR_BEAR_CUB_BLUE,
    ASSET_44D_MODEL_POLAR_BEAR_CUB_GREEN,
    ASSET_44E_MODEL_POLAR_BEAR_CUB_RED,
    // 44f (Green Mist?)
    ASSET_450_MODEL_DINGPOT = 0x450,
    // 451 Gruntilda
    // 452 Gruntilda's Arms
    // 453 Dingpot Top
    // 454 Tooty Image In Dingpot
    // 455 MMM Limbo
    // 456 Gruntilda's Broomstick
    // 457 Gruntilda Riding Broomstick
    // 458 Banjo Top Half
    // 459 Banjo's Bed
    ASSET_45A_SPRITE_GREEN_GLOW     = 0x45A,
    // 45b Kazooie In Backpack Stand
    // 45c Banjo's House Curtains
    // 45d (Unknown)
    // 45e Banjo's House Door
    // 45f (Firey Rock?)
    // 460 (Kazooie Wing?)
    // 461 (Green Smog Ceiling?)
    // 462 Nabnut's Girlfriend
    // 463 Nabnut's Bed Sheet
    // 464 Nabnut's Bed
    // 465 Dead Snarebear
    // 466 (Sparkle 2D?)
    ASSET_467_MODEL_TRANSITION_FALLING_JIGGIES = 0x467,
    // 467 (Blank Picture Frame?)
    // 468 Sexy Grunty
    // 469 Ugly Tooty
    // 46a Klungo
    // 46b Beauty Machine Room Force Field
    // 46c Jiggy Picture
    // 46d Lightning
    // 46e Roysten In Bowl
    // 46f Coocoo Clock
    // 470 Banjo's Bookshelves
    // 471 Empty Blow Picture Frame
    // 472 Blank Picture
    // 473 Mumbo The BBQ King! He Bares Coconuts!
    // 474 Roysten The Grill Master!
    // 475 (Heart 2D?)
    ASSET_476_SPRITE_BLUE_GLOW     = 0x476,
    ASSET_477_SPRITE_YELLOW_GLOW,
    // 478 (Yellow Glow?)
    // 479 Bikini Girl
    // 47a (Brown Ball?)
    ASSET_47B_MODEL_ROCK    = 0x47b,
    // 47c (Snoring Z 2D?)
    // Unused
    // Unused
    ASSET_47F_MODEL_XMAS_GIFT_BLUE = 0x47F,
    ASSET_480_MODEL_XMAS_GIFT_GREEN,
    ASSET_481_MODEL_XMAS_GIFT_RED,
    ASSET_482_MODEL_CLUCKER,
    ASSET_483_MODEL_EAGLE_EGG,
    ASSET_484_MODEL_EAGLE_BABY,
    ASSET_485_MODEL_CATERPILLAR,
    ASSET_486_MODEL_XMAS_TREE_SWITCH,
    ASSET_487_MODEL_EAGLE_ADULT,
    ASSET_488_MODEL_XMAS_TREE,
    ASSET_489_MODEL_SHOCKSPRING_PAD,
    ASSET_48A_MODEL_FLIGHT_PAD,
    ASSET_48B_MODEL_JIGGY_PODIUM,
    ASSET_48C_MODEL_BOOM_BOX,
    // 48d Nabnut Eating Acorns
    ASSET_48E_MODEL_ACORN = 0x48E,
    // 48f Gnawty
    // 490 Gnawty's Boulder
    // 491 Note Door
    // 492 (Wooden Door?)
    // 493 RBB Engine Room Door
    ASSET_494_MODEL_WOZZA = 0x494,
    ASSET_495_MODEL_WOZZAS_JIGGY,
    ASSET_496_MODEL_TWINKLY_MUNCHER,
    ASSET_497_MODEL_TWINKLY_SHARD_BLUE,
    ASSET_498_MODEL_TWINKLY_SHARD_YELLOW,
    ASSET_499_MODEL_TWINKLY_SHARD_GREEN = 0x499,
    ASSET_49A_MODLE_TWINKLY_SHARD_ORANGE,
    ASSET_49B_MODEL_TWINKLY_SHARD_RED,
    // 49c (Green & Red Area?)
    ASSET_49D_MODEL_SEAMAN_GRUBLIN = 0x49D,
    ASSET_49E_SPRITE_BEE_SWARM,
    // 49f 2D Glowing Bee (Beta)
    ASSET_4A0_SPRITE_EXPLOSION = 0x4A0,
    ASSET_4A1_MODEL_BREAKABLE_BRICK_WALL,
    // 4a2 Mumbo's Mountain Door Entrance
    // 4a3 TTC Entrance Chest Lid
    // 4a4 Clanker's Entrance Long Pipe (Green)
    // 4a5 Clanker's Entrance Long Pipe (Blue)
    // 4a6 Clanker's Entrance Short Pipe
    // 4a7 Clanker's Entrance Iron Bars
    // 4a8 Bubblegloop Swamp Puzzle Grate
    // 4a9 Raise Pipe Switch (Path To CC)
    // 4aa Raise Pipe Switch (Path To Brentilda)
    // 4ab Raise Grate To BGS Puzzle
    // 4ac Iron Bars Under Gruntilda Statue
    // 4ad Gruntilda Statue Hat Top
    // 4ae Bubblegloop Swamp Entrance Door
    // 4af (Ice Ball?)
    // 4b0 Level 3 Water Switch
    // 4b1 Grate To Level 3 Water Switch
    // 4b2 Level 2 Water Switch
    // 4b3 Rareware Box (To Hide Water Switch?)
    // 4b4 Rusty Bucket Bay Entrance Door
    // 4b5 Level 1 Water Switch
    // 4b6 Grate Between MMM and RBB Puzzles
    // 4b7 Grate To RBB Puzzle
    // 4b8 CCW Puzzle Switch
    // 4b9 (Jiggy Switch Beta?)
    // 4ba RBB Window 1
    // 4bb RBB Window 2
    // 4bc GV Entrance Door
    ASSET_4BD_MODEL_GLASS_EYE = 0x4BD,
    // 4be MMM Entrance Door
    ASSET_4BF_MODEL_FLOOR_COBWEB = 0x4BF,
    // 4c0 MMM Window
    // 4c1 MMM Short Window
    // 4c2 MMM Tall Window
    // 4c3 FP House
    // 4c4 FP Frozen Mumbo Hut
    // 4c5 FP Stack Of Presents 2
    // 4c6 FP Snowy Bridge
    ASSET_4C7_MODEL_MUMMUM = 0x4C7,
    ASSET_4C8_MODEL_MUMMUM_ARM,
    ASSET_4C9_MODEL_MUMMUM_LEG,
    ASSET_4CA_MODEL_MUMMUM_HEAD,
    ASSET_4CB_MODEL_MUMMUM_BODY,
    ASSET_4CC_MODEL_LIMBO,
    ASSET_4CD_MODEL_LIMBO_ARM,
    ASSET_4CE_MODEL_LIMBO_LEG,
    ASSET_4CF_MODEL_LIMBO_HEAD,
    ASSET_4D0_MODEL_LIMBO_BONE,
    // Unused
    // 4d2 FP Christmas Tree Glass Container
    // 4d3 FP Christmas Tree Glass Container Fragment
    ASSET_4D4_MODEL_TWINKLY_BOX_PAPER_SHARD = 0x4D4,
    ASSET_4D5_MODEL_WALL_COBWEB,
    // 4d6 Click Clock Wood Entrance Door
    // 4d7 Freezeezy Peak Entrance Left Door
    // 4d8 Freezeezy Peak Entrance Right Door
    // 4d9 Freezeezy Peak Entrance Hatch Door
    // 4da (Wooden Door?)
    // 4db RBB Saftey Boat 1
    ASSET_4DC_MODEL_WITCH_SWITCH = 0x4DC,
    // 4dd Mumbo Skull Switch
    // 4de RBB Safety Boat 2
    ASSET_4DF_MODEL_WARP_CAULDRON = 0x4DF,
    // 4e0 CCW Season Door
    // 4e1 GL Wooden Coffin
    // 4e2 RBB Skylights (Shattered Window)
    // 4e3 CCW Dead Beanstalk
    // 4e4 Snore 'Z'
    // 4e5 FP Three Purple Ice Crystals
    // 4e6 FP Three Blue Ice Crystals
    // 4e7 FP Three Green Ice Crystals
    // 4e8 FP One Blue Ice Crystals (Large)
    // 4e9 FP One Blue Ice Crystals (Small)
    // 4ea FP Finish Banner
    // 4eb FP Start Banner
    // 4ec FP Race Rostrum
    MODEL_TOPPER            = 0x4ed,
    MODEL_COLLYWOBBLE       = 0x4ee,
    MODEL_BAWL              = 0x4ef,
    // 4f0 Colliwobble Large Stem (Upon Death)
    // 4f1 Colliwobble Small Stem (Upon Death)
    // 4f2 Colliwobble Large Leaf (Upon Death)
    // 4f3 Colliwobble Small Leaf (Upon Death)
    // 4f4 Colliwobble Stem (Upon Death)
    // 4f5 CCW Spring Switch
    // 4f6 CCW Summer Switch
    // 4f7 CCW Autumn Switch
    // 4f8 CCW Winter Switch
    // 4f9 CCW Nabnut's Window (Season?)
    // 4fa CCW Nabnut's Window (Season?)
    // 4fb CCW Nabnut's Window (Winter)
    // 4fc CCW Nabnut's Window (Season?)
    ASSET_4FD_MODEL_WHIPCRACK = 0x4fd,
    ASSET_4FE_MODEL_WHIPCRACK_PART_1,
    ASSET_4FF_MODEL_WHIPCRACK_PART_2,
    ASSET_500_MODEL_WHIPCRACK_PART_3,
    // 501 CCW Mound Of Acorns
    ASSET_502_MODEL_NABNUT = 0x502,
    // 503 Nabnut (Belly Full)
    ASSET_504_MODEL_ICECUBE       = 0x504,
    ASSET_505_MODEL_ICECUBE_CHUNK,
    // 506 CCW Dead Snarebear (Venus Flytrap)
    // 507 GL Grunty Floor Picture Eye 1
    // 508 GL Grunty Floor Picture Eye 2
    // 509 GL Jinxy Sarcophagus
    ASSET_50A_MODEL_SHARKFOOD_ISLAND = 0x50A,
    // 50B MMM Secret X-Barrel Lid
    ASSET_50C_MODEL_ICE_KEY = 0x50C,
    ASSET_50D_MODEL_SNS_EGG,
    // 511 GL Wooden Coffin Lid
    // 512 (Piece Of Glass Panel Blocking Ice Key 1?)
    // 513 (Piece Of Glass Panel Blocking Ice Key 2?)
    ASSET_514_MODEL_GV_SNS_CHAMBER_DOOR = 0x514,
    ASSET_515_MODEL_GV_SNS_SWITCH,
    // 516 (Wooden Plank?)
    // 517 Iron Gate (No Lock)
    // 518 CCW Wooden Door (To Whipcrack Room)
    ASSET_519_MODEL_LOGGO = 0x519,
    ASSET_51A_MODEL_LEAKY,
    ASSET_51B_MODEL_SCARAB_BEETLE,
    ASSET_51C_MODEL_SCARAB_BEETLE_PART_1,
    // 51d SCARAB BEETLE PART (Wing)
    ASSET_51E_MODEL_SCARAB_BEETLE_PART_2 = 0x51e,
    ASSET_51F_MODEL_SCARAB_BEETLE_PART_3,
    ASSET_520_MODEL_SCARAB_BEETLE_PART_4,
    ASSET_521_MODEL_PORTRAIT_CHOMPA,
    ASSET_522_MODEL_PORTRAIT_OF_GRUNTY,
    ASSET_523_MODEL_PORTRAIT_CHOMPA_TEETH,
    ASSET_524_MODEL_PORTRAIT_CHOMPA_HEAD,
    ASSET_525_MODEL_PORTRAIT_CHOMPA_PART,
    ASSET_526_SPRITE_FIRE,
    ASSET_527_MODEL_PORTRAIT_OF_BLACKEYE,
    ASSET_528_MODEL_PORTRAIT_OF_TOWER,
    ASSET_529_MODEL_PORTRAIT_OF_TREE_AND_MOON,
    ASSET_52A_MODEL_PORTRAIT_OF_TEEHEE,
    ASSET_52B_MODEL_PORTRAIT_OF_MINION,
    ASSET_52C_MODEL_GRUBLIN_HOOD,
    ASSET_52D_MODEL_GRUBLIN_HOOD_HAT,
    // 52e (CCW Season Door?)
    // 52f Banjo's Chair (Secret Spring)
    // 530 Banjo's Bed (Secret Spring?)
    // 531 Gnawty's Den
    // 532 Banjo & Kazooie (Gameboy/Beer/Sunglasses/Chair)
    // 533 CCW Nabnut's Door
    // 534 GL Flight Pad Switch
    // 535 Flight Pad Blue Fragment
    // 536 Flight Pad Red Fragment
    // 537 Flight Pad Yellow Fragment
    // 538 Jiggy Podium (Beta?)
    // 539 Brentilda
    ASSET_53A_MODEL_SHRAPNAL_PIECE_EYE = 0x53A,
    ASSET_53B_MODEL_SHRAPNAL_PIECE_SPIKE,
    ASSET_53C_MODEL_SHRAPNAL_PIECE_PLATE,
    ASSET_53D_MODEL_GRUNTILDA_FINAL_BOSS,
    // 53e Gnawty's Bed
    // 53f Gnawty's Shelves
    // 540 GL Shock Jump Pad Switch
    ASSET_541_SPRITE_FIREBALL_SPELL_ATTACK = 0x541,
    // 542 (Shadow?)
    ASSET_543_MODEL_JINJO_STATUE_BASE = 0x543,
    ASSET_544_MODEL_JINJONATOR_STATUE_BASE,
    ASSET_545_MODEL_STONE_JINJO,
    ASSET_546_MODEL_GRUNTY_SPELL_BARRIER,
    // 547 GL Blue Egg Refill Pillow
    // 548 GL Red Feather Refill Pillow
    // 549 GL Gold Feather Refill Pillow
    ASSET_54A_MODEL_GRUNTLING_RED = 0x54A,
    // 54b (Big Fireball?)
    ASSET_54C_MODEL_GAME_OVER = 0x54C,
    // 54d Banjo-Kazooie Sign
    ASSET_54E_MODEL_COPYRIGHT_OVERLAY = 0x54E,
    // 54f Cheato
    // 550 Large Door To Final Battle
    ASSET_551_MODEL_JINJONATOR = 0x551,
    ASSET_552_MODEL_BROOMSTICK_PIECE_HEAD,
    ASSET_553_MODEL_BROOMSTICK_PIECE_SHORT,
    ASSET_554_MODEL_BROOMSTICK_PIECE_LONG,
    ASSET_555_MODEL_BROOMSTICK_PIECE_EYE,
    // 556 Blast When Yellow Jinjo Hits Gruntilda
    // 557 Blast When Orange Jinjo Hits Gruntilda
    // 558 Blast When Green Jinjo Hits Gruntilda
    // 559 Blast When Pink Jinjo Hits Gruntilda
    // 55a BK World Entry/Exit Pad
    // 55b FP Boggy's Igloo
    ASSET_55C_MODEL_PRESS_START_OVERLAY = 0x55C,
    ASSET_55D_MODEL_NO_CONTROLLER_OVERLAY,
    ASSET_55E_MODEL_NAPPER,
    ASSET_55F_MODEL_FF_PRIZE_WASHING_CAULDRON,
    ASSET_560_MODEL_FF_PRIZE_GRUNTY_DOLL,
    ASSET_561_MODEL_GRUNTLING_BLUE = 0x561,
    ASSET_562_MODEL_GRUNTLING_BLACK,
    // 563 Level Entry Signs
    ASSET_564_MODEL_PURPLE_TEEHEE = 0x564,
    // 565 Bottles Game Banjo's Hand
    ASSET_566_MODEL_BLACK_SNIPPET = 0x566,
    ASSET_567_MODEL_BLACK_CRAB_HEAD,
    ASSET_568_MODEL_BLACK_CRAB_LEG,
    ASSET_569_MODEL_BLACK_CRAB_CLAW,
    // 56a FP Chimney
    ASSET_56B_MODEL_SANDYBUTT_PYRAMID = 0x56B,
    // 56c The End Sign
    // 56d (Human Hand?)
    // 56e Hammerhead Beach Scenery
    // Unused
    // Unused
    // Unused
    // 572 Palm Tree (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    ASSET_580_SPRITE_RED_FEATHER = 0x580,
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5a9 Flower
    // Unused
    // Unused
    // 5ac Red Mushroom
    // 5ad Green Mushroom
    // 5ae Blue Mushroom
    // Unused
    // Unused
    // 5b1 Pink Mushroom
    // 5b2 Purple Mushroom
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5b8 Flower
    // 5b9 Flower
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5c2 Flower
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5cf Weed
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5d5 Tree (Intro)
    // 5d6 Tree (Intro)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 5df Tree
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 606 Red Mushroom
    // 607 Green Mushroom
    // 608 White Circle
    // 609 Mushroom (2D)
    // Unused
    // Unused
    // 60c Cattail (2D)
    // 60d Cattail (2D)
    // 60e Cattail (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 648 Orange (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 68c Grass (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 693 Seashell (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // 6b1 Weed (2D)
    // 6b2 Purple Weed (2D)
    // 6b3 White Weed (2D)
    // Unused
    // Unused
    // Unused
    // 6b7 Fire (2D)
    // 6b8 Green Glow (2D)
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    // Unused
    ASSET_6C1_SPRITE_SMOKE = 0x6C1,
    ASSET_6C2_SPRITE_SMOKE_WHITE,
    ASSET_6C3_SPRITE_SMOKE_GREEN,
    ASSET_6C4_SPRITE_SMOKE_YELLOW,
    ASSET_6C5_SPRITE_SMOKE_ORANGE,
    ASSET_6C6_SPRITE_SMOKE_PINK,
    ASSET_6C7_SPRITE_SMOKE_GREEN_2,
    ASSET_6C8_SPRITE_SMOKE_BLUE,
    ASSET_6C9_SPRITE_GREEN_SPELL_ATTACK,

    ASSET_6D1_SPRITE_GOLDFEATHTER = 0x6d1,

    ASSET_6D6_MODEL_MUSIC_NOTE = 0x6d6,

    ASSET_6D9_SPRITE_PROPELLOR_TIMER = 0x6d9,
    ASSET_6DA_SPRITE_HOURGLASS,
    ASSET_6DB_SPRITE_SKULL_HOURGLASS,
    ASSET_6DC_SPRITE_XMAS_TREE_TIMER,

    SPRITE_DIALOG_FONT_ALPHAMASK = 0x6eb,
    SPRITE_BOLD_FONT_LETTERS_ALPHAMASK,
    SPRITE_BOLD_FONT_NUMBERS_ALPHAMASK,

    ASSET_700_SPRITE_DUST  = 0x700,
    ASSET_701_SPRITE_LENS_SHUTTER_MASK,
    ASSET_702_SPRITE_UNKNOWN,

    ASSET_704_SPRITE_BUBBLE = 0x704,

    ASSET_708_SPRITE_EGG_PROJECTILE = 0x708,

    ASSET_70A_SPRITE_BUBBLE_1 = 0x70a,
    ASSET_70B_SPRITE_BUBBLE_2,
    ASSET_70C_SPRITE_RIPPLE,
    ASSET_70D_SPRITE_SMOKE_1,
    ASSET_70E_SPRITE_SMOKE_2,

    ASSET_710_SPRITE_SPARKLE_PURPLE = 0x710,
    ASSET_711_SPRITE_SPARKLE_DARK_BLUE,
    ASSET_712_SPRITE_SPARKLE_GREEN,
    ASSET_713_SPRITE_SPARKLE_YELLOW,

    ASSET_715_SPRITE_SPARKLE_RED = 0x715,
    ASSET_716_SPRITE_SPARKLE_WHITE,
    ASSET_717_SPRITE_SPARKLE_YELLOW_2,
    ASSET_718_SPRITE_SPARKLE_WHITE_2,
    ASSET_719_SPRITE_SPARKLE_GREEN_2,
    ASSET_71A_SPRITE_SPARKLE_PINK_2,
    ASSET_71B_SPRITE_SPARKLE_ORANGE_2,

    ASSET_7BD_MODEL_SKYBOX_MM = 0x7BD,
    ASSET_7BE_MODEL_CLOUDS_MM,
    ASSET_7BF_MODEL_SKYBOX_TTC,
    ASSET_7C0_MODEL_CLOUDS_TTC,
    ASSET_7C1_MODEL_SKYBOX_GV,
    ASSET_7C2_MODEL_SKYBOX_MMM,
    ASSET_7C3_MODEL_SKYBOX_MMM,
    ASSET_7C4_MODEL_SKYBOX_SM,
    ASSET_7C5_MODEL_SKYBOX_RBB,
    ASSET_7C6_MODEL_SKYBOX_FP,
    ASSET_7C7_MODEL_CLOUDS_FP_A,
    ASSET_7C8_MODEL_CLOUDS_FP_B,
    ASSET_7C9_MODEL_SKYBOX_INTRO_N64,
    ASSET_7CA_MODEL_SKYBOX_LAIR_MMM,
    ASSET_7CB_MODEL_CLOUDS_LAIR_MMM,
    ASSET_7CC_MODEL_SKYBOX_GRUNTYS_FALL,
    ASSET_7CD_MODEL_SKYBOX_BEACH_ENDING,

    ASSET_7CF_MODEL_TRANSITION_UNKNOWN = 0x7CF,
    ASSET_7D0_MODEL_TRANSITION_JIGGY,

    ASSET_7D4_MODEL_TRANSITION_WITCH = 0x7D4,

    ASSET_7D7_MODEL_MM_HUT     = 0x7d7,
    ASSET_7D8_MODEL_MM_HUT_TOP,
    ASSET_7D9_SPRITE_NOTE,

    ASSET_7DD_SPRITE_HEALTH = 0x7dd,

    ASSET_7E5_SPRITE_WATER_HONEYCOMB = 0x7e5,
    ASSET_7E6_SPRITE_VILE, 
    ASSET_7E7_SPRITE_CROC_BANJO,

    ASSET_7EE_JOKER_CARD = 0x7ee,
    ASSET_7EF_SPRITE_BANJO,
    ASSET_7F0_SPRITE_BOTTLES,
    ASSET_7F1_SPRITE_BLUBBER,
    ASSET_7F2_SPRITE_CONGA,
    ASSET_7F3_SPRITE_TEEHEE,
    ASSET_7F4_SPRITE_KAZOOIE,
    ASSET_7F5_SPRITE_CHIMPY,
    ASSET_7F6_SPRITE_FLIBBIT,
    ASSET_7F7_SPRITE_GOBI,
    ASSET_7F8_SPRITE_TANKTUP,
    ASSET_7F9_SPRITE_TIPTUP,
    ASSET_7FA_SPRITE_WARP_CAULDRON,
    ASSET_7FB_SPRITE_RUBEE,
    ASSET_7FC_SPRITE_MUMBO,
    ASSET_7FD_SPRITE_NIPPER,
    ASSET_7FE_SPRITE_CLANKER,
    ASSET_7FF_SPRITE_GRABBA,
    ASSET_800_SPRITE_SNIPPET,
    ASSET_801_SPRITE_TRUNKER,
    ASSET_802_SPRITE_JINJO_YELLOW,
    ASSET_803_SPRITE_JINJO_GREEN,
    ASSET_804_SPRITE_JINJO_BLUE,
    ASSET_805_SPRITE_JINJO_PINK,
    ASSET_806_SPRITE_JINJO_ORANGE,

    ASSET_808_SPRITE_LIVE_MUMBO_TOKEN = 0x808,
    ASSET_809_SPRITE_CATERPILLAR,

    ASSET_80C_SPRITE_LIVE_WADING_BOOTS = 0x80c, 
    ASSET_80D_SPRITE_LIVE_JIGGY,
    ASSET_80E_SPRITE_LIVE_EXTRA_LIFE,
    ASSET_80F_SPRITE_LIVE_GOLD_BULLION,
    ASSET_810_SPRITE_LIVE_HONEYCOMB,

    ASSET_812_SPRITE_LIVE_EMPTY_HONEYCOMB = 0x812,
    ASSET_813_SPRITE_PIRANHA,
    ASSET_814_SPRITE_SNACKER,
    ASSET_815_SPRITE_TOOTY,
    ASSET_816_SPRITE_GRUNTILDA,
    ASSET_817_SPRITE_ANCIENT_ONE,
    ASSET_818_SPRITE_TWINKLY_CHOMPER,

    ASSET_81B_SPRITE_LIVE_MUSIC_NOTE = 0x81B,

    ASSET_81D_SPRITE_LIVE_EXTRA_HEALTH_MAX = 0x81D,
    ASSET_81E_SPRITE_LIVE_BLUE_EGG,
    ASSET_81F_SPRITE_LIVE_GOLD_FEATHER,
    ASSET_820_SPRITE_LIVE_RED_FEATHER,
    ASSET_821_SPRITE_TWINKLY,
    ASSET_822_SPRITE_XMAS_GIFT_BLUE,
    ASSET_823_SPRITE_XMAS_GIFT_GREEN,
    ASSET_824_SPRITE_XMAS_GIFT_RED,
    ASSET_825_SPRITE_LIVE_ORANGE,
    ASSET_826_SPRITE_TUMBLAR,
    ASSET_827_SPRITE_LIVE_CLOCK,
    ASSET_828_SPRITE_JUJU,

    ASSET_82A_SPRITE_LEAKY = 0x82A,
    ASSET_82B_SPRITE_KLUNGO,
    ASSET_82C_SPRITE_MUMMUM,
    ASSET_82D_SPRITE_ZUBBA,
    ASSET_82E_SPRITE_BRENTILDA,
    ASSET_82F_SPRITE_TIPTUP_CHOIR_MEMBER,
    ASSET_830_SPRITE_JINXY,
    ASSET_831_SPRITE_NABNUT,
    ASSET_832_SPRITE_LITTLE_LOCKUP,
    ASSET_833_SPRITE_DINGPOT,
    ASSET_834_SPRITE_TERMITE,
    ASSET_835_SPRITE_WOZZA,
    ASSET_836_SPRITE_GLOOP,
    ASSET_837_SPRITE_GNAWTY,
    ASSET_838_SPRITE_SNORKEL,
    ASSET_839_SPRITE_YUMYUM,
    ASSET_83A_SPRITE_CROCTUS,
    ASSET_83B_SPRITE_MOTZHAND,
    ASSET_83C_SPRITE_BOGGY,
    ASSET_83D_SPRITE_LOGGO,
    ASSET_83E_SPRITE_EEYRIE_ADULT,
    ASSET_83F_SPRITE_EEYRIE_YOUNG,
    ASSET_840_SPRITE_WORM,
    ASSET_841_SPRITE_SEXY_GRUNTY,
    ASSET_842_SPRITE_CHEATO,
    ASSET_843_SPRITE_POLAR_BEAR_CUBS,
    ASSET_844_SPRITE_UGLY_TOOTY,
    ASSET_845_SPRITE_BLACK_SNIPPET,
    ASSET_846_SPRITE_SAND_EEL,
    ASSET_847_SPRITE_BOSS_BOOM_BOX,
    ASSET_848_SPRITE_FREEZING_WATER,
    ASSET_849_SPRITE_LOCKUP,

    ASSET_88C_MODEL_MOTZHAND = 0x88c,

    ASSET_88E_MODEL_CLANKER_CHAIN = 0x88e,

    ASSET_890_MODEL_SCREW = 0x890,
    ASSET_891_MODEL_CLANKER_TOKEN_TOOTH_OPEN,
    ASSET_892_MODEL_CLANKER_TOKEN_TOOTH_CLOSED,
    ASSET_893_MODEL_CLANKER_JIGGY_TOOTH_OPEN,
    ASSET_894_MODEL_CLANKER_JIGGY_TOOTH_CLOSED,


    ASSET_896_MODEL_GOLD_ROCK = 0x896,

    ASSET_89D_ZOOMBOX_SPRITE = 0x89d,

    ASSET_8A0_SPRITE_WATER_DROP = 0x8a0,

    ASSET_A17_TEXT_BURIED_TREASURE_SPAWNED = 0xa17,

    ASSET_A1F_DIALOG_SHOCKJUMP_LEARN = 0xa1f,
    ASSET_A20_DIALOG_FLY_LEARN,

    ASSET_A22_DIALOG_FLY_REFRESHER = 0xa22,
    ASSET_A23_DIALOG_SHOCKJUMP_REFRESHER,

    ASSET_A28_TEXT_LEAKY_DONE = 0xA28,

    ASSET_A6F_TEXT_CHARMER_MEET = 0xA6F,
    ASSET_A70_TEXT_CHARMER_HELPED,
    ASSET_A71_TEXT_TRUNKER_MEET,
    ASSET_A72_TEXT_TRUNKER_HELPED,
    ASSET_A73_TEXT_GOBI_MEET,
    ASSET_A74_TEXT_GOBI_HELPED,
    ASSET_A75_TEXT_GOBI2_MEET,
    ASSET_A76_TEXT_GOBI2_DONE,
    ASSET_A77_TEXT_GOBI3_DONE,
    ASSET_A78_TEXT_GRABBA_MEET,
    ASSET_A79_TEXT_GRABBA_DEFEAT,
    ASSET_A7A_TEXT_GRABBA_TOO_FAST,
    ASSET_A7B_TEXT_JINXY_MEET,
    ASSET_A7C_TEXT_JINXY_ONE_EGG,
    ASSET_A7D_TEXT_JINXY_HELPED,
    ASSET_A7E_TEXT_SAND_EELS_MEET,
    ASSET_A7F_TEXT_ANICIENT_ONES_MEET,
    ASSET_A80_TEXT_ANICIENT_ONES_DONE,
    ASSET_A81_TEXT_SANDYBUTT_ENTER,
    ASSET_A82_TEXT_SANDYBUTT_START_MAZE,
    ASSET_A83_TEXT_SANDYBUTT_DONE,
    ASSET_A84_DIALOG_TURBOTRAINERS_LEARN,
    ASSET_A85_DIALOG_TURBOTRAINERS_REFRESHER,

    ASSET_ADE_TEXT_LOGGO_AS_BEAR  = 0xade,
    ASSET_ADF_TEXT_ENTER_LOGGO,
    ASSET_AE0_TEXT_EXIT_LOGGO,

    ASSET_B37_TEXT_CONGA_SAFE_UP_HERE     = 0xb37,
    ASSET_B38_TEXT_CONGA_DEFEAT,
    ASSET_B39_TEXT_CONGA_HIT_BY_EGG,
    ASSET_B3A_TEXT_CONGA_HITS_PLAYER,
    ASSET_B3B_TEXT_CONGA_ORANGE_PAD_JIGGY,
    ASSET_B3C_TEXT_CONGA_MEET,

    ASSET_B3E_TEXT_CONGA_MEET_AS_TERMITE  = 0xb3e,
    ASSET_B3F_DIALOG_CHIMPY_MEET,
    ASSET_B40_DIALOG_CHIMPY_COMPLETE,
    ASSET_B41_DIALOG_TERMITE_COOL_SHORTS,
    ASSET_B42_DIALOG_TERMITE_COOL_BACKPACK,
    ASSET_B43_DIALOG_TERMITE_MEET_AS_BEAR,
    ASSET_B44_TEXT_JUJU_MEET,
    ASSET_B45_TEXT_JIGGY_COLLECT_10, 

    ASSET_B47_DIALOG_EGGS_LEARN = 0xb47,
    ASSET_B48_DIALOG_BEAKBUSTER_LEARN,
    ASSET_B49_DIALOG_TALON_TROT_LEARN,
    ASSET_B4A_DIALOG_TALON_TROT_REFRESHER,
    ASSET_B4B_DIALOG_EGGS_REFRESHER,
    ASSET_B4C_DIALOG_BEAKBUSTER_REFRESHER,


    ASSET_B51_TEXT_BOTTLES_HOW_TO_EXIT_LEVEL = 0xb51,

    ASSET_C15_TEXT_TWINKLIE_MINIGAME_LOST = 0xc15,

    ASSET_C20_DIALOG_PRESENT_COLLECTIBLE_MEET_BLUE = 0xC20,
    ASSET_C21_DIALOG_PRESENT_COLLECTIBLE_MEET_GREEN = 0xC21,
    ASSET_C22_DIALOG_PRESENT_COLLECTIBLE_MEET_RED = 0xC22,
    ASSET_C23_DIALOG_BEAKBOMB_LEARN,
    ASSET_C24_DIALOG_BEAKBOMB_REFRESHER,

    text_flibbits_meet   = 0xc81,
    text_flibbits_defeat = 0xc82,
    text_flibbits_return = 0xc83,

    ASSET_C88_DIALOG_LONGLEG_LEARN = 0xC88,
    ASSET_C89_DIALOG_LONGLEG_REFRESHER,

    ASSET_D32_DIALOG_MUTANT_CRAB_MEET = 0xD32,
    ASSET_D33_DIALOG_MUTANT_CRAB_DEFEAT,
    ASSET_D34_TEXT_GLOOP_MEET,
    ASSET_D35_DIALOG_WONDERWING_LEARN,
    ASSET_D36_DIALOG_WONDERWING_REFRESHER,

    ASSET_D39_TEXT_BOTTLES_REFILL_HEALTH = 0xd39,

    ASSET_D8F_DIALOG_MUMBO_MEET = 0xD8F,
    ASSET_D90_DIALOG_MUMBO_MAGIC_PAID_FOR,
    ASSET_D91_DIALOG_MUMBO_XFORM_ANT,
    ASSET_D92_DIALOG_MUMBO_XFORM_PUMPKIN,
    ASSET_D93_DIALOG_MUMBO_XFORM_WALRUS,
    ASSET_D94_DIALOG_MUMBO_XFORM_CROC,
    ASSET_D95_DIALOG_MUMBO_XFORM_BEE,
    ASSET_D96_DIALOG_BEEHIVE_MEET,
    ASSET_D97_DIALOG_JINJO_MEET_YELLOW,
    ASSET_D98_DIALOG_JINJO_MEET_BLUE,
    ASSET_D99_DIALOG_JINJO_MEET_GREEN,
    ASSET_D9A_DIALOG_JINJO_MEET_PINK,
    ASSET_D9B_DIALOG_JINJO_MEET_ORANGE,
    
    ASSET_DA5_DIALOG_WADINGBOOTS_MEET = 0xDA5,
    ASSET_DA6_TEXT_BEEHIVE_WITH_BEES,
    ASSET_DA7_DIALOG_MUMBO_CCW_SUMMER,
    ASSET_DA8_DIALOG_MUMBO_CCW_AUTUMN,

    ASSET_DAA_DIALOG_MUMBO_HAS_ENOUGH_TOKENS = 0xDAA,
    ASSET_DAB_DIALOG_MUMBO_NOT_ENOUGH_TOKENS,
    ASSET_DAC_DIALOG_MUMBO_FAIL_TO_BUY,
    ASSET_DAD_DIALOG_MUMBO_XFORM_IN_CRYPT,
    ASSET_DAE_DIALOG_MUMBO_TREX_START,
    ASSET_DAF_DIALOG_MUMBO_TREX_MISTAKE,
    ASSET_DB0_DIALOG_MUMBO_MISTAKE_0,
    ASSET_DB1_DIALOG_MUMBO_MISTAKE_1,
    ASSET_DB2_DIALOG_MUMBO_MISTAKE_2,

    ASSET_F5B_DIALOG_MUMBO_MAGIC_GET_WEAK_FULL = 0xF5b,
    ASSET_F5C_DIALOG_MUMBO_MAGIC_GET_WEAK_ABREV,
    ASSET_F5D_DIALOG_MUMBO_MAGIC_RUN_OUT_FULL,
    ASSET_F5E_DIALOG_MUMBO_MAGIC_RUN_OUT_ABREV,

    ASSET_F64_DIALOG_NOTEDOORS_LEARN = 0xf64,
    ASSET_F65_DIALOG_NOTEDOORS_REFRESHER,

    ASSET_10A1_DIALOG_BRENTILDA_MEET = 0x10A1,

    ASSET_146B_MODEL_TTC_TREASURE_TROVE_COVE_OPA = 0x146B,
    ASSET_146C_MODEL_TTC_TREASURE_TROVE_COVE_XLU,
    ASSET_146D_MODEL_TTC_NIPPERS_SHELL_OPA,
    ASSET_146E_MODEL_TTC_NIPPERS_SHELL_XLU,
    ASSET_146F_MODEL_TTC_BLUBBERS_SHIP_OPA,
    ASSET_1470_MODEL_TTC_BLUBBERS_SHIP_XLU,
    ASSET_1471_MODEL_TTC_SANDCASTLE_OPA,
    ASSET_1472_MODEL_TTC_SANDCASTLE_XLU,
    ASSET_1473_MODEL_TTC_SHARKFOOD_ISLAND_OPA,
    ASSET_1474_MODEL_GV_GOBIS_VALLEY_OPA,
    ASSET_1475_MODEL_GV_GOBIS_VALLEY_XLU,
    ASSET_1476_MODEL_GV_MEMORY_GAME_OPA,
    /* [0x1477] empty */
    ASSET_1478_MODEL_GV_SANDYBUTTS_MAZE_OPA = 0x1478,
    ASSET_1479_MODEL_GV_SANDYBUTTS_MAZE_XLU,
    ASSET_147A_MODEL_GV_WATER_PYRAMIDS_OPA,
    ASSET_147B_MODEL_GV_WATER_PYRAMIDS_XLU,
    ASSET_147C_MODEL_GV_RUBEES_CHAMBER_OPA,
    ASSET_147D_MODEL_GV_INSIDE_JINXY_OPA,
    ASSET_147E_MODEL_GV_SNS_CHAMBER_OPA,
    ASSET_147F_MODEL_MMM_MAD_MONSTER_MANSION_OPA,
    ASSET_1480_MODEL_MMM_MAD_MONSTER_MANSION_XLU,
    ASSET_1481_MODEL_MMM_RAINBARREL_OPA,
    ASSET_1482_MODEL_MMM_CELLAR_OPA,
    ASSET_1483_MODEL_MMM_SECRET_CHURCH_ROOM_OPA,
    ASSET_1484_MODEL_MMM_SECRET_CHURCH_ROOM_XLU,
    ASSET_1485_MODEL_MMM_NAPPERS_ROOM_OPA,
    ASSET_1486_MODEL_MMM_CHURCH_OPA,
    ASSET_1487_MODEL_MMM_CHURCH_XLU,
    ASSET_1488_MODEL_MMM_TUMBLARS_SHED_OPA,
    ASSET_1489_MODEL_MMM_EGG_ROOM_OPA,
    ASSET_148A_MODEL_MMM_EGG_ROOM_XLU,
    ASSET_148B_MODEL_MMM_NOTE_ROOM_OPA,
    ASSET_148C_MODEL_MMM_NOTE_ROOM_XLU,
    ASSET_148D_MODEL_MMM_FEATHER_ROOM_OPA,
    ASSET_148E_MODEL_MMM_FEATHER_ROOM_XLU,
    ASSET_148F_MODEL_MMM_BATHROOM_OPA,
    ASSET_1490_MODEL_MMM_BATHROOM_XLU,
    ASSET_1491_MODEL_MMM_BEDROOM_OPA,
    ASSET_1492_MODEL_MMM_BEDROOM_XLU,
    ASSET_1493_MODEL_MMM_HONEYCOMB_ROOM_OPA,
    ASSET_1494_MODEL_MMM_HONEYCOMB_ROOM_XLU,
    ASSET_1495_MODEL_MMM_WELL_OPA,
    ASSET_1496_MODEL_MMM_WELL_XLU,
    ASSET_1497_MODEL_MMM_RAINBARREL_XLU,
    ASSET_1498_MODEL_MMM_INSIDE_LOGGO_OPA,
    ASSET_1499_MODEL_MMM_INSIDE_LOGGO_XLU,
    ASSET_149A_MODEL_MMM_NAPPERS_ROOM_XLU,
    ASSET_149B_MODEL_MMM_CELLAR_XLU,
    //149C - Black everywhere! You dont fall and theres invisible walls and floors!
    ASSET_149D_MODEL_CS_START_NINTENDO_OPA = 0x149D,
    ASSET_149E_MODEL_CS_START_RAREWARE_OPA,
    ASSET_149F_MODEL_CS_END_SPIRAL_MOUNTAIN_OPA,
    ASSET_14A0_MODEL_CS_START_RAREWARE_XLU,
    ASSET_14A1_MODEL_CS_START_NINTENDO_XLU,
    ASSET_14A2_MODEL_CS_BANJOS_HOUSE_OPA,
    ASSET_14A3_MODEL_CS_END_SPIRAL_MOUNTAIN_XLU,
    ASSET_14A4_MODEL_CS_BANJOS_HOUSE_XLU,
    ASSET_14A5_MODEL_CS_BEACH_XLU,
    ASSET_14A6_MODEL_CS_INTRO_SPIRAL_MOUNTAIN_OPA,
    /* [0x1477] empty */
    ASSET_14A8_MODEL_GL_GV_LOBBY_XLU = 0x14A8,
    ASSET_14A9_MODEL_CS_BEACH_OPA,
    ASSET_14AA_MODEL_MM_MUMBOS_MOUNTAIN_OPA,
    ASSET_14AB_MODEL_MM_MUMBOS_MOUNTAIN_XLU,
    ASSET_14AC_MODEL_SM_TICKERS_TOWER_OPA,
    ASSET_14AD_MODEL_SM_TICKERS_TOWER_XLU,
    ASSET_14AE_MODEL_MUMBOS_SKULL_OPA,
    /* [0x14AF] empty */
    ASSET_14B0_MODEL_RBB_RUSTY_BUCKET_BAY_OPA = 0x14B0,
    ASSET_14B1_MODEL_RBB_RUSTY_BUCKET_BAY_XLU,
    ASSET_14B2_MODEL_RBB_ENGINE_ROOM_OPA,
    ASSET_14B3_MODEL_RBB_ENGINE_ROOM_XLU,
    ASSET_14B4_MODEL_RBB_WAREHOUSE_OPA,
    ASSET_14B5_MODEL_RBB_WAREHOUSE_XLU,
    ASSET_14B6_MODEL_RBB_BOATHOUSE_OPA,
    ASSET_14B7_MODEL_RBB_BOATHOUSE_XLU,
    ASSET_14B8_MODEL_RBB_CONTAINER_1_OPA,
    ASSET_14B9_MODEL_RBB_CONTAINER_2_OPA,
    ASSET_14BA_MODEL_RBB_CONTAINER_3_OPA,
    ASSET_14BB_MODEL_RBB_CAPTIANS_CABIN_OPA,
    ASSET_14BC_MODEL_RBB_CAPTIANS_CABIN_XLU,
    ASSET_14BD_MODEL_RBB_CREW_CABIN_OPA,
    ASSET_14BE_MODEL_RBB_BOSS_BOOM_BOX_OPA,
    ASSET_14BF_MODEL_RBB_BOSS_BOOM_BOX_XLU,
    ASSET_14C0_MODEL_RBB_NAVIGATION_ROOM_OPA,
    ASSET_14C1_MODEL_RBB_STORAGE_ROOM_OPA,
    ASSET_14C2_MODEL_RBB_STORAGE_ROOM_XLU,
    ASSET_14C3_MODEL_RBB_KITCHEN_OPA,
    ASSET_14C4_MODEL_RBB_KITCHEN_XLU,
    ASSET_14C5_MODEL_RBB_ANCHOR_ROOM_OPA,
    ASSET_14C6_MODEL_RBB_ANCHOR_ROOM_XLU,
    ASSET_14C7_MODEL_RBB_NAVIGATION_ROOM_XLU,
    ASSET_14C8_MODEL_FP_FREEZEEZY_PEAK_OPA,
    ASSET_14C9_MODEL_FP_FREEZEEZY_PEAK_XLU,
    ASSET_14CA_MODEL_FP_BOGGYS_IGLOO_OPA,
    ASSET_14CB_MODEL_FP_XMAS_TREE_OPA,
    ASSET_14CC_MODEL_FP_WOZZAS_CAVE_OPA,
    ASSET_14CD_MODEL_FP_WOZZAS_CAVE_XLU,
    ASSET_14CE_MODEL_FP_BOGGYS_IGLOO_XLU,
    ASSET_14CF_MODEL_SM_SPIRAL_MOUNTAIN_OPA,
    ASSET_14D0_MODEL_SM_SPIRAL_MOUNTAIN_XLU,
    ASSET_14D1_MODEL_BGS_BUBBLEGLOOP_SWAMP_OPA,
    ASSET_14D2_MODEL_BGS_BUBBLEGLOOP_SWAMP_XLU,
    ASSET_14D3_MODEL_BGS_MR_VILE_OPA,
    ASSET_14D4_MODEL_BGS_TIPTUP_OPA,
    ASSET_14D5_MODEL_BGS_TIPTUP_XLU,
    ASSET_14D6_MODEL_TEST_MAP_OPA,
    ASSET_14D7_MODEL_TEST_MAP_XLU,
    ASSET_14D8_MODEL_CCW_HUB_OPA,
    ASSET_14D9_MODEL_CCW_SPRING_OPA,
    ASSET_14DA_MODEL_CCW_SUMMER_OPA,
    ASSET_14DB_MODEL_CCW_AUTUMN_OPA,
    ASSET_14DC_MODEL_CCW_WINTER_OPA,
    ASSET_14DD_MODEL_CCW_ZUBBA_HIVE_OPA,
    ASSET_14DE_MODEL_CCW_NABNUTS_HOUSE_OPA,
    ASSET_14DF_MODEL_CCW_WHIPCRACK_ROOM_OPA,
    ASSET_14E0_MODEL_CCW_HONEYCOMB_ROOM_OPA,
    ASSET_14E1_MODEL_CCW_NABBUTS_STASH_OPA,
    ASSET_14E2_MODEL_CCW_NABBUTS_STASH_XLU,
    ASSET_14E3_MODEL_CCW_HUB_XLU,
    ASSET_14E4_MODEL_CCW_SPRING_XLU,
    ASSET_14E5_MODEL_CCW_SUMMER_XLU,
    ASSET_14E6_MODEL_CCW_AUTUMN_XLU,
    ASSET_14E7_MODEL_CCW_WINTER_XLU,
    ASSET_14E8_MODEL_GL_FURNACE_FUN_OPA,
    /* [0x14E9.. =0x14EC] empty */
    ASSET_14ED_MODEL_CC_CLANKERS_CAVERN_OPA = 0x14ED,
    ASSET_14EE_MODEL_CC_CLANKERS_CAVERN_XLU,
    ASSET_14EF_MODEL_CC_WITCH_SWITCH_ROOM_OPA,
    ASSET_14F0_MODEL_CC_INSIDE_CLANKER_OPA,
    ASSET_14F1_MODEL_CC_INSIDE_CLANKER_XLU,
    ASSET_14F2_MODEL_CC_GOLD_FEATHER_ROOM_OPA,
    ASSET_14F3_MODEL_GL_MM_LOBBY_OPA,
    ASSET_14F4_MODEL_GL_TTC_AND_CC_PUZZLE_OPA,
    ASSET_14F5_MODEL_GL_180_NOTE_DOOR_OPA,
    ASSET_14F6_MODEL_GL_RED_CAULDRON_ROOM_OPA,
    ASSET_14F7_MODEL_GL_TTC_LOBBY_OPA,
    ASSET_14F8_MODEL_GL_GV_LOBBY_OPA,
    ASSET_14F9_MODEL_GL_FP_LOBBY_OPA,
    ASSET_14FA_MODEL_GL_FP_LOBBY_XLU,
    ASSET_14FB_MODEL_GL_CC_LOBBY_OPA,
    ASSET_14FC_MODEL_GL_BATTLEMENTS_OPA,
    ASSET_14FD_MODEL_GL_GV_PUZZLE_OPA,
    ASSET_14FE_MODEL_GL_MMM_LOBBY_OPA,
    ASSET_14FF_MODEL_GL_CRYPT_OPA,
    ASSET_1500_MODEL_GL_STATUE_ROOM_OPA,
    ASSET_1501_MODEL_GL_BGS_LOBBY_OPA,
    ASSET_1502_MODEL_GL_640_NOTE_DOOR_OPA,
    ASSET_1503_MODEL_GL_RBB_LOBBY_OPA,
    ASSET_1504_MODEL_RBB_AND_MMM_PUZZLE_OPA,
    ASSET_1505_MODEL_GL_CCW_LOBBY_OPA,
    ASSET_1506_MODEL_GL_FF_ENTRANCE_OPA,
    ASSET_1507_MODEL_GL_CC_LOBBY_XLU,
    ASSET_1508_MODEL_GL_640_NOTE_DOOR_XLU,
    ASSET_1509_MODEL_GL_RBB_LOBBY_XLU,
    ASSET_150A_MODEL_RBB_AND_MMM_PUZZLE_XLU,
    ASSET_150B_MODEL_GL_MM_LOBBY_XLU,
    ASSET_150C_MODEL_GL_TTC_AND_CC_PUZZLE_XLU,
    ASSET_150D_MODEL_GL_RED_CAULDRON_ROOM_XLU,
    ASSET_150E_MODEL_GL_STATUE_ROOM_XLU,
    ASSET_150F_MODEL_CS_KLUNGOS_LAB_OPA,
    ASSET_1510_MODEL_GL_180_NOTE_DOOR_XLU,
    ASSET_1511_MODEL_GL_BGS_LOBBY_XLU,
    ASSET_1512_MODEL_GL_TTC_LOBBY_XLU,
    ASSET_1513_MODEL_CS_KLUNGOS_LAB_XLU,
    ASSET_1514_MODEL_GL_FF_ENTRANCE_XLU,
    ASSET_1515_MODEL_GL_BATTLEMENTS_XLU
};

#endif
