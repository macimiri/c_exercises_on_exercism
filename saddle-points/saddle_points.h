#ifndef SADDLE_POINTS_H
#define SADDLE_POINTS_H

//for NULL
#include <stddef.h>
//for free()
#include <stdlib.h>

typedef struct {
   int row;
   int column;
} saddle_point_t;

typedef struct {
    int count;
    saddle_point_t *points;
} saddle_points_t;

saddle_points_t *saddle_points(int x, int y, void *matrix);
void free_saddle_points(saddle_points_t *actual);

#endif
