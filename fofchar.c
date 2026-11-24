
#include <stdio.h>

int main() {
    char s[100], ch;
    int i = 0, count = 0;

    scanf("%99s", s);
    scanf(" %c", &ch);

    while (s[i] != '\0') {
        if (s[i] == ch)
            count++;
        i++;
    }

    printf("Frequency = %d", count);
    return 0;
}
