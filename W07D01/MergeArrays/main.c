#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArraySorter.h"

int main()
{
    int* nyarray1;
    int* nyarray2;

    nyarray1 = malloc(10 * sizeof(int));
    for (int eb = 0; eb < 10; ++eb) {
        nyarray1[eb] = eb*2;
    }

    nyarray2 = malloc(10 * sizeof(int));
    for (int kutya = 0; kutya < 10; ++kutya) {
        nyarray2[kutya] = kutya*2+1;
    }

    int* merge = malloc(20 * sizeof(int));

    //No realloc, I'm staying clean

    memcpy(merge, nyarray1, 10 * sizeof(int));
    memcpy(merge + 10, nyarray2, 10 * sizeof(int));

    bubbleSort(merge, 20);

    for (int i = 19; i >= 0; --i) {
        printf("%d\n", merge[i]);
    }
    return 0;
}