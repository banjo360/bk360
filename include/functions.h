#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "actor.h"

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
void func_8212A060(Actor *);
void func_821a8030(Actor *);
void func_821a8040(Actor *);
void lair_func_821a4e78(Actor *);
void lair_func_821a7448(Actor *);
void lair_func_821a76a8(Actor *);
void lair_func_821a8038(Actor *);
//void (Actor *);

#endif
