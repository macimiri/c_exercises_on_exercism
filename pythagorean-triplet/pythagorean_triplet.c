#include "pythagorean_triplet.h"
#include <stdlib.h>
#include <stdio.h>

triplets_t* triplets_with_sum(int sum){
    // triplets_t triplets = {.count=0, .triplets=NULL};
    triplets_t *ptriplets = malloc(sizeof(triplets_t));
    ptriplets->count = 0;
    ptriplets->triplets = NULL;
    int a, b, c;

    printf("starting search for sum %d\n", sum);
    for(a = 1; a <= sum/3; a++){
        for(b = a; b <= (sum-a); b++){
            c = sum - a - b;
            // printf(".");
            if(((a <= b) && (b <= c)) && (a*a + b*b == c*c)){
                // alloc triplet struct and add to triplets_t
                // printf("a %i, b %i, c %i\n", a, b, c);
                // printf("pre-count is %d\n", ptriplets->count);
                
                // realloc triplets.triplets pointer to +1 size
                ptriplets->triplets = realloc(ptriplets->triplets, sizeof(triplet_t) * (ptriplets->count + 1));

                (ptriplets->triplets + ptriplets->count)->a = a;
                (ptriplets->triplets + ptriplets->count)->b = b;
                (ptriplets->triplets + ptriplets->count)->c = c;

                ptriplets->count++;
                // printf("post-count w/ ptr is %d\n", ptriplets->count);
            }
        }
    }
    
    return ptriplets;
}

void free_triplets(triplets_t* triplets){
    free(triplets->triplets);
}
