#include <stdio.h>
#include <stdlib.h>
#include "SumElements.h"

int main() {
    printf("Enter a number, for Patat desires it:\n");
    int number;
    scanf("%d", &number);
    int *numbray;
    numbray = (int *)malloc(number * sizeof(int));
    printf("Enter %d number(s):\n", number);
    for (int i = 0; i < number; ++i) {
        int element;
        scanf("%d", &element);
        numbray[i] = element;
    }

    int sum = sumElements(numbray, number);
    numbray = (int *)realloc(numbray, sum * sizeof(int));
    for (int j = 0; j < sum; ++j) {
        *(numbray+j) = j;
        printf("%d\n", *(numbray+j));
    }

    free(numbray);

    return 0;
}