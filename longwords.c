
#include <stdio.h>
#include <string.h>

int main() {
    char str[300];
    int i = 0, start = 0;
    int len = 0, maxLen = 0;
    int maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' &&
            str[i] != '\0' && str[i] != '\t') {
            if (len == 0) {
                start = i;
            }
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }

        if (str[i] == '\0') {
            break;
        }

        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
