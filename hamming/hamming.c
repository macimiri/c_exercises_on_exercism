#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs){
    int hamming_distance = 0;
    int l_length = strlen(lhs);
    int r_length = strlen(rhs);

    // test strings are the same length
    if (l_length != r_length){
        return -1;
    }

    // iterate through strings and test chars against each other
    int index;
    for(index = 0; index < l_length; index++){
        if(*lhs != *rhs){
            hamming_distance++;
        }
        lhs++;
        rhs++;
    }
    return hamming_distance;
}
