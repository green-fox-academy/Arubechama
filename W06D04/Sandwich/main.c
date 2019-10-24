#include <stdio.h>
#include <string.h>
#include "Sandwich.h"

int main() {
    struct sandwich SandWitch;
    strcpy(SandWitch.name, "Manhattan Madoka");
    SandWitch.price = 6.67;
    SandWitch.weight = 0;
    int sandwNum;
    printf("How many sandwiches do you want?\n");
    scanf("%d", &sandwNum);
    printf("Calculating price...\nYour price is: %.2f", PriceCalc(SandWitch, sandwNum));
    return 0;
}