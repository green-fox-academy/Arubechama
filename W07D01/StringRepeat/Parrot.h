#ifndef STRINGREPEAT_PARROT_H
#define STRINGREPEAT_PARROT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* parrotString(const char* stringy, int repeat) {
    size_t stringylength = strlen(stringy);
    char* parrotstring = malloc(repeat * stringylength + 1);

    int i;
    char* parrot;

    for (i = 0, parrot = parrotstring; i < repeat; ++i, parrot += stringylength) {
        memcpy(parrot, stringy, stringylength);
    }

    *parrot = '\0';

    return parrotstring;
}


#endif //STRINGREPEAT_PARROT_H
