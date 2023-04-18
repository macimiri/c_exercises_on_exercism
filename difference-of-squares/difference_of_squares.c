#include "difference_of_squares.h"

// yeah, I know there's probably an equation that obviates the need to do this algorithmically
unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    int i;
    for(i=1;(unsigned int)i<=number;i++){
        sum += i*i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = 0;
    int i;
    for(i=1;(unsigned int)i<=number;i++){
        sum += i;
    }
    return sum*sum;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}
