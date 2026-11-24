#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, lastChar = 0;

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;
        lastChar = ch;

        if(ch == '\n')
            lines++;

        if(isspace((unsigned char)ch))
            inWord = 0;
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    if(characters > 0 && lastChar != '\n')
        lines++;

    fclose(fp);

    printf("Total Characters = %d\n", characters);
    printf("Total Words = %d\n", words);
    printf("Total Lines = %d\n", lines);

    return 0;
}