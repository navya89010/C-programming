#include <stdio.h>

int main() {
    char s[100];
    int i = 0, v = 0, c = 0;

    scanf("%99s", s);

    while (s[i] != '\0') {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}