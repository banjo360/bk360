#ifndef ACTOR_H
#define ACTOR_H

#include "defines.h"

typedef struct AnimCtrl_s AnimCtrl;

typedef struct ActorAnimationInfo_s {
    u32 a;
    float b;
} ActorAnimationInfo;

typedef struct ActorMarker_s {
    void* propPtr;
    void* cubePtr;
    void* drawFunc;
    void* collisionFunc;
    void* collision2Func;
    u32 yaw:9;
    u32 unk14_22:1;
    u32 unk14_21:1; // correct (used in chjiggy_update)
    u32 id:10;
    u32 unk14_10:11;
    u8 padding_18[0x2C-0x18];
    u32 actrArrayIdx:11;
    u32 pitch:9;
    u32 roll:9;
    u32 unk2C_2:1; // correct (used in chjiggy_update)
    u32 unk2C_1:1;
    u32 collidable:1;
    u8 padding_30[0x40-0x30];
    u32 unk40_31:4;
    u32 unk40_27:4;
    u32 unk40_23:1;
    u32 unk40_22:1;
    u32 unk40_21:1; // correct (used in chjiggy_update)
    u32 unk40_20:1;
    u32 unk40_19:1;
    u32 pad40_18:19;
} ActorMarker;


typedef struct JiggyLocal_s {
    s32 isHidden;
    s32 index;
} JiggyLocal;

typedef struct Actor_s {
    ActorMarker* marker;
    TUPLE(f32,position);
    u32 state:6; // correct (used in chjiggy_update)
    u32 unk10_25:7;
    u32 unk10_18:6;
    u32 unk10_12:4;
    u32 unk10_8:1;
    u32 unk10_7:1;
    u32 unk10_6:2;
    u32 unk10_4:1;
    u32 unk10_3:2;
    u32 unk10_1:1;
    u32 unk10_0:1;
    AnimCtrl *animctrl;
    ActorAnimationInfo *unk18;
    TUPLE(f32, unk1C);
    f32 unk28;
    TUPLE(f32, velocity);
    u32  unk38_31:10;
    u32  unk38_21:9;
    u32  unk38_13:9;
    u32  stored_animctrl_playbackType_:3;
    u32  unk38_0:1;
    u32 unk3C;
    s32 unk40;
    s32 unk40_2;
    u32 modelCacheIndex:10;
    s32 unk44_14:10; // correct (used in chjiggy_update)
    u32 unk44_10:8;
    u32 despawn_flag:1;
    u32 unk44_2:1;
    u32 unk44_1:1;
    u32 unk44_0:1;
    f32 unk48;
    f32 unk4C;
    f32 yaw;
    f32 unk54;
    u32 unk58_31: 15;
    u32 stored_animctrl_index: 14;
    u32 unk58_2: 1;
    u32 unk58_1: 1;
    u32 unk58_0: 1;
    f32 unk60;
    f32 yaw_ideal;
    f32 pitch;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u32 unk78;
    u32 unk7C;
    union {
        JiggyLocal jiggy;
        u8 local[0x8];
    };
    u8 pad88[0x128 - 0x88];
    s32 unk128;
    u8 pad12C[0x170 - 0x12C];
    u32 unk170_5:27;
    u32 unk170_4:1; // correct (used in chjiggy_update)
    u32 unk170_0:4;
} Actor;

typedef struct Unk_82183a40_s {
    u8 unk[0x84];
    u32 unk84;
} Unk_82183a40_s;

typedef struct Gfx_s {
	int x;
} Gfx;

typedef struct Mtx_s {
	int x;
} Mtx;

typedef struct Vtx_s {
	int x;
} Vtx;

typedef struct actor_info_s{
    s16     markerId;
    s16     actorId;
    s16     modelId;
    s16     startAnimation;
    ActorAnimationInfo*   animations;
    void    (* update_func)(Actor *);
    void    (* unk10)(Actor *);
    Actor*  (* draw_func)(ActorMarker *, Gfx **, Mtx **, Vtx **);
    u16     unk18;
    u16     draw_distance;
    f32     shadow_scale;
    u16     unk20;
} ActorInfo;

typedef struct actor_spawn_s{
    ActorInfo   *infoPtr;
    Actor *(*spawnFunc)(s32[3], s32, ActorInfo*, u32);
    s32         unk8;
} ActorSpawn;

Actor *actor_draw(ActorMarker *, Gfx**, Mtx**, Vtx **);

#endif
