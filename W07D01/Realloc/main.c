#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* nyarray;
    nyarray = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i <= sizeof(nyarray); ++i) {
        nyarray[i] = i;
        printf("%d\n", nyarray[i]);
    }

    realloc(nyarray, 0);
    return 0;
}