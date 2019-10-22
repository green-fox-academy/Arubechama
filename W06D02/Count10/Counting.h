#ifndef COUNT10_COUNTING_H
#define COUNT10_COUNTING_H

#include <stdio.h>
#include <stdint.h>


int oneCounter(int numberIn) {
    int oneNum = 0;
    for(int i = 0; i < 8; i++) {
        if(numberIn & 1) {
            oneNum++;
        }
        numberIn >>= 1;
    }
    return oneNum;
}

int zeroCounter(int numberIn) {
    int zeroNum = 0;
    for(int i = 0; i < 8; i++) {
        if(~numberIn & 1) {
            zeroNum++;
        }
        numberIn >>= 1;
    }
    return zeroNum;
}


#endif //COUNT10_COUNTING_H
