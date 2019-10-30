#ifndef SENTENCESPLITTER_LIMBSPLITTER_H
#define SENTENCESPLITTER_LIMBSPLITTER_H

#include <stdio.h>
#include <string.h>

void bananaSplit(char* sentence) {
    for (char *p = strtok(sentence, " "); p != NULL; p = strtok(NULL, " ")) {
        printf("%s\n", p);
    }
}

#endif //SENTENCESPLITTER_LIMBSPLITTER_H
