#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

#include <stdio.h>
struct sandwich {
    char name[50];
    float price;
    float weight;
};

float PriceCalc(struct sandwich strucc, int sandwNum) {
    float finalPrice = strucc.price*sandwNum;
    return finalPrice;
}

#endif //SANDWICH_SANDWICH_H
