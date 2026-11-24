
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end, lastStart = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            lastStart = i;
        }
    }

    for (i = 0; i < lastStart; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            printf("%c. ", str[i]);
        }
    }

    printf("%s", str + lastStart);

    return 0;
}
