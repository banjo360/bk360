#include "actor.h"
#include "functions.h"
#include "marker.h"
#include "asset.h"
#include "flags.h"

ActorAnimationInfo D_8246c910[] = {
    {    0,   0.0f}, 
    {    0,   0.0f},
    { 0xD4,   0.15f}, 
    { 0xD5,   0.5f},
    {    0,   0.0f}, 
    {    0,   0.0f},
    { 0xD4,   0.15f}, 
    { 0xD5,   0.5f},
    { 0xD5, 1e+08f}, 
    {0x1E3,   0.73},
    {0x1E3, 1e+08f}, 
    {0x1F0,   1.0f},
    {0x1F1,   0.7f}, 
    {0x1F1, 1e+08f},
    {0x1F2,   1.0f}, 
    {0x1F3,   0.4f},
    {0x1F3, 1e+08f}, 
    {    0,   0.0f},
    {0x218, 1e+08f}, 
    {0x218,   1.0f},
    {0x218, 1e+08f}, 
    {0x235, 1e+08f},
    {0x235, 1e+08f}, 
    {0x235,   1.0f},
    {0x235, 1e+08f}, 
    {0x271, 1e+08f},
    {0x271,   3.0f}, 
    {0x271, 1e+08f}
};
ActorInfo D_8246c9f0 = { 0x270, 0x2D8, 0x3B2, 0x1, NULL, func_802D3D54, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246ca14 = { 0x110, 0x214, 0x4AB, 0x1, D_8246c910, func_803896D4, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246ca38 = { 0x113, 0x217, 0x4A9, 0x1, D_8246c910, func_803896F4, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246ca5c = { 0x115, 0x219, 0x4AA, 0x1, D_8246c910, func_80389714, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246ca80 = { 0x11B, 0x221, 0x4B5, 0x1, D_8246c910, func_80389734, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246caa4 = { 0x11C, 0x222, 0x4B2, 0x1, D_8246c910, func_8038975C, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246cac8 = { 0x11D, 0x223, 0x4B0, 0x1, D_8246c910, func_80389784, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246caec = { 0x232, 0x23C, 0x4B8, 0x1, D_8246c910, func_803897AC, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246cb10 = { 0x23F, 0x246, 0x534, 0x1, D_8246c910, func_80386D20, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246cb34 = { 0x241, 0x248, 0x540, 0x1, D_8246c910, func_80386780, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246cb58 = { MARKER_109_BREAKABLE_BRICK_WALL, ACTOR_20D_BREAKABLE_BRICK_WALL, ASSET_4A1_MODEL_BREAKABLE_BRICK_WALL, 0x1, D_8246c910, lair_func_80386550, func_80326224, actor_draw, 0, 0,   0.0f, 0x85};
ActorInfo D_8246cb7c = { 0x264, 0x2E5, 0x550, 0x19, D_8246c910, func_80388524, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246cba0 = { MARKER_224_BREAKABLE_FLOOR_COBWEB, ACTOR_230_BREAKABLE_FLOOR_COBWEB, ASSET_4BF_MODEL_FLOOR_COBWEB, 0xB, D_8246c910, chFloorCobweb_update, func_80326224, actor_draw, 0, 0,   0.0f, 0x88};
ActorInfo D_8246cbc4 = { MARKER_225_BREAKABLE_WALL_COBWEB,  ACTOR_231_BREAKABLE_WALL_COBWEB, ASSET_4D5_MODEL_WALL_COBWEB, 0xE, D_8246c910, chWallCobweb_update, func_80326224, actor_draw, 0, 0,   0.0f, 0x88};
ActorInfo D_8246cbe8 = { 0x111, 0x215, 0x4A4, 0x1, NULL, func_80388FC8, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cc0c = { 0x112, 0x216, 0x4A5, 0x1, NULL, func_80388FC8, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cc30 = { 0x114, 0x218, 0x4A6, 0x1, NULL, lair_func_80389204, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cc54 = { 0x10D, 0x211, 0x4A3, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cc78 = { 0x22C, 0x23A, 0x4D9, 0x1, NULL, func_803882B0, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cc9c = { 0x164, 0x259, 0x507, 0x1, NULL, func_803880BC, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246ccc0 = { 0x165, 0x25A, 0x508, 0x1, NULL, func_8038824C, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cce4 = { MARKER_240_LAIR_SWITCH_FLIGHT_PAD, 0x247, 0x48A, 0x1, NULL, func_80386D78, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cd08 = { 0x242, 0x249, 0x2DD, 0x1, NULL, func_803867A8, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cd2c = { 0x11F, 0x225, 0x4B3, 0x1, NULL, func_8038A064, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cd50 = { 0x10A, 0x20E, 0x4A2, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246cd74 = { 0x11A, 0x220, 0x4B7, 0x1, NULL, func_80389FF4, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x91};
ActorInfo D_8246cd98 = { 0x11E, 0x224, 0x4AF, 0x1, NULL, func_8038A014, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x83};
ActorInfo D_8246cdbc = { 0x227, 0x234, 0x4D6, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x93};
ActorInfo D_8246cde0 = { 0x228, 0x235, 0x4D7, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x8B};
ActorInfo D_8246ce04 = { 0x229, 0x236, 0x4D8, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x8B};
ActorInfo D_8246ce28 = { MARKER_121_GLASS_EYE, ACTOR_227_GLASS_EYE, ASSET_4BD_MODEL_GLASS_EYE, 0x1, NULL, func_8038A034, func_80326224, actor_draw, 0, 0,   0.0f, 0x89};
ActorInfo D_8246ce4c = { 0x116, 0x21A, 0x4AC, 0x1, NULL, func_803893B8, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x82};
ActorInfo D_8246ce70 = { 0x117, 0x21B, 0x4AD, 0x1, NULL, lair_func_803894B0, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x82};
ActorInfo D_8246ce94 = { 0x10B, 0x20F, 0x4B4, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x90};
ActorInfo D_8246ceb8 = { 0x10C, 0x210, 0x4AE, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x84};
ActorInfo D_8246cedc = { 0x10E, 0x212, 0x4A7, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x7F};
ActorInfo D_8246cf00 = { 0x120, 0x226, 0x4BC, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x87};
ActorInfo D_8246cf24 = { 0x122, ACTOR_228_MMM_ENTRANCE_DOOR, 0x4BE, 0x1, NULL, func_80388524, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x8C};
ActorInfo D_8246cf48 = { 0x10F, 0x213, 0x4A8, 0x1, NULL, func_803875F0, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x80};
ActorInfo D_8246cf6c = { 0x118, 0x21E, 0x4B1, 0x1, NULL, lair_func_8038A084, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x8F};
ActorInfo D_8246cf90 = { 0x119, 0x21F, 0x4B6, 0x1, NULL, func_8038A0A4, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0x92};
ActorInfo D_8246cfb4 = { 0x266, 0x2E3, 0x563, 0x1, NULL, func_803870DC, func_80326224, lair_func_80387560, 0, 0,   0.0f, 0};
ActorInfo D_8246cfd8 = { 0x17D, 0x1E1, 0x517, 0x1, NULL, func_80389D08, func_80326224, func_80389E10, 0, 0,   0.0f, 0x8D};
ActorInfo D_8246cffc = { 0x234, 0x23E, 0x4E1, 0x12, D_8246c910, func_8038982C, func_80326224, actor_drawFullDepth, 0, 0,   0.0f, 0};
ActorInfo D_8246d020 = { 0x163, 0x258, 0x511, 0x12, D_8246c910, func_80389898, func_80326224, func_8038664C, 0, 0,   0.0f, 0x8E};
ActorInfo D_8246d044 = { 0x160, 0x255, 0x509, 0x15, D_8246c910, func_80389934, func_80326224, actor_draw, 0, 0,   0.0f, 0};
ActorInfo D_8246d068 = { 0x102, 0x203, 0x491, 0x1, D_8246c910, func_80387730, func_80326224, func_80387DA8, 0, 0,   0.0f, 0};
struct31s D_8039342C = {
    {0.31f, 0.37f},
    {0.17f, 0.22f},
    {0.0f,  0.01f},
    {0.9f,  0.9f},
    {0.0f, 0.0f}
}; 
s16 D_80393454[] = {
    FILEPROG_31_MM_OPEN, 
    FILEPROG_32_TTC_OPEN,
    FILEPROG_33_CC_OPEN,
    FILEPROG_34_BGS_OPEN,
    FILEPROG_35_FP_OPEN,
    FILEPROG_36_GV_OPEN,
    FILEPROG_37_MMM_OPEN,
    FILEPROG_38_RBB_OPEN,
    FILEPROG_39_CCW_OPEN,
    0
};

s16 D_80393468[] = {
    0, 
    0, 
    UNKFLAGS1_7F_SANDCASTLE_OPEN_CC, 
    UNKFLAGS1_84_SANDCASTLE_OPEN_BGS, 
    UNKFLAGS1_8B_SANDCASTLE_OPEN_FP, 
    UNKFLAGS1_87_SANDCASTLE_OPEN_GV, 
    UNKFLAGS1_8C_SANDCASTLE_OPEN_MMM, 
    UNKFLAGS1_90_SANDCASTLE_OPEN_RBB, 
    UNKFLAGS1_93_SANDCASTLE_OPEN_CCW, 
    0
};

s16 notedoor_notes_required_to_open[] = {50, 180, 260, 350, 450, 640, 765, 810, 828, 846, 864, 882};

s16 D_80393494[]  = {0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B}; 
s32 D_803934A0[3] = {0x00, 0xFF, 0x00};
struct31s D_803934AC = {
    {1.0f, 2.0f},
    {2.4f, 5.0f},
    {0.0f, 3.2f},
    {3.8f, 5.0f},
    {0.31f, 0.93f}
};
struct42s D_803934D4 = {
    {{-80.0f, 30.0f, -80.0f}, {80.0f, 270.0f, 80.0f}},
    {{40.0f, 0.0f, -50.0f}, {100.0f, 200.0f, 50.0f}},
};
s32 D_80393504[4] = {0x87, 0x87, 0x87, 0xB4};
