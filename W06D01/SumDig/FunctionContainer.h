#ifndef SUMDIG_FUNCTIONCONTAINER_H
#define SUMDIG_FUNCTIONCONTAINER_H

#include <stdio.h>

int sumDigit(int num) {
    if (num!=0) {
        return num%10+sumDigit(num/10);
    }
}

int compareSumDigit(int num1, int num2) {
    if (sumDigit(num1)==sumDigit(num2)) {
        return 1;
    } else {
        return 0;
    }
}

#endif //SUMDIG_FUNCTIONCONTAINER_H
