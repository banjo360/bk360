#include "actor.h"

s32 n64_func_80311480(s32 text_id, s32 arg1, f32 *pos, ActorMarker *marker, void(*callback)(ActorMarker *, enum asset_e, s32), void(*arg5)(ActorMarker *, enum asset_e, s32));

s32 FUN_821841c0(s32 param)
{
	if (param == 1)
	{
		return n64_func_80311480(0xe6d, 4, 0, 0, 0, 0);
	}
	else
	{
		return n64_func_80311480(0xe6e, 4, 0, 0, 0, 0);
	}
}
