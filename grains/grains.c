#include "grains.h"

uint64_t square(uint8_t index){
    // index out of bounds
    if(index > 64 || index < 1){
        return 0;
    }

    //calculate number of grains on the squares
    uint64_t count = 1;
    int i;
    for(i = 1; i < index; i++){
        count = count * 2;
    }
    return count;
}

uint64_t total(void){
    int sum = 0;
    int i;
    for(i = 0; i < NUM_SQUARES; i++){
        sum = sum + square(i);
    }
    return sum;
}
