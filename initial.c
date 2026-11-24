
#include <stdio.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[i] != ' ' && str[i] != '\n') {
            printf("%c.", str[i]);
        }
        else if (str[i] == ' ' && str[i + 1] != ' ' &&
                 str[i + 1] != '\n' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}
