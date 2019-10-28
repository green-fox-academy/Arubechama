#ifndef REALLOCBASIC_SUMELEMENTS_H
#define REALLOCBASIC_SUMELEMENTS_H

#include <stdio.h>
#include <stdlib.h>

int sumElements(const int* array, int number) {
    int sum = 0;
    for (int i = 0; i < number; ++i) {
        sum = sum + array[i];
    }
    return sum;
}
#endif //REALLOCBASIC_SUMELEMENTS_H
