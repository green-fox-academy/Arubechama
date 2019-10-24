#ifndef CAR_CARZ_H
#define CAR_CARZ_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    double km;
    double gas;
};

const char* getCarType(enum car_type car_type)
{
    switch (car_type)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land Rover";
        case TESLA: return "Tesla";
    }
}

void carStats(struct car customCar) {
    printf("%s\n", getCarType(customCar.type));
    printf("%.2f\n", customCar.km);
    if (customCar.type == TESLA) {
        printf("This car doesn't use gas.");
    } else {
        printf("%.2f\n", customCar.gas);
    }
}

#endif //CAR_CARZ_H
