#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int main()
{
    //CREATE THE FILE
    char data[DATA_SIZE];

    FILE * fPtr;
    fPtr = fopen("file.txt", "w");
    if(fPtr == NULL) {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Write stuff in the file: \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fPtr);

    fclose(fPtr);

    printf("File created.\n");

    //READ THE FILE
    char charr;

    fPtr = fopen("file.txt", "r");

    if(fPtr == NULL) {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    do {
        charr = fgetc(fPtr);
        putchar(charr);
    } while(charr != EOF);

    fclose(fPtr);

    return 0;
}