#ifndef SFX_H
#define SFX_H

enum sfx_e
{
    SFX_0_BLOOP = 0x0000,
    SFX_1_MUMBO_UMENAKA,
    SFX_2_CLAW_SWIPE,
    SFX_3_DULL_CANNON_SHOT,
    // Long Beakbarge 2nd Part
    SFX_4_KAZOOIE_RUUUUUH, 
    SFX_5_BANJO_LANDING_01,
    SFX_6_BANJO_LANDING_02,
    SFX_7_BANJO_LANDING_03, 
    SFX_8_BANJO_LANDING_04, 
    SFX_9_SQUEAKY_TOY,
    SFX_A_BANJO_LANDING_05,
    SFX_B_BANJO_LANDING_06,
    SFX_C_TAKING_FLIGHT_LIFTOFF,
    SFX_D_EGGSHELL_BREAKING,
    SFX_E_SHOCKSPRING_BOING,
    SFX_F_SMALL_WATER_SPLASH,
    // shallow water
    SFX_10_BANJO_LANDING_07,
    // Blubber's Ship's Trapdoor eg.
    SFX_11_WOOD_BREAKING_1, 
    SFX_12_WATER_PADDLING_1,
    SFX_13_BEAKBUSTER_GROUND,
    // sounds like a muffled frying pan
    SFX_14_METALLIC_HIT_1,
    // less frying pan-ish
    SFX_15_METALLIC_HIT_2,
    // In the Opening Musical, when Mumbo's Xylophone drops
    SFX_16_HEAVY_FALL_VIBRATO, 
    SFX_17_JINJO_WHISTLE,
    SFX_18_BIGBUTT_SLIDE, 
    SFX_19_BANJO_LANDING_08,
    SFX_1A_BIG_THINGS_FALL_OVER,
    // from the sea-mines
    SFX_1B_EXPLOSION_1, 
    SFX_1C_ALARMCLOCK,
    // hitting the Bull eg.
    SFX_1D_HITTING_AN_ENEMY_1,
    // might also be used for breaking boulders
    SFX_1E_HITTING_AN_ENEMY_2,
    // hitting a Gruntling eg.
    SFX_1F_HITTING_AN_ENEMY_3,
    // Cauldrons make this sound when landing
    SFX_20_METAL_CLANK_1, 
    SFX_21_EGG_BOUNCE_1,
    SFX_22_KONGA_NOISE_1,
    SFX_23_KONGA_NOISE_2,
    SFX_24_KONGA_NOISE_3,
    // might be part of Clankers Bolt
    SFX_25_METAL_SLIDING_OVER_SMTH, 
    SFX_26_BANJO_LANDING_09,
    SFX_27_JINJO_HI,
    SFX_28_RUSTLING_NOISE,
    SFX_29_GRUBLIN_NYAHAHA,
    SFX_2A_CLOCK_TIC_1,
    // passive version
    SFX_2B_BULL_MOO_1,
    // when Trunker or the CCW plant grow eg.
    SFX_2C_PULLING_NOISE, 
    // incomplete cauldron spitout AND Banjo pulling on Kazooies Throat in Idle Anim
    SFX_2D_KABOING, 
    SFX_2E_BIGBUTT_RUNNING,
    SFX_2F_ORANGE_SPLAT,
    SFX_30_MAGIC_POOF,
    // starting to ride the FP sled to rescue Boggy
    SFX_31_BANJO_OHHWAAOOO, 
    // when rolling AND when taking damage
    SFX_32_BANJO_EGHEE, 
    // inital Shockspring Jump
    SFX_33_BANJO_AHOO, 
    SFX_34_BANJO_AGHOAA,
    SFX_35_BANJO_WOAH, 
    // death inducing damage
    SFX_36_BANJO_DOH,
    SFX_37_BANJO_OHWW,
    // less intense version
    SFX_38_BANJO_AYE_1,
    // more intense version
    SFX_39_BANJO_AYE_2,
    SFX_3A_BANJO_HOUW,
    SFX_3B_BANJO_GAAH,
    SFX_3C_BULL_GROWN,
    SFX_3D_TICKER_WALKING,
    // egg pooping ?
    SFX_3E_POOP_NOISE, 
    // higher pitch
    SFX_3F_CAULDRON_SQEAK_1, 
    // lower pitch
    SFX_40_CAULDRON_SQEAK_2, 
    // waking up
    SFX_41_MUMBO_ERGHHH, 
    // short and dull
    SFX_42_KAZOOIE_RAH, 
    // Short Beakbarge 2nd Part
    SFX_43_KAZOOIE_RUH, 
    // peeking out of the backpack
    SFX_44_KAZOOIE_AUW, 
    // Beakbbuster going down ?
    SFX_45_KAZOOIE_HUGHH, 
    // egg shot 1st Part
    SFX_46_KAZOOIE_CHOKING_UP, 
    // FeatherFlap exhausting
    SFX_47_KAZOOIE_HEUGH, 
    // TalonTrot Jump
    SFX_48_KAZOOIE_RUUH, 
    // TalonTrot Walking
    SFX_49_KAZOOIE_RA, 
    // the CCW Birds when comming out
    SFX_4A_CLUCKER_AHH, 
    SFX_4B_GULPING,
    // eating yumblies
    SFX_4C_LIP_SMACK, 
    // like when a fish flops around in shallow water
    SFX_4D_WET_WIGGLING, 
    // sounds like split-up from Tooie
    SFX_4E_KAZOOIE_BRUIII, 
    // selecting a SaveFile
    SFX_4F_BANJO_WAHOO, 
    // during Beakbomb
    SFX_50_KAZOOIE_RRRUH, 
    SFX_51_CLOCK_TIC_2,
    // starting a Beakbomb
    SFX_52_BANJO_YAH_OH, 
    // shockspring jump liftoff
    SFX_53_BANJO_HUIII,
    // jumping 
    SFX_54_BANJO_HOO_1,
    // jumping
    SFX_55_BANJO_HOO_2,
    // jumping
    SFX_56_BANJO_HUI,
    // egg shot 2nd part
    SFX_57_KAZOOIE_HEGH, 
    SFX_58_CHIMPY_NOISE_1,
    SFX_59_CHIMPY_NOISE_2,
    SFX_5A_CHIMPY_NOISE_3,
    SFX_5B_HEAVY_STUFF_FALLING,
    SFX_5C_HEAVY_STUFF_FALLING_DELAYED,
    // sleeping while snoring, inhale
    SFX_5D_BANJO_RAAOWW, 
    // sleeping while snoring, exhale
    SFX_5E_BANJO_PHEWWW,
    // while channeling a spell
    SFX_5F_MUMBO_BUGABUGOW_MUFFLED,
    // in the GameOver CS when Mumbo appears
    SFX_60_MUMBO_SKIDDING,
    // in the Musical when the buzzbomb falls (slowed down)
    SFX_61_CARTOONY_FALL,
    // annoyed at Kazooie, Idle Animation
    SFX_62_BANJO_ERGHH, 
    // huge fall starts
    SFX_63_BANJO_UWAAAAOOH,
    // in the Musical, when the Bulls run across
    SFX_64_STAMPEDE,
    SFX_65_METALLIC_SCRATCH,
    SFX_66_BIRD_AUUGHH,
    SFX_67_BEEHIVE_CLONK,
    SFX_68_CLUCKER_AAEEGHH,
    SFX_69_WHIPCRACK_CREAKING,
    // flagpoles during the boggy races
    SFX_6A_FLAGPOLE_WOBBLE,
    SFX_6B_LOCKUP_OPENING,
    SFX_6C_LOCKUP_CLOSING,
    SFX_6D_CROC_BITE,
    SFX_6E_VILE_EGH,
    // bottles uses this too I think
    SFX_6F_BANJO_HEADSCRATCH,
    SFX_70_WALKING_NOISE_1,
    SFX_71_WALKING_NOISE_2,
    SFX_72_WALKING_NOISE_3,
    SFX_73_WALKING_NOISE_4,
    SFX_74_WALKING_NOISE_5,
    SFX_75_WALKING_NOISE_6,
    SFX_76_WALKING_NOISE_7,
    SFX_77_WALKING_NOISE_8,
    SFX_78_EAGLECRY,
    SFX_79_TICKER_DEATH,
    // SFX_TICKER_DEATH but higher pitch
    SFX_7A_TERMITE_DEATH,
    SFX_7B_ICE_BREAKING_1,
    // entering a cauldron
    SFX_7C_CHEBOOF,
    // RBB, might be cranes aswell
    SFX_7D_ANCHOR_LIFTING,
    SFX_7E_CREAKY_DOOR_OPENING,
    SFX_7F_HEAVYDOOR_SLAM,
    SFX_80_YUMYUM_CLACK,
    // like polishing glass
    SFX_81_UUU,
    // when gates are broken, and probably when clankers bolt lands
    SFX_82_METAL_BREAK,
    SFX_83_BLUBBER_CRYING,
    SFX_84_GOBI_CRYING,
    SFX_85_ROUGH_COUGH,
    SFX_86_TIPTUP_CHORUS_AH,
    // when beakbustering his feet
    SFX_87_TANKTUP_OOOHW,
    SFX_88_WOZZA_NOISE,
    // unsure
    SFX_89_PARTYTOOL,
    // unsure, sounds like tooie's
    SFX_8A_ALTERNATIVE_EGG_SHOT,
    // when Banjo pulls on her throat in the idle anim
    SFX_8B_KAZOOIE_RAWW,
    SFX_8C_BOGGY_WAHEY,
    SFX_8D_BOGGY_OHWW,
    // tooie mingy sounds super similar
    SFX_8E_GRUNTLING_DAMAGE,
    SFX_8F_SNOWBALL_FLYING,
    SFX_90_SWITCH_PRESS,
    // might be clankers bolt landing
    SFX_91_METALLIC_SOUND,
    SFX_92_TOILET_FLUSH,
    // or some elevator
    SFX_93_MICROWAVE,
    SFX_94_COGS_ROTATING,
    SFX_95_BANJO_TALKING,
    SFX_96_HOTSAND_EEL_HISS,
    // twinklies box maybe
    SFX_97_BLUBBER_BURPS,
    SFX_98_DEAF_THUD,
    SFX_99_METALLIC_THUD,
    // grunty fight
    SFX_9A_MECHANICAL_CLOSING,
    SFX_9B_BOULDER_BREAKING_1,
    SFX_9C_BOULDER_BREAKING_2,
    SFX_9D_BOULDER_BREAKING_3,
    // might be enemys hitting the ground
    SFX_9E_BOULDER_BREAKING_4,
    SFX_9F_GENERATOR_RUNNING,
    // Tanktup maybe
    SFX_A0_COUGHING = 0x00A0,
    SFX_A1_BANJO_COUGHING,
    SFX_A2_BANJO_AHOOA,
    // from the idle anim
    SFX_A3_BANJO_DOUBLE_COUGH,
    // from the idle anim, but only once
    SFX_A4_BANJO_SINGLE_COUGH,
    SFX_A5_EYRIE_CRY,
    // final part of entering a cauldron warp
    SFX_A6_MAGICAL_FINISH,
    SFX_A7_WOODEN_SWOSH,
    SFX_A8_BLUBBER_DOUBLE_CRY,
    SFX_A9_BLUBBER_SINGLE_CRY,
    // this sounds like the used version
    SFX_AA_BGS_EGG_BREAKING_1,
    SFX_AB_BGS_EGG_BREAKING_2,
    SFX_AC_GOLDFEATHER_TALKING,
    SFX_AD_CATERPILLAR_SQUEAK,
    SFX_AE_YUMYUM_TALKING,
    SFX_AF_BANJO_CATCHING_BREATH,
    // might be from the grunty machine's doors
    SFX_B0_SIZZLING_NOISE,
    SFX_B1_BOGGY_KID_CRYING,
    SFX_B2_BOGGY_KID_HAPPY,
    SFX_B3_ORANGE_TALKING,
    SFX_B4_BOTTLES_TALKING_1,
    SFX_B5_THUNDERBOLT,
    // 1-6 are getting increasingly higher in pitch
    SFX_B6_GLASS_BREAKING_1,
    // 1-6 are getting increasingly higher in pitch
    SFX_B7_GLASS_BREAKING_2,
    // 1-6 are getting increasingly higher in pitch
    SFX_B8_GLASS_BREAKING_3,
    // 1-6 are getting increasingly higher in pitch
    SFX_B9_GLASS_BREAKING_4,
    // 1-6 are getting increasingly higher in pitch
    SFX_BA_GLASS_BREAKING_5,
    // 1-6 are getting increasingly higher in pitch
    SFX_BB_GLASS_BREAKING_6,
    SFX_BC_BOTTLES_TALKING_2,
    SFX_BD_BOTTLES_TALKING_3,
    SFX_BE_WATERFALL,
    SFX_BF_EYRIE_SLEEPING_1,
    SFX_C0_EYRIE_SLEEPING_2,
    // from the opening CS
    SFX_C1_BUZZBOMB_ATTACK,
    // death
    SFX_C2_GRUBLIN_EGH,
    // some talking ?
    SFX_C3_HEGH,
    SFX_C4_TWINKLY_MUNCHER_GRR,
    SFX_C5_TWINKLY_POP,
    SFX_C6_SHAKING_MOUTH, //bottles leaving/entering molehill
    // from the jinjo's flying
    SFX_C7_SHWOOP,
    // eating twinklies
    SFX_C8_CRUNCH,
    SFX_C9_PAUSEMENU_ENTER,
    SFX_CA_BANJO_DROWNING_1,
    SFX_CB_BANJO_DROWNING_2,
    // also the scrolling sound
    SFX_CC_PAUSEMENU_ENTER_SUBMENU,
    SFX_CD_PAUSEMENU_LEAVE_SUBMENU,
    // when the page is changed
    SFX_CE_PAUSEMENU_HOIP,
    SFX_CF_PAUSEMENU_SHWOOP,
    SFX_D0_GRIMLET_SQUEAK,
    SFX_D1_SNORKEL_WAH,
    // barely noticable
    SFX_D2_QUIET_METALLIC,
    SFX_D3_JINXIE_SNIFFLING_1,
    SFX_D4_JINXIE_SNIFFLING_2,
    SFX_D5_JINXIE_SNEEZING,
    SFX_D6_UGH,
    SFX_D7_GRABBA_DEATH,
    SFX_D8_CRANE,
    SFX_D9_WOODEN_CRATE_BREAKING_1,
    SFX_DA_WOODEN_CRATE_BREAKING_2,
    SFX_DB_WOODEN_CRATE_BREAKING_3,
    SFX_DC_IDLE_PADDLING,
    SFX_DD_JINJO_TALKING,
    SFX_DE_WOOD_SQUEAK,
    SFX_DF_KAZOOIE_TALKING_1,
    SFX_E0_KAZOOIE_TALKING_2,
    SFX_E1_KAZOOIE_TALKING_3,
    SFX_E2_KAZOOIE_TALKING_4,
    SFX_E3_KONGA_TALKING_1,
    SFX_E4_KONGA_TALKING_2,
    SFX_E5_KONGA_TALKING_3,
    // extra life talking ?
    SFX_E6_MEEP_1,
    // extra life talking ?
    SFX_E7_MEEP_2,
    SFX_E8_TOOTY_TALKING_1,
    SFX_E9_TOOTY_TALKING_2,
    // from enter_Lair CS
    SFX_EA_GRUNTY_LAUGH_1,
    // from Gameover CS
    SFX_EB_GRUNTY_LAUGH_2,
    SFX_EC_GRUNTY_TALKING_1,
    SFX_ED_GRUNTY_TALKING_2,
    SFX_EE_GRUNTY_TALKING_3,
    SFX_EF_TIPTUP_TALKING,
    // pages flipping
    SFX_F0_CHEATO_IDLE_1 = 0x00F0,
    // book closing thud
    SFX_F1_CHEATO_IDLE_2,
    SFX_F2_CUCKOO_CLOCK,
    SFX_F3_TRUNKER_TALKING,
    SFX_F4_TAP,
    SFX_F5_BLUBBER_TALKING_1,
    SFX_F6_BLUBBER_TALKING_2,
    SFX_F7_BLUBBER_TALKING_3,
    SFX_F8_BLUBBER_TALKING_4,
    SFX_F9_GRUNTLING_NOISE_1,
    SFX_FA_GRUNTLING_NOISE_2,
    SFX_FB_GRUNTLING_NOISE_3,
    SFX_FC_RUBEE_TALKING_1,
    SFX_FD_RUBEE_TALKING_2,
    SFX_FE_TANKTUP_TALKING_1,
    SFX_FF_TANKTUP_TALKING_2,
    SFX_100_TANKTUP_TALKING_3,
    SFX_101_LOGGO_TALKING,
    SFX_102_ZUBBA_TALKING,
    SFX_103_FLOTSAM_DEATH,
    // might also be zubba wings or similar
    SFX_104_PROPELLER_NOISE,
    SFX_105_EYRIE_YAWN,
    SFX_106_EYRIE_LIPSMACK,
    // full version
    SFX_107_CAULDRON_ACTIVATION_1,
    // abbreviated version
    SFX_108_CAULDRON_ACTIVATION_2,
    SFX_109_LOGGO_LID_CLAP,
    SFX_10A_TUMBLAR_TALKING,
    SFX_10B_GNAWTY_TALKING,
    SFX_10C_MUMMY_TALKING,
    SFX_10D_ANCIENT_ONE_TALKING,
    SFX_10E_TWINKLY_TALKING,
    SFX_10F_BOGGY_TALKING,
    SFX_110_TWINKLY_DEATH = 0x0110,
    SFX_111_WHIPCRACK_DEATH,
    SFX_112_TINKER_ATTENTION,
    SFX_113_PAD_APPEARS,
    SFX_114_BRICKWALL_BREAKING,
    SFX_115_BUZZBOMB_DEATH,
    SFX_116_DEAF_RUSTLING,
    SFX_117_LIMBO_COLLAPSING,
    SFX_118_LIMBO_REASSEMBLING,
    SFX_119_FISH_DEATH,
    SFX_11A_MATROSE_GRUBLIN_AYE,
    // 1-6 are getting increasingly shorter
    SFX_11B_TUMBLAR_DISAPPEARING_1,
    // 1-6 are getting increasingly shorter
    SFX_11C_TUMBLAR_DISAPPEARING_2,
    // 1-6 are getting increasingly shorter
    SFX_11D_TUMBLAR_DISAPPEARING_3,
    // 1-6 are getting increasingly shorter
    SFX_11E_TUMBLAR_DISAPPEARING_4,
    // 1-6 are getting increasingly shorter
    SFX_11F_TUMBLAR_DISAPPEARING_5,
    // 1-6 are getting increasingly shorter
    SFX_120_TUMBLAR_DISAPPEARING_6,
    // sounds like an OOT sound
    SFX_121_AWAWAU,
    SFX_122_TOOTY_TALKING_3,
    // on rooftiles
    SFX_123_BANJO_LANDING_10,
    // shorter version
    SFX_124_AUDIENCE_CHEERING_1,
    // longer version
    SFX_125_AUDIENCE_CHEERING_2,
    SFX_126_AUDIENCE_BOOING,
    SFX_127_AUDIENCE_MIXED,
    SFX_128_FIRE_CRACKING,
    // might be skeleton grimlets riiping the painting
    SFX_129_SWOOSH,
    SFX_12A_GRUNTY_AH,
    SFX_12B_BOILING_AND_BUBBLING,
    SFX_12C_FF_QUESTION_START,
    SFX_12D_CAMERA_ZOOM_CLOSEST,
    SFX_12E_CAMERA_ZOOM_MEDIUM,
    SFX_12F_FUUUCK_YOUUU,
    // from her final fall
    SFX_130_GRUNTY_ECHOING_CRY = 0x0130,
    SFX_131_GRUNTY_WEEEGH,
    SFX_132_GRUNTY_YOW,
    SFX_133_GRUNTY_OHW,
    SFX_134_FREEZING_SHIVER,
    // FileSelect, when Banjo's Bed ejects him
    SFX_135_CARTOONY_SPRING,
    SFX_136_GAMEBOY_STARTUP,
    SFX_137_GAMEBOY_BOIN,
    SFX_138_GAMEBOY_BOIOIN,
    SFX_139_GAMEBOY_GLITCH,
    SFX_13A_GLASS_BREAKING_7,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_1,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_2,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_3,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_4,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_5,
    // 1-6 are getting increasingly distant
    SFX_GRUNTY_FINAL_SCREAM_6 = 0x0140,
    SFX_141_MECHANICAL_WINCH,
    // pretty short
    SFX_142_GRUNTY_LAUGH_3,
    SFX_143_BULL_DAMAGE,
    SFX_144_DOUBLE_CAMERA_CLICK,
    SFX_145_SINGLE_CAMERA_CLICK,
    // the normal attack
    SFX_146_GRUNTY_SPELL_ATTACK_1,
    // the homing attack
    SFX_147_GRUNTY_SPELL_ATTACK_2,
    SFX_148_GRUNTY_SPELL_LANDING,
    SFX_149_CHEATO_TALKING_1,
    SFX_14A_CHEATO_TALKING_2,
    // when attacking with the broom
    SFX_14B_GRUNTY_LAUGH_4,
    SFX_14C_BRENTILDA_TALKING,
    SFX_14D_BANJO_FREEZING,
    SFX_14E_SOFT_EXPLOSION,
    // grunty's spell attacks flying
    SFX_14F_FIREWORK_WHISTLING,
    SFX_150_PORCELAIN_CRASH,
    // FileSelect, when Banjo's Bed ejects him
    SFX_151_CAT_MEOW,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_152_MOTOR_BREAKDOWN_01,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_02,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_03,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_04,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_05,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_06,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_07,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_08,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_09,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_10,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_11,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_12,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_13,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_14,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_15 = 0x0160,
    // Grunty's Broom; 01-16 getting shorter, more delay
    SFX_MOTOR_BREAKDOWN_16,
    // Grunty's Broom
    SFX_162_MOTOR_RUCKUS,
    SFX_163_GRUNTY_WILD_SCREAM,
    SFX_164_EH,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_01,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_02,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_03,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_04,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_05,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_06,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_07,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_08,
    // 00-15 getting increasingly delayed and shorter
    SFX_HEAVY_THUNDERSTORM_09,
    // 00-15 getting increasingly delayed and shorter
    SFX_170_HEAVY_THUNDERSTORM_10 = 0x170,
    // 00-15 getting increasingly delayed and shorter
    SFX_171_HEAVY_THUNDERSTORM_11,
    // 00-15 getting increasingly delayed and shorter
    SFX_172_HEAVY_THUNDERSTORM_12,
    // 00-15 getting increasingly delayed and shorter
    SFX_173_HEAVY_THUNDERSTORM_13,
    // 00-15 getting increasingly delayed and shorter
    SFX_174_HEAVY_THUNDERSTORM_14,
    // 00-15 getting increasingly delayed and shorter
    SFX_175_HEAVY_THUNDERSTORM_15,
    // 1-3 are having less and less echo
    SFX_176_JINJONATOR_JINJOOO_1,
    // 1-3 are having less and less echo
    SFX_177_JINJONATOR_JINJOOO_2,
    // 1-3 are having less and less echo
    SFX_178_JINJONATOR_JINJOOO_3,
    SFX_179_GRUNTY_DAMAGE,
    SFX_17A_SHIPHORN,
    SFX_17B_AIRPLANE_FALLING,
    SFX_17C_GRUNTY_FALLING_OFF_1,
    SFX_17D_GRUNTY_FALLING_OFF_2,
    // 01-14 are getting slower and lower pitch
    SFX_17E_MUMBO_TRANSFORMATION_01,
    // 01-14 are getting slower and lower pitch
    SFX_17F_MUMBO_TRANSFORMATION_02,
    // 01-14 are getting slower and lower pitch
    SFX_180_MUMBO_TRANSFORMATION_03,
    // 01-14 are getting slower and lower pitch
    SFX_181_MUMBO_TRANSFORMATION_04,
    // 01-14 are getting slower and lower pitch
    SFX_182_MUMBO_TRANSFORMATION_05,
    // 01-14 are getting slower and lower pitch
    SFX_183_MUMBO_TRANSFORMATION_06,
    // 01-14 are getting slower and lower pitch
    SFX_184_MUMBO_TRANSFORMATION_07,
    // 01-14 are getting slower and lower pitch
    SFX_185_MUMBO_TRANSFORMATION_08,
    // 01-14 are getting slower and lower pitch
    SFX_186_MUMBO_TRANSFORMATION_09,
    // 01-14 are getting slower and lower pitch
    SFX_187_MUMBO_TRANSFORMATION_10,
    // 01-14 are getting slower and lower pitch
    SFX_188_MUMBO_TRANSFORMATION_11,
    // 01-14 are getting slower and lower pitch
    SFX_189_MUMBO_TRANSFORMATION_12,
    // 01-14 are getting slower and lower pitch
    SFX_18A_MUMBO_TRANSFORMATION_13,
    // 01-14 are getting slower and lower pitch
    SFX_18B_MUMBO_TRANSFORMATION_14,
    SFX_18C_EYRIE_MAMA,
    SFX_18D_SEXY_GRUNTY_TALKING_1,
    SFX_18E_SEXY_GRUNTY_TALKING_2,
    SFX_18F_FREEZE_FRAME,
    SFX_190_GULP = 0x0190,
    SFX_191_STATIC,

    SFX_3E9_UNKNOWN = 0x3e9, //bsbwhirl
    SFX_3EA_UNKNOWN,         //chjig
    SFX_3EB_UNKNOWN,         //bstimeout
    SFX_3EC_CCW_DOOR_OPENING,         //ccw and GV opening
    SFX_3ED,
    SFX_3EE,
    SFX_3EF,
    SFX_3F0_FLIBBIT_TALKING,
    SFX_3F1_UNKNOWN, //bsstand
    SFX_3F2_UNKNOWN, //gold_chest_ttc

    SFX_3F5_UNKNOWN = 0x3F5, //RBB/code_5F80
    SFX_3F6_UNKNOWN, //lair/code_0
    SFX_3F7_UNKNOWN, //gv/histup
    SFX_3F8_UNKNOWN, //gv/histup
    SFX_3F9_UNKNOWN, //chmole
    SFX_3FA_HONEYCOMB_TALKING,
    SFX_3FB_UNKNOWN, //conga

    SFX_405_UNKNOWN = 0x405,
    SFX_406_GOLD_BULLION_TALKING,
    SFX_407_MUMBO_TALKING_1,
    SFX_408_MUMBO_TALKING_2,
    SFX_409_MUMBO_TALKING_3,
    SFX_40A_MUMBO_TALKING_4,
    SFX_40B_MUMBO_TALKING_5,
    SFX_40C_MUSIC_NOTE_TALKING,

    SFX_40E_UNKNOWN = 0x40e,
    SFX_40F_TICKER_TALKING,

    SFX_412_FREEZING_WATER_TALKING = 0x412,
    SFX_413_WATER_RIPPLE,
    SFX_414_XMAS_GIFT_TALKING,
    SFX_415_UNKNOWN, //xmas tree
    SFX_416,
    SFX_417_UNKNOWN, //double health

    SFX_419_UNKNOWN = 0x419,
    SFX_41A_UNKNOWN = 0x41a
};

#endif
