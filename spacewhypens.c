
#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    scanf(" %99[^\n]", s);

    while (s[i] != '\0') {
        if (s[i] == ' ')
            s[i] = '-';
        i++;
    }

    printf("%s", s);
    return 0;
}
