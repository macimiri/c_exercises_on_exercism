#include "square_root.h"
#include <stdio.h>

int square_root(int radicand){
    int i;
    for(i=1; i<=radicand; i++){
        if((i*i) == radicand){
            return i;
        }
    }
    return -1;
}
