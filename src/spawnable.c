#include "actor.h"
#include "map.h"

void spawnableActorList_add(ActorInfo *arg0, Actor *(*arg1)(s32[3], s32, ActorInfo *, u32), u32 arg2);

void spawnableActorList_addIfMapVisited(ActorInfo *arg0, Actor *(*arg1)(s32[3], s32, ActorInfo *, u32), u32 arg2, enum map_e arg3){
    if( level_get() != LEVEL_6_LAIR
        || (level_get() == LEVEL_6_LAIR && FUN_8219f2e8(arg3))
    ){
        spawnableActorList_add(arg0, arg1, arg2);
    }
}
