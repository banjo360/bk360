#include "defines.h"
#include "memory.h"
#include "vector.h"
#include "asset.h"

u8 n64_D_80370A1C;
Vector* n64_D_80383CE0[2];
void** assetCachePtrList;
void** n64_D_80383CD4;
u8* assetCacheDependencyCount;
s16* assetCacheAssetIdList;
u8 assetCacheLength;
AssetROMHead* assetSectionRomHeader;
char* n64_D_80383CC8;
void* INT_824a0128;
void* assetSectionRomMetaList;
void* asset_data_rom_offset;

void assetCache_init()
{
     n64_D_80370A1C = 0;
     n64_D_80383CE0[0] = vector_new(8, 0x10);
     n64_D_80383CE0[1] = vector_new(8, 0x10);
     assetCachePtrList = malloc(600, "gldb.c           : glDbReset           :(PJM): \'PjmLibrary\'");
     n64_D_80383CD4 = malloc(600, "gldb.c           : glDbReset           :(PJM): \'PjmLibraryQik\'");
     assetCacheDependencyCount = malloc(0x96, "gldb.c           : glDbReset           :(PJM): \'PjmLibCount\'"
     );
     assetCacheAssetIdList = malloc(300, "gldb.c           : glDbReset           :(PJM): \'PjmLibObjs\'");
     assetCacheLength = 0;
     assetSectionRomHeader = malloc(8, "gldb.c           : glDbReset           :(MB) : \'MemRoot\'");
     n64_D_80383CC8 = fopen_cmp_tbl_ctl_files("db360.cmp");
     INT_824a0128 = n64_D_80383CC8;
     piMgr_read(assetSectionRomHeader, n64_D_80383CC8, 8);
     assetSectionRomMetaList = malloc(assetSectionRomHeader->count * 8, "gldb.c           : glDbReset           :(MB) : \'MemIndex\'");
     piMgr_read(assetSectionRomMetaList, n64_D_80383CC8 + 8, assetSectionRomHeader->count * 8);
     asset_data_rom_offset = n64_D_80383CC8 + (assetSectionRomHeader->count + 1) * 8;
     empty_823d06e8(assetCachePtrList);
     empty_823d06e8(n64_D_80383CD4);
     empty_823d06e8(assetCacheDependencyCount);
     empty_823d06e8(assetCacheAssetIdList);
     empty_823d06e8(assetSectionRomHeader);
     empty_823d06e8(assetSectionRomMetaList);
}
