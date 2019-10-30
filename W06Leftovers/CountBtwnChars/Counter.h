#ifndef COUNTBTWNCHARS_COUNTER_H
#define COUNTBTWNCHARS_COUNTER_H

#include <stdio.h>
#include <string.h>
#define MAX_CAP 100
#define MAX_CHAR 255

int bonusCounter(char* string, char repChar) {

    int index = 0, charcount = 0, i = 0;

    while (i < strlen(string)) {
        if (string[i] == repChar) {
            if (index == 0) {
                index++;
            } else {
                charcount -= 1;
                return charcount;
            }
        }
        if (index == 1) {
            charcount++;
        }
        i++;
    }
    printf("404");
}
int count_between_chars(char* string) {
    int frequency[MAX_CHAR];
    int i, max;
    int kyara;

    for(i = 0; i < MAX_CHAR; i++) {
        frequency[i] = 0;
    }

    i = 0;
    while(string[i] != '\0') {
        kyara = (int)string[i];
        frequency[kyara] += 1;
        i++;
    }

    max = 0;
    for(i = 0; i < MAX_CHAR; i++) {
        if(frequency[i] > frequency[max]) {
            max = i;
        }
    }

    return bonusCounter(string, (char)max);
}


#endif //COUNTBTWNCHARS_COUNTER_H
