#ifndef AGERESTRICTION_AGERESTRIC_H
#define AGERESTRICTION_AGERESTRIC_H

void AgeChecker(int age) {
    if(age>=18) {
        printf("Passed. Alcohol granted.");
    } else {
        printf("Beep-boop. Elimination protocol engaged. Prepare to perish.");
    }
}

#endif //AGERESTRICTION_AGERESTRIC_H
