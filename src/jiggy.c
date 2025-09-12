#include "functions.h"

void chjiggy_setJiggyId(Actor *actor, s32 id)
{
    actor->index = id;
}

void destroyJiggy(Actor *this, s32 jiggyFlag, s32 timerRunningFlag, s32 cameraId, s32 switchPressedFlag, s32 resetSwitchFlag, enum volatile_flags_e dialogFlag) {
    if (mapSpecificFlags_get(jiggyFlag) == 0
        && mapSpecificFlags_get(timerRunningFlag) != 0
        && item_getCount(ITEM_0_HOURGLASS_TIMER) == 0)
    {
        player_setModelVisible(1);
        actor_collisionOff(this);

        gcStaticCamera_activate(cameraId);

        progressDialog_setAndTriggerDialog_0(dialogFlag);

        timedFunc_set_4(0.6f, (GenFunction_4)spawnJiggyDestroyedEffects, (s32)this->position[0], (s32)this->position[1], (s32)this->position[2], switchPressedFlag);
        timedFunc_set_2(0.6f, (GenFunction_2)playJiggyDestroyedSoundsAndReset, (s32)this->marker, resetSwitchFlag);
        if (this->index == 0x25) {
            timedFunc_set_0(1.0f, (GenFunction_0)func_802BE720);
        }
        timedFunc_set_1(3.9f, (GenFunction_1)resetFlag, switchPressedFlag);
        mapSpecificFlags_set(jiggyFlag, TRUE);
    }
}
