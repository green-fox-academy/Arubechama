#ifndef PROJECTPIE_PIE_H
#define PROJECTPIE_PIE_H

double PIE = 3.14;

void circalc(int circleRad) {
    printf("Radius: %lf\n", circleRad*circleRad*PIE);
}

void circu(int circleRad) {
    printf("Circumference: %lf\n", 2*circleRad*PIE);
}

#endif //PROJECTPIE_PIE_H
