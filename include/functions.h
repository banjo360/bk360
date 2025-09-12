#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "actor.h"
#include "audio.h"
#include "items.h"

f32 time_getDelta();
Actor *actor_drawFullDepth(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *actor_draw(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func______(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func_____(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func____(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
void chFloorCobweb_update(Actor *);
void chWallCobweb_update(Actor *);
Actor *lair_func_821a5bc0(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
void func_8212a060(Actor *);
void func_8219ddc0(Actor *);
void func_821a4fc0(Actor *);
void func_821a50d8(Actor *);
void func_821a50e8(Actor *);
void func_821a5558(Actor *);
void func_821a5830(Actor *);
void func_821a5c38(Actor *);
void func_821a5d48(Actor *);
void func_821a6270(Actor *);
void func_821a6550(Actor *);
void func_821a66d0(Actor *);
void func_821a6708(Actor *);
void func_821a68e8(Actor *);
void func_821a7250(Actor *);
void func_821a75d0(Actor *);
void func_821a7868(Actor *);
void func_821a7870(Actor *);
void func_821a7878(Actor *);
void func_821a7880(Actor *);
void func_821a7890(Actor *);
void func_821a78a0(Actor *);
void func_821a78b0(Actor *);
void func_821a7928(Actor *);
void func_821a7998(Actor *);
void func_821a7a28(Actor *);
void func_821a7d70(Actor *);
void func_821a7e60(Actor *);
void func_821a8008(Actor *);
void func_821a8010(Actor *);
void func_821a8018(Actor *);
void func_821a8030(Actor *);
void func_821a8040(Actor *);
void n64_func_80343DEC(Actor *);
void actor_collisionOff(Actor *);
s32 n64_func_80311480(s32 text_id, s32 arg1, f32 *pos, ActorMarker *marker, void(*callback)(ActorMarker *, enum asset_e, s32), void(*arg5)(ActorMarker *, enum asset_e, s32));
void spawnableActorList_add(ActorInfo *arg0, Actor *(*arg1)(s32[3], s32, ActorInfo *, u32), u32 arg2);
s32 level_get();
s32 FUN_8219f2e8(s32);
void* malloc(s32, char*);
void* realloc(void*, s32);
void free(void*, char*, s32);
void n64_func_802599B4(CoMusic*);
CoMusic* FUN_820c5060(enum comusic_e track_id);
void n64_func_8025A96C();
s32 mapSpecificFlags_get(s32 i);
s32 item_getCount(enum item_e item);
void player_setModelVisible(bool visible);
void gcStaticCamera_activate(s32 arg0);
void timedFunc_set_0(f32 time, GenFunction_0 funcPtr);
void timedFunc_set_1(f32 time, GenFunction_1 funcPtr, s32 arg0);
void timedFunc_set_2(f32 time, GenFunction_2 funcPtr, s32 arg0, s32 arg1);
void timedFunc_set_3(f32 time, GenFunction_3 funcPtr, s32 arg0, s32 arg1, s32 arg2);
void timedFunc_set_4(f32 time, GenFunction_4 funcPtr, s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void timedFunc_set_5(f32 time, GenFunction_5 funcPtr, s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void timedFunc_set_6(f32 time, GenFunction_6 funcPtr, void* argPtr );
void timedJiggySpawn(f32 time, s32 jiggyId, f32 *position);
void spawnJiggyDestroyedEffects(u32 x, u32 y, u32 z, u32 resetSwitchFlag);
void resetFlag(enum bgs_specific_flags flag);
void mapSpecificFlags_set(s32, s32);
void progressDialog_setAndTriggerDialog_0(enum volatile_flags_e id);
void playJiggyDestroyedSoundsAndReset(ActorMarker *marker, u32 resetSwitchFlag);
void func_802BE720(void);

//void (Actor *);

#endif
