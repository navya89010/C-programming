#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha((unsigned char)ch))
        {
            ch = tolower((unsigned char)ch);

            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' ||
                ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Total vowels = %d\n", vowels);
    printf("Total consonants = %d\n", consonants);

    return 0;
}