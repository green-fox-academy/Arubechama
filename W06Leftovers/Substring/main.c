#include <stdio.h>
#include "Substring.h"
#define MAX_CHAR_AMOUNT 100

//This exercise was completed in a way that it handles the find word in sentence and return index jobs as well.

int main() {
    char string1[MAX_CHAR_AMOUNT];
    char string2[MAX_CHAR_AMOUNT];
    printf("Type. Just type whatever:\n");
    gets(string1);
    printf("Do it again. It may be a substring:\n");
    gets(string2);
    printf("%d", will_it_substring(string1, string2));
    return 0;
}