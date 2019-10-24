#include "DistanceAndPoints.h"

int main() {
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5);
    float dist = distance(p1, p2);
    printf("%.2f", dist);
    return 0;
}