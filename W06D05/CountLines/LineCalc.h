#ifndef COUNTLINES_LINECALC_H
#define COUNTLINES_LINECALC_H

#include <stdio.h>
#include <stdlib.h>

int LineCalc(char path[100]) {
    FILE * file;
    char charr;
    int lines, characters;

    file = fopen(path, "r");

    if (file == NULL)
    {
        printf("\nUnable to open file. Does it even exist?\n");
        exit(EXIT_FAILURE);
    }

    characters = lines = 0;
    while ((charr = fgetc(file)) != EOF) {
        characters++;
        if (charr == '\n' || charr == '\0') {
            lines++;
        }
    }

    if (characters > 0) {
        lines++;
    }

    fclose(file);

    return lines;
}

#endif //COUNTLINES_LINECALC_H
