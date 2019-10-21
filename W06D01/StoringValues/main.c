#include <stdio.h>

//NUMBER EXERCISES
int main() {
    double a, b, c;
    printf("First, the cuboid! Insert 3 numbers: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    double surface = a*b*6;
    double volume = a*b*c;
    printf("Surface: %lf\n", surface);
    printf("Volume: %lf\n", volume);
    printf("Hello, Cube!\n");

    int storedNum = 8;
    int guessNum;
    printf("Next: Take a guess what Patat's secret number is: \n");
    scanf("%d", &guessNum);
    if(guessNum>storedNum) {
        printf("The number is lower.");
    } else if (guessNum<storedNum) {
        printf("The number is higher.");
    } else {
        printf("You found it! Great work!");
    }

    return 0;
}