#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0)
            str[i] = toupper((unsigned char)str[i]);
        else
            str[i] = tolower((unsigned char)str[i]);
    }

    printf("Sentence Case: %s", str);

    return 0;
}