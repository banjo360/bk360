#ifndef DEFINES_H
#define DEFINES_H

typedef signed __int8     int8_t;
typedef signed __int16    int16_t;
typedef signed __int32    int32_t;
typedef unsigned __int8   uint8_t;
typedef unsigned __int16  uint16_t;
typedef unsigned __int32  uint32_t;

typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;
typedef uint8_t  u8;
typedef int8_t   s8;
typedef float    f32;
typedef double   f64;

#define NULL 0
#define FALSE 0
#define TRUE 1
#define bool u8

#include "structs.h"

void assertion_failed(const char*, const char*, s32);

typedef void (* GenFunction_0)(void);
typedef void (* GenFunction_1)(s32);
typedef void (* GenFunction_2)(s32, s32);
typedef void (* GenFunction_3)(s32, s32, s32);
typedef void (* GenFunction_4)(s32, s32, s32, s32);
typedef void (* GenFunction_5)(s32, s32, s32, s32, s32);
typedef void (* GenFunction_6)(void *);

#endif
