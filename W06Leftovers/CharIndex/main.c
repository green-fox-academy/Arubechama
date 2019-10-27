#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

#include "CharIndexFinder.h"

int main()
{
    char string[MAX_SIZE];
    char character;
    printf("Type something for Patat:\n");
    gets(string);
    printf("Enter the character you wish to look for:\n");
    character = getchar();
    printf("The index of your character in the given string is: %d", indexer(string, character));

    return 0;
}