#include <stdio.h>
#include "Counting.h"

int main() {
    int numberIn;
    printf("Enter your chosen number, human being: \n");
    scanf("%d", &numberIn);
    printf("Number of ones: %d\n", oneCounter(numberIn));
    printf("Number of zeroes: %d\n", zeroCounter(numberIn));

    return 0;
}