
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[50], destFile[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%49s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%49s", destFile);

    source = fopen(sourceFile, "r");

    if(source == NULL)
    {
        printf("Source file not found.");
        return 1;
    }

    destination = fopen(destFile, "w");

    if(destination == NULL)
    {
        printf("Destination file cannot be created.");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully.");

    fclose(source);
    fclose(destination);

    return 0;
}