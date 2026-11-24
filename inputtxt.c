#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Conversion completed successfully.");

    return 0;
}