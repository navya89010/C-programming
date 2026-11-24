
#include <stdio.h>

int main() {
    int n, k, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        if (i > 0) printf(" ");
        printf("%d", max);
    }

    return 0;
}
