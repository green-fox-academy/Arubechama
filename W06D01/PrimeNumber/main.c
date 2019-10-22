#include <stdio.h>

#include "PrimeChecker.h"

int main() {
    printf("Enter a number: \n");
    int num;
    scanf("%d", &num);
    if (isPrime(num)){
        printf("The given number is a prime number");
    } else {
        printf("The given number is not a prime number");
    }
    return 0;
}