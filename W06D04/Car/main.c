#include <stdio.h>
#include "Carz.h"

int main() {
    printf("Hello, Carl!\n"); //A little joke.

    struct car DreamCar;
    struct car DreamCar2;

    DreamCar.type = TOYOTA;
    DreamCar.km = 23.27;
    DreamCar.gas = 30;

    DreamCar2.type = TESLA;
    DreamCar2.km = 44.44;

    carStats(DreamCar);
    carStats(DreamCar2);

    return 0;
}