#ifndef MULTILINES_MULTILINEFILEWRITER_H
#define MULTILINES_MULTILINEFILEWRITER_H

#include <stdio.h>
#include <stdlib.h>
#define MAXCHARS 100

void MultiLineFileWriter(char path[50], char word[MAXCHARS], int lines) {
    FILE * fPtr;

    fPtr = fopen(path, "w");
    if(fPtr == NULL) {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < lines; i++) {
        fputs(word, fPtr);
        fputs("\n", fPtr);
    }

    fclose(fPtr);
}

#endif //MULTILINES_MULTILINEFILEWRITER_H
