#include "defines.h"
#include "memory.h"
#include "vector.h"
#include "asset.h"

struct Unknown82497f68 {
     /* 00 */ void* asset_data_rom_offset;
     /* 04 */ Vector* n64_D_80383CE0[2];
     /* 0C */ u8* assetCacheDependencyCount;
     /* 10 */ void* assetSectionRomMetaList;
     /* 14 */ void** n64_D_80383CD4;
     /* 18 */ void** assetCachePtrList;
     /* 1C */ AssetROMHead* assetSectionRomHeader;
     /* 20 */ char* n64_D_80383CC8;
     /* 24 */ s16* assetCacheAssetIdList;
     /* 28 */ u32 n64_D_80383CB0;
     /* 2C */ u8 padding[12];
     /* 38 */ s32 INT_82497fa0;
     /* 3C */ s32 OriginalSize;
     /* 40 */ s8 assetCacheLength;
     /* 41 */ u8 assetCacheCurrentIndex;
     /* 42 */ u8 n64_D_80370A1C;
};

struct Unknown82497f68 unknown_82497f68;
void* INT_824a0128;

void assetCache_init()
{
     unknown_82497f68.n64_D_80370A1C = 0;
     unknown_82497f68.n64_D_80383CE0[0] = vector_new(8, 0x10);
     unknown_82497f68.n64_D_80383CE0[1] = vector_new(8, 0x10);
     unknown_82497f68.assetCachePtrList = malloc(600, "gldb.c           : glDbReset           :(PJM): \'PjmLibrary\'");
     unknown_82497f68.n64_D_80383CD4 = malloc(600, "gldb.c           : glDbReset           :(PJM): \'PjmLibraryQik\'");
     unknown_82497f68.assetCacheDependencyCount = malloc(0x96, "gldb.c           : glDbReset           :(PJM): \'PjmLibCount\'"
     );
     unknown_82497f68.assetCacheAssetIdList = malloc(300, "gldb.c           : glDbReset           :(PJM): \'PjmLibObjs\'");
     unknown_82497f68.assetCacheLength = 0;
     unknown_82497f68.assetSectionRomHeader = malloc(8, "gldb.c           : glDbReset           :(MB) : \'MemRoot\'");
     unknown_82497f68.n64_D_80383CC8 = fopen_cmp_tbl_ctl_files("db360.cmp");
     INT_824a0128 = unknown_82497f68.n64_D_80383CC8;
     piMgr_read(unknown_82497f68.assetSectionRomHeader, unknown_82497f68.n64_D_80383CC8, 8);
     unknown_82497f68.assetSectionRomMetaList = malloc(unknown_82497f68.assetSectionRomHeader->count << 3, "gldb.c           : glDbReset           :(MB) : \'MemIndex\'");
     piMgr_read(unknown_82497f68.assetSectionRomMetaList, unknown_82497f68.n64_D_80383CC8 + 8, unknown_82497f68.assetSectionRomHeader->count * 8);
     unknown_82497f68.asset_data_rom_offset = unknown_82497f68.n64_D_80383CC8 + (unknown_82497f68.assetSectionRomHeader->count + 1) * 8;
     empty_823d06e8(unknown_82497f68.assetCachePtrList);
     empty_823d06e8(unknown_82497f68.n64_D_80383CD4);
     empty_823d06e8(unknown_82497f68.assetCacheDependencyCount);
     empty_823d06e8(unknown_82497f68.assetCacheAssetIdList);
     empty_823d06e8(unknown_82497f68.assetSectionRomHeader);
     empty_823d06e8(unknown_82497f68.assetSectionRomMetaList);
}
