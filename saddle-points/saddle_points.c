#include "saddle_points.h"

int find_highest_point_in_row(int row_index, int num_columns, void *matrix);
int find_highest_point_in_column(int col_index, int num_rows, void *matrix);

saddle_points_t *saddle_points(int rows, int columns, void *matrix){
    // set up saddle_points_t to populate and return
    int (*p_matrix)[rows][columns] = (int(*)[rows][columns]) matrix;
    saddle_points_t  *points = malloc(sizeof(saddle_points_t));
    points->count = 0;
    points->points = NULL;

    // find the saddle points
    int i, j;
    for(i = 0; i < rows; i++){
        // find the highest point in the row
        find_highest_point_in_row()
        for(j = 0; j < columns; j++){
            // is it the lowest point in the column?

        }
    }

    return points;
}

void free_saddle_points(saddle_points_t *actual){
    free(actual->points);
}
