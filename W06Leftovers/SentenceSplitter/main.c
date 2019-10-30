#include <stdio.h>
#include "LimbSplitter.h"
#define MAX_LENGTH 100

int main() {
    printf("Enter a sentence:\n");
    char sentence[MAX_LENGTH];
    fgets(sentence, 256, stdin);
    bananaSplit(sentence);
    return 0;
}