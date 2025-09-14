#include "enums.h"
#include "functions.h"

extern s32 sSpawnableActorSize;
extern ActorSpawn *sSpawnableActorList;
extern const char * D_82003cec;
extern const char * D_82003bd8;
/*
void spawnableActorList_new(void)
{
    sSpawnableActorList = malloc(0, D_82003cec);
    sSpawnableActorSize = 0;
}

void spawnableActorList_free()
{
    free(sSpawnableActorList, D_82003bd8, 0x83a);
    sSpawnableActorList = 0;
    sSpawnableActorSize = 0;
}

void spawnableActorList_add(ActorInfo *arg0, Actor *(*arg1)(s32[3], s32, ActorInfo *, u32), u32 arg2)
{
    ActorSpawn* last;
    s32 prev = sSpawnableActorSize;

    sSpawnableActorSize++;
    sSpawnableActorList = realloc(sSpawnableActorList, sSpawnableActorSize*sizeof(ActorSpawn));
    last = &sSpawnableActorList[prev];
    last->infoPtr = arg0;
    last->spawnFunc = arg1;
    last->unk8 = arg2;
}
*/
void spawnableActorList_addIfMapVisited(ActorInfo *arg0, Actor *(*arg1)(s32[3], s32, ActorInfo *, u32), u32 arg2, enum map_e arg3)
{
    if(level_get() != LEVEL_6_LAIR || (level_get() == LEVEL_6_LAIR && FUN_8219f2e8(arg3)))
    {
        spawnableActorList_add(arg0, arg1, arg2);
    }
}
