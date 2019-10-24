#ifndef DISTANCEBTWN2POINTS_DISTANCEANDPOINTS_H
#define DISTANCEBTWN2POINTS_DISTANCEANDPOINTS_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

//Another struct name pun (I'm not sorry at all)
typedef struct pointy {
    float x;
    float y;
} point_t;

point_t create_point (float coord1, float coord2) {
    point_t point;
    point.x = coord1;
    point.y = coord2;
    return point;
};

float distance(point_t oneCoord, point_t twoCoord) {
    float distance1stp = oneCoord.x - twoCoord.x;
    float distance2ndp = oneCoord.y - twoCoord.y;
    float squareOfDistance = distance1stp * distance1stp + distance2ndp * distance2ndp;
    double dist = sqrt((double)squareOfDistance);
    return (float)dist;
}

#endif //DISTANCEBTWN2POINTS_DISTANCEANDPOINTS_H
