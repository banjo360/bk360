#include "functions.h"
#include "jinjos.h"

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

ActorInfo chJinjoBlue   = { MARKER_5A_JINJO_BLUE,   ACTOR_60_JINJO_BLUE,   ASSET_3C0_MODEL_JINJO_BLUE,   0x1, chJinjoAnimations, chJinjo_update, func_8212a060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoGreen  = { MARKER_5B_JINJO_GREEN,  ACTOR_62_JINJO_GREEN,  ASSET_3C2_MODEL_JINJO_GREEN,  0x1, chJinjoAnimations, chJinjo_update, func_8212a060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoYellow = { MARKER_5E_JINJO_YELLOW, ACTOR_5E_JINJO_YELLOW, ASSET_3BB_MODEL_JINJO_YELLOW, 0x1, chJinjoAnimations, chJinjo_update, func_8212a060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoPink   = { MARKER_5D_JINJO_PINK,   ACTOR_61_JINJO_PINK,   ASSET_3C1_MODEL_JINJO_PINK,   0x1, chJinjoAnimations, chJinjo_update, func_8212a060, actor_draw, 0, 0, 0.0f, 0};
ActorInfo chJinjoOrange = { MARKER_5C_JINJO_ORANGE, ACTOR_5F_JINJO_ORANGE, ASSET_3BC_MODEL_JINJO_ORANGE, 0x1, chJinjoAnimations, chJinjo_update, func_8212a060, actor_draw, 0, 0, 0.0f, 0};

const f32 D_8200183c = 230.f;
const f32 D_82001580 = 360.f;
const f64 D_8200c050 = 0.02222222222222222;
const f32 D_820007a0 = 0.0f;

void chjiggy_updateRotation(Actor *this)
{
    f32 tmpf;
    tmpf = time_getDelta();

    tmpf = tmpf * D_8200183c + this->unk54;
    this->unk54 = tmpf;

    if (D_82001580 <= tmpf)
    {
        this->unk54 = tmpf - D_82001580;
    }

    this->pitch = this->unk54;
}

void Function_82183A08(Actor *this)
{
    n64_func_80343DEC(this);
    chjiggy_updateRotation(this);
}

s32 FUN_82183a40(Unk_82183a40_s *param_1)
{
    return param_1->unk84;
}

void FUN_82183a48(Actor *param_1)
{
    param_1->isHidden = 1;
    actor_collisionOff(param_1);
}

/*
void __chJinjo_clamp_rotation(Actor *this, s16 arg1)
{
    f32 tmpf = this->unk54;
    tmpf -= arg1 * time_getDelta() * D_8200c050;

    if (tmpf >= D_82001580)
    {
        tmpf = tmpf - D_82001580;
    }
    else if (tmpf < D_820007a0)
    {
        tmpf = tmpf + D_82001580;
    }

    this->unk54 = tmpf;
}
*/
