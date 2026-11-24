
#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int ans = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                ans = arr[j];
                break;
            }
        }

        if (i > 0) printf(", ");
        printf("%d", ans);
    }

    return 0;
}
