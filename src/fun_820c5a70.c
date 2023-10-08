#include <stdint.h>

typedef struct struct_11_s
{
    float unk0;
    float unk4;
    int32_t unk8;
    int32_t unkC;
    int16_t unk10; // trackId
    int16_t unk12;
    uint8_t unk14;
    uint8_t unk15;
} CoMusic;

enum comusic_e
{
    COMUSIC_0_DING_A = 0x00,
    COMUSIC_1_FINAL_BATTLE
};

void fun_820c5110();
CoMusic* fun_820c5060(enum comusic_e track_id);

void fun_820c5a70(enum comusic_e track_id)
{
    CoMusic* iVar1;

    iVar1 = fun_820c5060(track_id);
    if ((iVar1 != 0) && (iVar1->unk15 = 1, iVar1->unk8 == 0)) {
        fun_820c5110();
    }
}
