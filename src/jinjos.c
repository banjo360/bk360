#include "asset.h"
#include "actor.h"
#include "functions.h"
#include "jinjos.h"
#include "marker.h"

ActorAnimationInfo chJinjoAnimations[] = {
    {0, 0.0f},
    {ASSET_2D_ANIM_JINJO_IDLE, 1000000.0f},
    {ASSET_2D_ANIM_JINJO_IDLE, 1.5f},
    {ASSET_2F_ANIM_JINJO_HELP, 1.5f},
    {ASSET_31_ANIM_JINJO_JUMP, 0.75f},
    {ASSET_2D_ANIM_JINJO_IDLE, 1000000.0f},
    {ASSET_31_ANIM_JINJO_JUMP, 0.4f},
    {ASSET_130_ANIM_JINJO_FLY_START, 1.75f},
    {ASSET_131_ANIM_JINJO_FLY_END, 2.13333f},
    {ASSET_31_ANIM_JINJO_JUMP, 0.75f}
};

ActorInfo chJinjoBlue   = { MARKER_5A_JINJO_BLUE,   ACTOR_60_JINJO_BLUE,   ASSET_3C0_MODEL_JINJO_BLUE,   0x1, chJinjoAnimations, chJinjo_update, fun_8212A060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoGreen  = { MARKER_5B_JINJO_GREEN,  ACTOR_62_JINJO_GREEN,  ASSET_3C2_MODEL_JINJO_GREEN,  0x1, chJinjoAnimations, chJinjo_update, fun_8212A060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoYellow = { MARKER_5E_JINJO_YELLOW, ACTOR_5E_JINJO_YELLOW, ASSET_3BB_MODEL_JINJO_YELLOW, 0x1, chJinjoAnimations, chJinjo_update, fun_8212A060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoPink   = { MARKER_5D_JINJO_PINK,   ACTOR_61_JINJO_PINK,   ASSET_3C1_MODEL_JINJO_PINK,   0x1, chJinjoAnimations, chJinjo_update, fun_8212A060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoOrange = { MARKER_5C_JINJO_ORANGE, ACTOR_5F_JINJO_ORANGE, ASSET_3BC_MODEL_JINJO_ORANGE, 0x1, chJinjoAnimations, chJinjo_update, fun_8212A060, actor_draw, 0, 0, 0.0f, 0};
