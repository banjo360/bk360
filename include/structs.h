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

typedef struct struct31s {
    f32 particle_starting_scale_range[2];
    f32 particle_ending_scale_range[2];
    f32 particle_spawn_interval_range[2];
    f32 particle_lifetime_range[2];
    f32 particle_fade_in_range[2];
} struct31s;

typedef struct struct_34_s{
    f32 unk0[3];
    f32 unkC[3];
} struct34s;


typedef struct struct_42_s{
    struct34s unk0;
    struct34s unk18;
} struct42s;

#endif
