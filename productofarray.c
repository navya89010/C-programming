
#include <stdio.h>

int main() {
    int n, nums[100], answer[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(", ");
        printf("%d", answer[i]);
    }

    return 0;
}
