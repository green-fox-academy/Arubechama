#include <stdio.h>
#include "SetBit.h"

int main()
{
    int numberIn, bitIndex;
    printf("Human, you may enter a number: \n");
    scanf("%d", &numberIn);

    printf("Now, enter the index of the bit you want to set. \nKeep the number of bits in mind. \nEnter: \n");
    scanf("%d", &bitIndex);
    setBit(numberIn, bitIndex);

    return 0;
}