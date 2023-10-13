#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "actor.h"

f32 time_getDelta();
Actor *actor_drawFullDepth(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func_80389E10(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func_8038664C(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
Actor *func_80387DA8(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
void chFloorCobweb_update(Actor *);
void chWallCobweb_update(Actor *);
Actor *lair_func_80387560(ActorMarker *marker, Gfx **gfx, Mtx **mtx, Vtx **vtx);
void func_802D3D54(Actor *);
void func_80326224(Actor *);
void func_80386780(Actor *);
void func_80386D78(Actor *);
void func_803867A8(Actor *);
void func_80386D20(Actor *);
void func_803870DC(Actor *);
void func_803875F0(Actor *);
void func_80387730(Actor *);
void func_803880BC(Actor *);
void func_8038824C(Actor *);
void func_803882B0(Actor *);
void func_80388524(Actor *);
void func_80388FC8(Actor *);
void func_803893B8(Actor *);
void func_803896D4(Actor *);
void func_803896F4(Actor *);
void func_80389714(Actor *);
void func_80389734(Actor *);
void func_8038975C(Actor *);
void func_80389784(Actor *);
void func_803897AC(Actor *);
void func_8038982C(Actor *);
void func_80389898(Actor *);
void func_80389934(Actor *);
void func_80389D08(Actor *);
void func_80389FF4(Actor *);
void func_8038A014(Actor *);
void func_8038A034(Actor *);
void func_8038A064(Actor *);
void func_8038A0A4(Actor *);
void func_8212A060(Actor *);
void lair_func_80386550(Actor *);
void lair_func_80389204(Actor *);
void lair_func_803894B0(Actor *);
void lair_func_8038A084(Actor *);
//void (Actor *);

#endif
