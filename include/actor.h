#ifndef ACTOR_H
#define ACTOR_H

#include "defines.h"

typedef struct AnimCtrl_s AnimCtrl;

typedef struct ActorAnimationInfo_s {
    u32 a;
    float b;
} ActorAnimationInfo;

typedef struct ActorMarker_s {
    int x;
} ActorMarker;

typedef struct Actor_s {
    ActorMarker* marker;
    TUPLE(f32,position);
    u32 state:6; /* unk10_31*/
    u32 unk10_25:7;
    u32 unk10_18:6;
    u32 unk10_12:4;
    u32 unk10_8:1;
    u32 unk10_7:1;
    u32 unk10_6:2;
    u32 unk10_4:1;
    u32 unk10_3:2;
    u32 unk10_1:1;
    u32 unk10_0:1;
    AnimCtrl *animctrl;
    ActorAnimationInfo *unk18;
    TUPLE(f32, unk1C);
    f32 unk28; //used in cheggs
    TUPLE(f32, velocity);
    u32  unk38_31:10;
    u32  unk38_21:9;
    u32  unk38_13:9;
    u32  stored_animctrl_playbackType_:3; //animctrlPlaybackType
    u32  unk38_0:1;
    u32 unk3C;
    s32 unk40;
    u32 unk44_31:8;
    u32 modelCacheIndex:10; //modelCacheIndex
    s32 unk44_14:10;
    u32 despawn_flag:1;
    u32 unk44_2:1;
    u32 unk44_1:1;
    u32 unk44_0:1;
    f32 unk48; //used in chlmonkey (chimpy)
    f32 unk4C;
    /* 0x50 */ f32 yaw; //0x50
    f32 unk54; //0x54
} Actor;

typedef struct Gfx_s {
	int x;
} Gfx;

typedef struct Mtx_s {
	int x;
} Mtx;

typedef struct Vtx_s {
	int x;
} Vtx;

typedef struct actor_info_s{
    s16     markerId;
    s16     actorId;
    s16     modelId;
    s16     startAnimation;
    ActorAnimationInfo*   animations;
    void    (* update_func)(Actor *);
    void    (* unk10)(Actor *);
    Actor*  (* draw_func)(ActorMarker *, Gfx **, Mtx **, Vtx **);
    u16     unk18;
    u16     draw_distance;
    f32     shadow_scale;
    u16     unk20;
    //u8     pad22[2];
} ActorInfo;

enum actor_e
{
    ACTOR_1_UNKNOWN         = 0x1,
    ACTOR_2_UNKNOWN,

    ACTOR_4_BIGBUTT         = 0x4,
    ACTOR_5_TERMITE,
    ACTOR_6_GRUBLIN,
    ACTOR_7_MUMBO,
    ACTOR_8_CONGA,
    ACTOR_9_MM_HUT,
    ACTOR_A_CHUMP_FISH,
    ACTOR_B_SHOCKSPRING_PAD,
    ACTOR_C_MUD_HUT,
    ACTOR_D_WOOD_DEMOLISHED,
    ACTOR_E_BULL_INTRO,
    ACTOR_F_CHIMPY            = 0xF,

    ACTOR_11_JUJU_CTRL       = 0x11,
    ACTOR_12_BEEHIVE,
    //ACTOR_13_SINKING_BOBBER

    ACTOR_14_ORANGE_PROJECTILE = 0x14,
    ACTOR_15_UNKNOWN,

    ACTOR_17_PLAYER_SHADOW = 0x17,

    ACTOR_1E_LEAKY = 0x1E,

    ACTOR_25_CEMETARY_POT = 0x25, 

    ACTOR_29_ORANGE_COLLECTIBLE = 0x29,
    ACTOR_2A_GOLD_BULLION,
    ACTOR_2B_GOLD_BULLION_THROW_TARGET,
    ACTOR_2C_TURBO_TALON_TRAINERS,
    ACTOR_2D_MUMBO_TOKEN,

    //ACTOR_2F_WATERFALL_START
    //ACTOR_30_WATERFALL_END

    //ACTOR_37_WATER_BOBBER
    //ACTOR_38_TUNBLAR_MOVEMENT

    ACTOR_39_NAPPER = 0x39,
    ACTOR_3A_MOTZHAND,

    ACTOR_3C_CC_KEY = 0x3C,
    ACTOR_3D_CLANKER_SAWBLADE_PROPELLOR_1,
    ACTOR_3E_CLANKER_SAWBLADE_PROPELLOR_2,
    ACTOR_3F_CLANKER_SAWBLADE_PROPELLOR_3,
    ACTOR_40_CLANKER_SAWBLADE_PROPELLOR_4,
    ACTOR_41_CLANKER_SAWBLADE_PROPELLOR_5,
    ACTOR_42_CLANKER_SAWBLADE_PROPELLOR_6,
    ACTOR_43_CLACKER_SCREW,
    ACTOR_44_CLANKER_TOKEN_TOOTH_EXTERIOR,
    ACTOR_45_CLANKER_JIGGY_TOOTH_EXTERIOR,
    ACTOR_46_JIGGY,
    ACTOR_47_EMPTY_HONEYCOMB,

    ACTOR_49_EXTRA_LIFE = 0x49,

    ACTOR_4A_WOOD_EXPLOSION = 0x4A,

    ACTOR_4C_STEAM          = 0x4C,
    ACTOR_4D_STEAM_2,

    ACTOR_50_HONEYCOMB = 0x50,
    ACTOR_51_MUSIC_NOTE,
    ACTOR_52_BLUE_EGG,
    ACTOR_53_RED_ARROW,
    ACTOR_54_RED_QUESTION_MARK,
    ACTOR_55_RED_X,
    ACTOR_56_SHRAPNEL,
    ACTOR_57_ORANGE_PAD,

    ACTOR_59_JUJU              = 0x59,
    ACTOR_5A_JIGSAW_DANCE,
    ACTOR_5B_PINK_EGG_LARGEST,

    ACTOR_5E_JINJO_YELLOW = 0x5E,
    ACTOR_5F_JINJO_ORANGE,
    ACTOR_60_JINJO_BLUE,
    ACTOR_61_JINJO_PINK,
    ACTOR_62_JINJO_GREEN,

    ACTOR_65_WADING_BOOTS = 0x65,

    ACTOR_67_SNIPPET = 0x67,

    ACTOR_69_CLAM = 0x69,

    ACTOR_6D_GV_BANJO_DOOR = 0x6D, 

    ACTOR_72_UNKNOWN = 0x72,
    ACTOR_73_UNKNOWN,
    ACTOR_74_UNKNOWN,
    ACTOR_75_UNKNOWN,
    ACTOR_76_UNKNOWN,
    ACTOR_77_UNKNOWN,
    ACTOR_78_UNKNOWN,
    ACTOR_79_UNKNOWN,
    ACTOR_7A_UNKNOWN,
    ACTOR_7B_UNKNOWN,
    ACTOR_7C_UNKNOWN,
    ACTOR_7D_UNKNOWN,
    ACTOR_7E_UNKNOWN,
    ACTOR_7F_UNKNOWN,

    ACTOR_A2_FIRE_SPARKLE = 0xA2,

    ACTOR_C5_CHIMPY_STUMP      = 0xC5,
    
    ACTOR_C7_GRAVESTONE = 0xC7,
    ACTOR_C8_BOGGY_2  = 0xC8,

    ACTOR_CA_TEEHEE = 0xCA,

    ACTOR_E4_FLIGHT_PAD     = 0xE4,

    ACTOR_E6_GLOOP          = 0xE6,
    ACTOR_E7_GLOOP_BUBBLE,
    ACTOR_E8_TANKTUP,
    ACTOR_E9_TANKTUP_LEG_FL,
    ACTOR_EA_TANKTUP_LEG_BL,
    ACTOR_EB_TANKTUP_LEG_FR,
    ACTOR_EC_TANKTUP_LEG_BR,
    ACTOR_ED_PINK_EGG_LARGE = 0xED,
    ACTOR_EE_PINK_EGG_MEDIUM,
    ACTOR_EF_PINK_EGG_SMALL,
    ACTOR_F0_PINK_EGG_SMALLEST,
    ACTOR_F1_LEAFBOAT,
    ACTOR_F2_BLACK_SNIPPET,

    ACTOR_F4_BURIED_TREASURE = 0xF4,
    ACTOR_F5_MUTIE_SNIPPET,
    ACTOR_F6_BIG_ALLIGATOR,

    ACTOR_101_CLANKER_TOKEN_TOOTH = 0x101,
    ACTOR_102_CLANKER_JIGGY_TOOTH,
    ACTOR_103_UNKNOWN,
    ACTOR_104_UNKNOWN,
    ACTOR_105_UNKNOWN,
    ACTOR_106_UNKNOWN,
    ACTOR_107_UNKNOWN,

    ACTOR_114_CHURCH_DOOR = 0x114,
    ACTOR_115_BLUBBER,
    ACTOR_116_FP_SNOWMAN_BUTTON,
    ACTOR_117_NIPPER,
    ACTOR_118_GRABBA,
    ACTOR_119_MAGIC_CARPET_1,
    ACTOR_11A_GV_MAZE_SARCOPHAGUS,

    ACTOR_11C_HISTUP = 0x11C,
    ACTOR_11D_RUBEES_EGG_POT = 0x11D,

    ACTOR_11B_RUBEE = 0x11B,

    ACTOR_120_SLAPPA = 0x120,

    ACTOR_122_MAGIC_CARPET_SHADOW = 0x122,
    ACTOR_123_MAGIC_CARPET_2,
    ACTOR_124_SIR_SLUSH,
    ACTOR_125_SNOWBALL,
    ACTOR_126_SIR_SLUSH_HAT,
    ACTOR_129_RED_FEATHER = 0x129,

    ACTOR_12B_TUTORIAL_BOTTLES = 0x12B,
    ACTOR_12C_MOLEHILL,

    ACTOR_12E_GOBI_1      = 0x12E,
    ACTOR_12F_GOBI_ROPE,
    ACTOR_130_GOBI_ROCK,
    ACTOR_131_GOBI_2,
    ACTOR_132_TRUNKER,
    ACTOR_133_FLIBBIT_RED,
    ACTOR_134_BUZZBOMB,
    ACTOR_135_GOBI_3,
    ACTOR_136_YELLOW_FLIBBIT_CONTROLLER,
    ACTOR_137_FLIBBIT_YELLOW,
    ACTOR_138_VILE_GAME_CTRL,
    ACTOR_139_YUMBLIE,
    ACTOR_13A_MR_VILE,
    ACTOR_13B_FLOTSAM,

    ACTOR_13E_LIGHTHOUSE_DOOR = 0x13E,
    ACTOR_13F_GV_SUN_SWITCH,
    ACTOR_140_GV_SUN_DOOR,

    ACTOR_142_GV_STAR_HATCH = 0x142,
    ACTOR_143_GV_KAZOOIE_DOOR,
    ACTOR_144_GV_STAR_SWITCH,
    ACTOR_145_HONEYCOMB_SWITCH,
    ACTOR_146_GV_KAZOOIE_TARGET,
    ACTOR_147_ANCIENT_ONE,

    ACTOR_14E_BGS_ELEVATED_WALKWAY_SWITCH = 0x14E,
    ACTOR_14F_DESTROYED_JIGGY,

    ACTOR_151_LOCKUP_SLOW = 0x151,
    ACTOR_152_LOCKUP_MEDIUM,
    ACTOR_153_LOCKUP_FAST,

    ACTOR_158_UNKNOWN = 0x158,

    ACTOR_15A_UNKNOWN = 0x15A,

    ACTOR_15C_UNKNOWN = 0x15C,

    ACTOR_15F_XMAS_TREE = 0x15F,
    ACTOR_160_BOGGY_1,

    ACTOR_163_BAT = 0x163,
    ACTOR_164_COLLYWOBBLE_A,
    ACTOR_165_BAWL_A,
    ACTOR_166_TOPPER_A,
    ACTOR_167_ATTACK_TUTORIAL,

    ACTOR_16F_QUARRIE = 0x16F,

    ACTOR_172_RBB_EGG_TOLL = 0x172,

    ACTOR_175_MODEL_RUSTY_BUCKET_REAR_PROPELLER = 0x175,

    ACTOR_181_SCARF_SLED = 0x181,
    ACTOR_182_RACE_SLED = 0x182,

    ACTOR_1BB_ENGINE_ROOM_PROPELLOR_1 = 0x1bb,
    ACTOR_1BC_ENGINE_ROOM_PROPELLOR_2,
    ACTOR_1BD_ENGINE_ROOM_PROPELLOR_3,

    ACTOR_1C6_GRIMLET = 0x1C6,

    ACTOR_1CC_GRILL_CHOMPA  = 0x1CC,
    ACTOR_1CD_UNKNOWN,
    ACTOR_1CE_UNKNOWN,
    ACTOR_1CF_UNKNOWN,
    ACTOR_1D0_UNKNOWN,
    ACTOR_1D1_UNKNOWN,
    ACTOR_1D2_UNKNOWN,
    ACTOR_1D3_UNKNOWN,
    ACTOR_1D4_UNKNOWN,

    ACTOR_1DB_GAME_OVER = 0x1DB,

    ACTOR_1DD_COPYRIGHT_OVERLAY = 0x1DD,
    ACTOR_1DE_PRESS_START_OVERLAY,
    ACTOR_1DF_NO_CONTROLLER_OVERLAY,

    ACTOR_1E4_TOOTS = 0x1E4,

    ACTOR_1E9_SNARE_BEAR = 0x1E9,
    ACTOR_1EA_POLAR_BEAR_CUB_BLUE,
    ACTOR_1EB_POLAR_BEAR_CUB_GREEN,
    ACTOR_1EC_POLAR_BEAR_CUB_RED,
    ACTOR_1ED_BLUE_PRESENT_COLLECTIBLE,

    ACTOR_1EF_GREEN_PRESENT_COLLECTIBLE = 0x1EF,
    
    ACTOR_1F1_RED_PRESENT_COLLECTIBLE = 0x1F1,

    ACTOR_1F3_WOZZA = 0x1F3,
    ACTOR_1F4_WOZZAS_JIGGY,
    ACTOR_1F5_GV_KAZOOIE_DOOR,

    ACTOR_1F7_JINXY = 0x1F7, 

    ACTOR_1FA_CROCTUS = 0x1FA,
    ACTOR_1FB_BGS_MAZE_SWITCH = 0x1FB,

    ACTOR_204_MM_WITCH_SWITCH = 0x204,

    ACTOR_206_MMM_WITCH_SWITCH = 0x206,

    ACTOR_208_TTC_WITCH_SWITCH = 0x208,

    ACTOR_20B_RBB_WITCH_SWITCH = 0x20B,

    ACTOR_20D_BREAKABLE_BRICK_WALL = 0x20D,
    ACTOR_20E_MM_ENTRANCE_DOOR,
    ACTOR_20F_RBB_ENTRANCE_DOOR,
    ACTOR_210_BGS_ENTRANCE_DOOR,
    ACTOR_211_TCC_ENTRANCE_CHEST_LID, //CC ENTRANCE
    ACTOR_212_CC_ENTRANCE_BARS, //TTC_ENTRANCE

    ACTOR_226_GV_ENTRANCE   = 0x226,
    ACTOR_227_GLASS_EYE,
    ACTOR_228_MMM_ENTRANCE_DOOR, //MMM ENTRANCE DOOR???

    ACTOR_230_BREAKABLE_FLOOR_COBWEB = 0x230,
    ACTOR_231_BREAKABLE_WALL_COBWEB,

    ACTOR_234_CCW_ENTRANCE_DOOR = 0x234,
    ACTOR_235_FP_ENTANCE_DOOR,

    ACTOR_237_CCW_WITCH_SWITCH = 0x237,

    ACTOR_239_FP_WITCH_SWITCH = 0x239,

    ACTOR_23B_WARP_CAULDRON = 0x23B,

    ACTOR_243_GV_SNS_CHAMBER_DOOR = 0x243,
    ACTOR_244_GV_SNS_SARCOPHAGUS,

    ACTOR_245_GV_SNS_SWITCH = 0x245,

    ACTOR_247_LAIR_SWITCH_FLIGHT_PAD = 0x247,

    ACTOR_256_GV_WITCH_SWITCH = 0x256,
    ACTOR_257_BGS_WITCH_SWITCH = 0x257,

    ACTOR_25B_CC_WITCH_SWITCH = 0x25B,
    ACTOR_25C_SHARKFOOD_ISLAND,
    ACTOR_25D_ICE_KEY,
    ACTOR_25E_SNS_EGG,

    ACTOR_27A_TIPTUP = 0x27A,
    ACTOR_27B_CHOIR_TURTLE_YELLOW,
    ACTOR_27C_CHOIR_TURTLE_CYAN,
    ACTOR_27D_CHOIR_TURTLE_BLUE,
    ACTOR_27E_CHOIR_TURTLE_RED,
    ACTOR_27F_CHOIR_TURTLE_PINK,
    ACTOR_280_CHOIR_TURTLE_PURPLE,
    ACTOR_281_BOSS_BOOM_BOX_LARGEST,
    ACTOR_282_BOSS_BOOM_BOX_LARGE,
    ACTOR_283_BOSS_BOOM_BOX_MEDIUM,
    ACTOR_284_BOSS_BOOM_BOX_SMALL,

    ACTOR_28A_CLANKER_WHIPCRACK = 0x28A,
    ACTOR_28B_SOUND_SOURCE,

    ACTOR_290_CLANKER_SAWBLADE_PROPELLOR_7 = 0x290,
    ACTOR_291_CLANKER_SAWBLADE_PROPELLOR_8,
    ACTOR_292_CLANKER_SAWBLADE_PROPELLOR_9,
    ACTOR_293_CLANKER_SAWBLADE_PROPELLOR_10,
    ACTOR_294_CLANKER_SAWBLADE_PROPELLOR_11,
    ACTOR_295_CLANKER_SAWBLADE_PROPELLOR_12,

    ACTOR_29B_ZUBBA = 0x29B,

    ACTOR_29E_CCW_GOBI = 0x29E,
    ACTOR_29F_CLUCKER = 0x29F,

    ACTOR_2A1_EEYRIE_BABY = 0x2A1,
    ACTOR_2A2_CATERPILLAR,

    ACTOR_2A4_BOOM_BOX_SLOW = 0x2A4,

    ACTOR_2A8_NABNUT = 0x2A8,
    ACTOR_2A9_ACORN,

    ACTOR_2DB_DINGPOT = 0x2DB,

    ACTOR_2E5_DOOR_OF_GRUNTY   = 0x2e5,

    ACTOR_30D_BOOM_BOX_FAST = 0x30D,

    ACTOR_30F_WHIPCRACK     = 0x30f,

    ACTOR_319_GV_MAZE_CTRL  = 0x319,

    ACTOR_31D_SANDYBUTT_PYRAMID = 0x31D,
    ACTOR_31E_PALM_TREE,
    
    ACTOR_32B_UNKNOWN = 0x32B, //something with Tanktup

    ACTOR_332_TWINKLY_BLUE = 0x332,
    ACTOR_333_TWINKLY_GREEN,
    ACTOR_334_TWINKLY_ORANGE,
    ACTOR_335_TWINKLY_RED,

    ACTOR_337_TWINKLY_MUNCHER = 0x337,
    ACTOR_338_XMAS_TREE_SWITCH,

    ACTOR_33A_BLUE_PRESENT  = 0x33A,
    ACTOR_33B_GREEN_PRESENT,
    ACTOR_33C_RED_PRESENT,

    ACTOR_33F_WOZZA_IN_CAVE         = 0x33F,

    ACTOR_34D_BEE_SWARM     = 0x34D,
    ACTOR_34E_LIMBO,
    ACTOR_34F_MUMMUM,
    ACTOR_350_SEAMAN_GRUBLIN,

    ACTOR_353_XMAS_TREE_EGG_TOLL = 0x353,
    ACTOR_354_DRIPS,

    ACTOR_367_GRUNTLING_RED = 0x367,
    ACTOR_368_5_MUMBO_TOKEN_SIGN,
    ACTOR_369_20_MUMBO_TOKEN_SIGN,
    ACTOR_36A_15_MUMBO_TOKEN_SIGN,
    ACTOR_36B_10_MUMBO_TOKEN_SIGN,
    ACTOR_36C_25_MUMBO_TOKEN_SIGN,

    ACTOR_COLLYWOBBLE_B     = 0x36D,
    ACTOR_BAWL_B            = 0x36E,
    ACTOR_TOPPER_B          = 0x36F,
    ACTOR_370_GOLD_FEATHER  = 0x370,

    ACTOR_375_GRUBLIN_HOOD  = 0x375,
    ACTOR_376_FF_MINIGAME,

    ACTOR_379_UNKNOWN = 0x379,
    ACTOR_37A_BOTTLES,

    ACTOR_37D_ICECUBE_A = 0x37d,

    ACTOR_37F_LOGGO         = 0x37F,
    ACTOR_380_SCARAB_BEETLE,
    ACTOR_381_PORTRAIT_CHOMPA,
    ACTOR_382_PORTRAIT_OF_GRUNTY,
    ACTOR_383_FIRE_FX,
    ACTOR_384_PORTRAIT_OF_BLACKEYE,
    ACTOR_385_PORTRAIT_OF_TOWER,
    ACTOR_386_PORTRAIT_OF_TREE_AND_MOON,
    ACTOR_387_PORTRAIT_OF_TEEHEE,
    ACTOR_388_PORTRAIT_OF_MINION,
    ACTOR_389_GRUNTY_SPELL_FIREBALL,

    ACTOR_38B_GRUNTILDA_FINAL_BOSS = 0x38B,

    ACTOR_39F_FIGHT_FLIGHT_PAD = 0x39F,
    ACTOR_3A0_ICECUBE_B,
    ACTOR_3A1_STONE_JINJO = 0x3A1,
    ACTOR_3A2_JINJO_STATUE_BASE = 0x3A2,

    ACTOR_3A5_BOSS_JINJO_ORANGE = 0x3A5,
    ACTOR_3A6_BOSS_JINJO_GREEN,
    ACTOR_3A7_BOSS_JINJO_PINK,
    ACTOR_3A8_BOSS_JINJO_YELLOW,
    ACTOR_3A9_JINJONATOR_STATUE_BASE = 0x3A9,

    ACTOR_3AA_GRUNTY_SPELL_GREEN_ATTACK = 0x3AA,
    ACTOR_3AB_GRUNTY_SPELL_BARRIER,
    ACTOR_3AC_JINJONATOR,

    ACTOR_3AF_GRUNTY_SHADOW = 0x3AF,

    ACTOR_3BA_UNKOWN        = 0x3ba,

    ACTOR_3BF_GRUNTLING_BLUE = 0x3bf,
    ACTOR_3C0_GRUNTLING_BLACK,
    ACTOR_3C1_PURPLE_TEEHEE,
    ACTOR_3C2_GIANT_GRAVESTONE,

    ACTOR_3C4_FF_PRIZE_WASHING_CAULDRON = 0x3C4,

    ACTOR_3C7_FF_PRIZE_GRUNTY_DOLL = 0x3C7,
    ACTOR_3C8_FF_PRIZE_TOOTY = 0x3C8,

    ACTOR_3CA_ROCK_TRAPPING_GRUNTY = 0x3CA
};

Actor *actor_draw(ActorMarker *, Gfx**, Mtx**, Vtx **);

#endif
