#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Parrot.h"
#define MAX_CHAR_LENGTH 100

int main() {
    char word[MAX_CHAR_LENGTH];
    int repfreq;

    printf("Type in a word you want Patat to repeat:\n");
    scanf("%s", word);

    printf("Insert a number which will determine the amount Patat will repeat the given word:\n");
    scanf("%d", &repfreq);

    char* finalString = parrotString(word, repfreq);
    puts(finalString);
    free(finalString);

    return 0;
}