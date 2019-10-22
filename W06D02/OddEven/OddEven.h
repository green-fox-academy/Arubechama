#ifndef ODDEVEN_ODDEVEN_H
#define ODDEVEN_ODDEVEN_H
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

//This one is just the 2 put together, but it requires if statement.
int oddEven(int numberIn) {
    if(numberIn & 1) {
        printf("Your number is odd.");
    } else {
        printf("Your number is even.");
    }
}

//These functions require no such things.

int isEven(int numberIn) {
    return ~numberIn & 1;
}

int isOdd(int numberIn) {
    return numberIn & 1;
}

#endif //ODDEVEN_ODDEVEN_H
