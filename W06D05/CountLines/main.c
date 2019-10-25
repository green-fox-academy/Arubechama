#include "LineCalc.h"

//COUNTING THE AMOUNT OF LINES IN TESTTEXT.TXT
int main()
{
    char path[100];
    printf("Enter source file path:\n");
    scanf("%s", path);
    printf("The amount of lines in said file is: %d", LineCalc(path));

    return 0;
}