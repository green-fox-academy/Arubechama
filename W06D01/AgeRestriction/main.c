#include <stdio.h>
#include "AgeRestric.h"

int main() {
    printf("Hello there, human being! Lady Patat will allow you to take alcoholic beverage from her vending machine. However, if you do not meet the age requirement, you will be eliminated.\n");
    printf("So, enter your age: \n");
    int age;
    scanf("%d", &age);
    AgeChecker(age);

    return 0;
}