#include <stdio.h>
#include "AppendA.h"
#define MAX_CHAR_AMOUNT 100

int main() {
    char string[MAX_CHAR_AMOUNT];
    printf("Give your string to Patat, for she desires it:\n");
    scanf("%s", string);
    printf("Appended a to your string. It looks like this: %s", appender(string));

    return 0;
}