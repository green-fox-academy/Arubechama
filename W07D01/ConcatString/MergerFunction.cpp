#include "Stringmerge.h"
#include <stdio.h>
#include <stdlib.h>

char* stringSmelter(char* stringy, char* stringer) {

    int size1 = 0;
    int size2 = 0;
    char* stringblock = NULL;

    while(string1[size1] != '\0') {
        size1++;
    }
    while(string2[size2] != '\0') {
        size2++;
    }

    newstr = (char *) malloc((size1 + size2 + 1) * sizeof(char));

    strcpy(newstr, string1);
    strcat(newstr, string2);

    return newstr;
}