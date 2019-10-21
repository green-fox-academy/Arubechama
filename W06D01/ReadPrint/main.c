#include <stdio.h>

//READING AND PRINTING EXERCISES
int main() {
    printf("Hello, World!\n");
    printf("Hello, Charlotte!\n");
    printf("Oh, hi Mark! What'cha story, Mark?\n");

    char name[] = "Charlotte";
    int age = 0;
    double height = 1.52;
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%lf\n", height);

    int a = 22;
    int b = 13;
    int plus = a + b;
    int minus = a - b;
    int asterix = a * b;
    int slash = a / b;
    printf("%d\n", plus);
    printf("%d\n", minus);
    printf("%d\n", asterix);
    printf("%d\n", slash);
    return 0;
}