#ifndef APPENDA_APPENDA_H
#define APPENDA_APPENDA_H
#include <stdio.h>
#include <string.h>

char* appender(char* string){
    char appendy = 'a';
    return strncat(string, &appendy, 1);
}

#endif //APPENDA_APPENDA_H
