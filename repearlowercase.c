
#include <stdio.h>

int main() {
    char str[200];
    int seen[26] = {0};
    int i, found = 0;

    scanf("%199s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (seen[index] == 1) {
                printf("%c", str[i]);
                found = 1;
                break;
            }

            seen[index] = 1;
        }
    }

    if (!found) {
        printf("No repeating character");
    }

    return 0;
}
