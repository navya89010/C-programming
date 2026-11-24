
#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j, flag = 1;

    scanf("%99s", s);

    while (s[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
