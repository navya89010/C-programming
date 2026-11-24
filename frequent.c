#include <stdio.h>

int main() {
    long long n;
    int digit, count[10] = {0};
    int i, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        count[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d", result);

    return 0;
}