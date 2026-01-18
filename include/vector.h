#ifndef VECTOR_H
#define VECTOR_H

#include "defines.h"

typedef struct {
    s32 element_size;
    void* begin;
    void* end;
    void* mem_end;
} Vector;

Vector* vector_new(u32 element_size, u32 count);

#endif
