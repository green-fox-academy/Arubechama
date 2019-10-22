#include <stdio.h>
#include "FunctionContainer.h"

int main() {
    int x;
    int y;
    printf("Insert number 1: \n");
    scanf("%d", &x);
    printf("Insert number 2: \n");
    scanf("%d", &y);
    printf("%d\n", compareSumDigit(x, y));
    return 0;
}