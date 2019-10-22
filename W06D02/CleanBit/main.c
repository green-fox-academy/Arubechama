#include "CleanBit.h"

int main() {
    int numberIn, bitIndex;
    printf("Human, you may enter a number: \n");
    scanf("%d", &numberIn);

    printf("Now, enter the index of the bit you want to clean. \nKeep the number of bits in mind. \nEnter: \n");
    scanf("%d", &bitIndex);
    (numberIn, bitIndex);
    cleanBit(numberIn, bitIndex);

    return 0;
}