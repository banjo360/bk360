#include "defines.h"

typedef struct struct_11_s
{
    f32 unk0;
    f32 unk4;
    s32 unk8;
    s32 unkC;
    s16 track_id; //trackId
    s16 unk12;
    u8 unk14;
    u8 unk15;
    u8 pad16[0x2];
    FREE_LIST(struct12s) *unk18;
    s32 unk1C[0xE];
} CoMusic;

enum comusic_e
{
    COMUSIC_0_DING_A = 0x00,
    COMUSIC_1_FINAL_BATTLE
};

void n64_func_802599B4(CoMusic*);
CoMusic* FUN_820c5060(enum comusic_e track_id);
extern CoMusic *n64_D_80276E30;

void n64_func_8025AA48()
{
    CoMusic *iPtr2;

    for (iPtr2 = n64_D_80276E30; iPtr2 < n64_D_80276E30 + 6; iPtr2++)
    {
        if (iPtr2->track_id >= 0 && !iPtr2->unk14)
        {
            n64_func_802599B4(iPtr2);
        }
    }
}

void N64_func_8025AABC(enum comusic_e track_id)
{
    CoMusic* iVar1 = FUN_820c5060(track_id);
    if (iVar1 != NULL)
    {
        iVar1->unk15 = 1;

        if (iVar1->unk8 == 0)
        {
            n64_func_802599B4(iVar1);
        }
    }
}

void n64_func_8025AB00()
{
    CoMusic* iVar1 = n64_D_80276E30;

    iVar1->unk15 = 1;
    if (!iVar1->unk8)
    {
        n64_func_802599B4(iVar1);
    }
}
