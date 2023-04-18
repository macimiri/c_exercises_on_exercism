#ifndef PYTHAGOREAN_TRIPLET_H
#define PYTHAGOREAN_TRIPLET_H

#include <stdio.h>

#define MAX_NUM_TRIPLETS 20

typedef struct {
    int a;
    int b;
    int c;
} triplet_t;

typedef struct {
    int count;
    triplet_t *triplets;
} triplets_t;

triplets_t* triplets_with_sum(int sum);
void free_triplets(triplets_t* triplets);

#endif
