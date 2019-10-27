#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Human, tell your name, for the almighty Patat desires to know:\n");
    scanf("%s", name);

    printf("Patat now knows, that the number of characters your name consists of is %d.\n", strlen(name));

    return 0;
}