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

    int *numbrayII;
    numbrayII = (int *)malloc(sumElements(numbray, number) * sizeof(int));
    for (int j = 0; j < sumElements(numbray, number); ++j) {
        numbrayII[j] = j+1;
        printf("%d\n", numbrayII[j]);
    }

    return 0;
}