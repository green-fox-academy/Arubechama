#ifndef SETBIT_SETBIT_H
#define SETBIT_SETBIT_H
#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
    printf("%c%c%c%c %c%c%c%c\n",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ? '1' : '0'));
}

void setBit(int numberIn, int bitIndex) {
    int newNumber;
    newNumber = ( 1 << bitIndex) | numberIn;
    printf("Lady Patat is done granting your wish. Here is the result of the requested bitswitch: \n");

    printf("Decimal format: \n");
    printf("%d", newNumber);
    printf("\nIn hexadecimal format: \n");
    printf("0x%x\n", newNumber);
    printf("In binary format: \n");
    PrintBinary(newNumber);
}

#endif //SETBIT_SETBIT_H
