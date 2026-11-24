
#include <stdio.h>

int main() {
    char s[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    scanf(" %99[^\n]", s);

    while (s[i] != '\0') {
        if (s[i] == ' ')
            spaces++;
        else if (s[i] >= '0' && s[i] <= '9')
            digits++;
        else if (!((s[i] >= 'a' && s[i] <= 'z') ||
                   (s[i] >= 'A' && s[i] <= 'Z')))
            special++;

        i++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d",
           spaces, digits, special);

    return 0;
}
