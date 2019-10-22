#include <stdio.h>
#include "BinaryConverter.h"

int main() {
    uint8_t myVar = 0b10100101;
    printf("Decimal format: \n");
    printf("%d", myVar);
    printf("\nIn hexadecimal format: \n");
    printf("0x%x\n", myVar);
    printf("In binary format: \n");
    PrintBinary(myVar);

    return 0;
}