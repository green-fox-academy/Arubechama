#ifndef SUBSTRING_SUBSTRING_H
#define SUBSTRING_SUBSTRING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int will_it_substring(char* stringy, char* stringer) {

    int stringylength = strlen(stringy);
    int stringerlength = strlen(stringer);

    int i, j, found;

    for(i = 0; i < stringylength - stringerlength; i++) {
        found = 1;
        for(j = 0; j < stringerlength; j++) {
            if(stringy[i + j] != stringer[j]) {
                found = 0;
                break;
            }
        }
        
        if(found == 1) {
            return 1;
            //return i returns word index
        }
    }

    if (stringerlength == stringylength) {
        return -1;
    }

    return 0;
}

#endif //SUBSTRING_SUBSTRING_H
