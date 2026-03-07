#ifndef MEMORY_H
#define MEMORY_H

#include "defines.h"

void* malloc(int size, const char* message);
void* fopen_cmp_tbl_ctl_files(const char* message);
void piMgr_read(void* vaddr, void* devaddr, s32 size);
void empty_823d06e8(void*);

#endif
