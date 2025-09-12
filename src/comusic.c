#include "defines.h"
#include "functions.h"

extern CoMusic *n64_D_80276E30;

void n64_func_8025A96C()
{
    CoMusic *iPtr;

    if (n64_D_80276E30 == NULL)
    {
        assertion_failed("W", ".\\comusic.c", 0x344);
    }

    for (iPtr = n64_D_80276E30; iPtr < n64_D_80276E30 + 6; iPtr++)
    {
        if (iPtr->track_id >= 0)
        {
            n64_func_802599B4(iPtr);
        }
    }
}

void n64_func_8025A9D4()
{
    CoMusic *iPtr;

    for (iPtr = n64_D_80276E30; iPtr < n64_D_80276E30 + 6; iPtr++)
    {
        if (iPtr->track_id >= 0 && iPtr->unk14 == 0)
        {
            n64_func_802599B4(iPtr);
        }
    }
}

void N64_func_8025AABC(enum comusic_e track_id)
{
    CoMusic* iPtr = FUN_820c5060(track_id);
    if (iPtr != NULL)
    {
        iPtr->unk15 = 1;

        if (iPtr->unk8 == 0)
        {
            n64_func_802599B4(iPtr);
        }
    }
}

void n64_func_8025AB00()
{
    CoMusic* iPtr = n64_D_80276E30;

    iPtr->unk15 = 1;
    if (!iPtr->unk8)
    {
        n64_func_802599B4(iPtr);
    }
}
