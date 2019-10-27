#ifndef ARETHESAME_COMPAREME_H
#define ARETHESAME_COMPAREME_H

#include <stdio.h>
#include <string.h>

int compareStrings(char* first, char* second) {
    if (strcmp(first, second) == 0){
        return 1;
    } else {
        return 0;
    }
}
#endif //ARETHESAME_COMPAREME_H
