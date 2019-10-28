#include <stdio.h>
#include <stdlib.h>
#include "Stringmerge.h"
#define MAX_CHARRAY_SIZE 100

int main()
{
    char wool[] = {"This string is made out of wool.\n"};
    char cottonfibre[] = {"This string is made out of cotton."};
    printf("%s", stringsmelter(wool, cottonfibre));
    return 0;
}