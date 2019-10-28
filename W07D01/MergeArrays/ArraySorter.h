#ifndef MERGEARRAYS_ARRAYSORTER_H
#define MERGEARRAYS_ARRAYSORTER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void switcharoo(int *bluePortal, int *orangePortal)
{
    int temp = *bluePortal;
    *bluePortal = *orangePortal;
    *orangePortal = temp;
}

void bubbleSort(int array[], int arraySize)
{
    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = 0; j < arraySize - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                switcharoo(&array[j], &array[j + 1]);
            }
        }
    }
}

#endif //MERGEARRAYS_ARRAYSORTER_H
