#ifndef PRIMENUMBER_PRIMECHECKER_H
#define PRIMENUMBER_PRIMECHECKER_H
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

#endif //PRIMENUMBER_PRIMECHECKER_H
