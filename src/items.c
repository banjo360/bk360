#include "defines.h"

s32 item_adjustByDiff(s32, s32, s32);
extern s32 n64_D_80385F30_items_count[0x2C];

void item_set(s32 item, s32 val)
{
    item_adjustByDiff(item, val - n64_D_80385F30_items_count[item], 0);
}
