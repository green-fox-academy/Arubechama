#include "CompareMe.h"

int main()
{
    printf("Patat needs 2 words. Please insert them.\n");
    printf("First:\n");
    char first[50];
    scanf("%s", first);
    printf("Second:\n");
    char second[50];
    scanf("%s", second);
    printf("%d", compareStrings(first, second));
}