#include <stdio.h>
#include "Equali-bacteries.h"

int main() {
    printf("Hello again, human being! Lady Patat is ready to store those two integers you need. Insert them here: \n");
    int a;
    scanf("%d", &a);
    printf("..and here: \n");
    int b;
    scanf("%d", &b);
    printf("%d", equCheck(a, b));

    return 0;
}