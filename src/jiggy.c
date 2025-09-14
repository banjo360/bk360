#include "functions.h"
#include "particle.h"
#include "jiggy.h"

void chjiggy_setJiggyId(Actor *actor, s32 id)
{
    actor->jiggy.index = id;
}

void destroyJiggy(Actor *this, s32 jiggyFlag, s32 timerRunningFlag, s32 cameraId, s32 switchPressedFlag, s32 resetSwitchFlag, enum volatile_flags_e dialogFlag) {
    if (mapSpecificFlags_get(jiggyFlag) == 0
        && mapSpecificFlags_get(timerRunningFlag) != 0
        && item_getCount(ITEM_0_HOURGLASS_TIMER) == 0)
    {
        JiggyLocal* local = &this->jiggy;
        player_setModelVisible(1);
        actor_collisionOff(this);

        gcStaticCamera_activate(cameraId);

        progressDialog_setAndTriggerDialog_0(dialogFlag);

        timedFunc_set_4(0.6f, (GenFunction_4)spawnJiggyDestroyedEffects, (s32)this->position[0], (s32)this->position[1], (s32)this->position[2], switchPressedFlag);
        timedFunc_set_2(0.6f, (GenFunction_2)playJiggyDestroyedSoundsAndReset, (s32)this->marker, resetSwitchFlag);
        if (local->index == 0x25) {
            timedFunc_set_0(1.0f, (GenFunction_0)func_802BE720);
        }
        timedFunc_set_1(3.9f, (GenFunction_1)resetFlag, switchPressedFlag);
        mapSpecificFlags_set(jiggyFlag, TRUE);
    }
}

Actor *chjiggy_draw(ActorMarker *this, Gfx **gdl, Mtx **mptr, Vtx **vtx) {
    Actor *jiggy_actor = marker_getActor(this);
    JiggyLocal* local = &jiggy_actor->jiggy;

    if (!local->isHidden) {
        if ((local->index == JIGGY_1C_CC_RINGS) || (local->index == JIGGY_1D_CC_SLOW_SAWBLADES)) {
            func_8033A280(10.0f);
            func_8033A244(30000.0f);
        }

        jiggy_actor = actor_draw(this, gdl, mptr, vtx);
    }

    return jiggy_actor;
}

void chjiggy_update(Actor *this) {
    JiggyLocal* local = &this->jiggy;

    // A small chance to show a jiggy shine effect. Up to four can be shown at once.
    if (this->marker->unk14_21) {
        s32 i;
        for (i = 0; i < 4; i++) {
            if (randf() < 0.015) {
                commonParticle_add(this->marker, i + 5, func_80329904);
                commonParticle_new(COMMON_PARTICLE_8_JIGGY_SHINE, 1);
            }
        }
    }

    if ((this->unk170 & 0x10) == 0)
    {
        switch (this->jiggy.index)
        {
        case 0x20:
            if (mapSpecificFlags_get(4) && mapSpecificFlags_get(3) && item_getCount(0) == 0)
            {
                mapSpecificFlags_set(4, 0);
            }
            break;

        case 0x25:
            if (mapSpecificFlags_get(0xD) && mapSpecificFlags_get(0xC) && item_getCount(0) == 0)
            {
                mapSpecificFlags_set(0xD, 0);
            }
            break;
        }

        this->unk170 |= 0x10;
    }

    switch (this->unk10 >> 0x1a) {
        case JIGGY_STATE_1_INIT:
            local->isHidden = FALSE;

            if (local->index == 0) {
                local->index = getJiggyId(this);
            }

            if (jiggyscore_isCollected(local->index)) {
                marker_despawn(this->marker);
            } else {
                subaddie_set_state(this, JIGGY_STATE_2_IDLE);
                switch (this->jiggy.index) {
                    case JIGGY_17_CC_CLANKER_RAISED:
                    case JIGGY_49_CCW_EYRIE:
                        this->marker->unk40_21 = 1;
                        break;

                    case JIGGY_36_LAIR_TTC_WITCH_SWITCH:
                        this->unk44_14 = func_80341F2C(0x20A);
                        this->unk48 = 0.0f;
                        this->unk4C = 300.0f;
                        this->marker->unk2C = this->marker->unk2C | 4;
                        this->unk54 = 0.0f;
                        n64_func_80343DEC(this);
                        chjiggy_updateRotation(this);
                        break;

                    case JIGGY_3E_GV_GRABBA:
                    case JIGGY_4D_CCW_FLOWER:
                        this->unk128 = this->unk128 & 0xFFFFFFBF;
                        break;

                    case JIGGY_41_GV_MAZE:
                        this->marker->unk14_10 = 30;
                        break;

                    case JIGGY_13_TTC_LOCKUP:
                        this->marker->unk14_10 = 40;
                        break;
                }
            }

            break;

        case JIGGY_STATE_2_IDLE:
            chjiggy_updateRotation(this);

            switch (this->jiggy.index) {
                case JIGGY_20_BGS_ELEVATED_WALKWAY:
                    destroyJiggy(this, BGS_SPECIFIC_FLAG_WALKWAY_JIGGY, BGS_SPECIFIC_FLAG_WALKWAY_JIGGY_TIMER_RUNNING, STATIC_CAMERA_D_WALKWAY_JIGGY_DESTROY,
                        BGS_SPECIFIC_FLAG_WALKWAY_JIGGY_SWITCH_PRESSED, BGS_SPECIFIC_FLAG_WALKWAY_JIGGY_RESET, VOLATILE_FLAG_AE_BGS_WALKWAY_JIGGY_MISSED);
                    break;

                case JIGGY_25_BGS_MAZE:
                    destroyJiggy(this, BGS_SPECIFIC_FLAG_MAZE_JIGGY, BGS_SPECIFIC_FLAG_MAZE_JIGGY_TIMER_RUNNING, STATIC_CAMERA_1E_MAZE_JIGGY_DESTROY,
                        BGS_SPECIFIC_FLAG_MAZE_JIGGY_SWITCH_PRESSED, BGS_SPECIFIC_FLAG_MAZE_JIGGY_RESET, VOLATILE_FLAG_AF_BGS_MAZE_JIGGY_MISSED);
                    break;

                case JIGGY_2F_FP_XMAS_TREE:
                    if (levelSpecificFlags_get(LEVEL_FLAG_29_FP_UNKNOWN)) {
                        actor_collisionOn(this);
                    } else {
                        actor_collisionOff(this);
                    }
                    break;
            }

            break;
    }
}
