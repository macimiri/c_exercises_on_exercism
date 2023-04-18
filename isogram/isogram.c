#include "isogram.h"
#include "string.h"
#include "stdio.h"
#include "ctype.h"

bool is_isogram(const char phrase[]){
    // check NULL
    if(phrase ==NULL){
        return false;
    }

    // find number of digits
    int num_chars = strlen(phrase);

    // for each char, check rest of array to see if a duplicate exists.
    int i, j, count;
    for(i = 0; i < num_chars; i++){
        // ignore " " and "-"
        if(phrase[i] != ' ' && phrase[i] != '-'){
            // printf("i is %i, char is %c\n", i, phrase[i]);
            // check full string, count occurrences of index char
            count = 0;
            for(j = 0; j < num_chars; j++){
                // printf("j is %i, char is %c\n", i, phrase[j]);
                if(tolower(phrase[i]) == tolower(phrase[j])){
                    // printf("phrase[i] and phrase[j] are the same, count++\n");
                    count++;
                }
            }
            //if count > 1 then duplicates exist, return false
            if(count > 1){
                // printf("count > 1, return false\n");
                return false;
            }
            // printf("\n");
        }
    }
    // no duplicates must exist, so return true
    return true;
}
