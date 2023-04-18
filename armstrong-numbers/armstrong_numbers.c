#include "armstrong_numbers.h"
#include "math.h"

bool is_armstrong_number(int candidate){

    // find number of digits in candidate
    int num_digits = 0;
    int candidate_copy;
    for(candidate_copy = candidate; candidate_copy != 0; num_digits++){
        candidate_copy = candidate_copy / 10;
    }

    //calculate armstrong value of candidate
    int result = 0;
    int digit;
    candidate_copy = candidate;
    while(candidate_copy){
        digit = candidate_copy % 10;
        candidate_copy = candidate_copy / 10;
        result = result + pow(digit, num_digits);
    }

    //check if armstrong value and candidate are equal
    if(result == candidate){
        return true;
    }
    else{
        return false;
    }
}
