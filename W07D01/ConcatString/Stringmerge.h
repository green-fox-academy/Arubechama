#ifndef CONCATSTRING_STRINGMERGE_H
#define CONCATSTRING_STRINGMERGE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringsmelter(char* stringy, char* stringer) {

    const size_t stringylength = strlen(stringy);
    const size_t stringerlength = strlen(stringer);

    char *stringstack = malloc(stringylength + stringerlength + 1);

    memcpy(stringstack, stringy, stringylength);
    memcpy(stringstack + stringylength, stringer, stringerlength + 1);

    return stringstack;
}

#endif //CONCATSTRING_STRINGMERGE_H
