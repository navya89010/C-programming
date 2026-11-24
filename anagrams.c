
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int count[256] = {0};
    int i;

    scanf("%199s %199s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++) {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
