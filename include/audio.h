#ifndef AUDIO_H
#define AUDIO_H

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

#endif
