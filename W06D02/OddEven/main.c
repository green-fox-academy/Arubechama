#include <stdio.h>
#include "OddEven.h"

int main() {
    int numberIn;
    printf("Enter a number, human: \n");
    scanf("%d", &numberIn);
    printf("Is it an even number?\n Answer is: %d\n", isEven(numberIn));
    printf("Is it an odd number?\n Answer is: %d",isOdd(numberIn));

    return 0;
}