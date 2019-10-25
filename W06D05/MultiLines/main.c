#include "MultiLineFileWriter.h"

int main()
{
    printf("Enter the path to your file:\n");
    char path[50];
    scanf("%s", path);
    printf("Enter the word you want to write into your file:\n");
    char word[100];
    scanf("%s", word);
    printf("Enter the number of lines:\n");
    int lines;
    scanf("%d", &lines);
    MultiLineFileWriter(path, word, lines);

    return 0;
}