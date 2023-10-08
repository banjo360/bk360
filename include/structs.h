#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct{
    f32 x;
    f32 y;
    f32 z;
} vec3f;

#define TUPLE(t, n) union{\
    struct{ t n##_x; t n##_y; t n##_z; };\
    struct{ t n##_pitch; t n##_yaw; t n##_roll; };\
    t n[3];\
}

#endif
