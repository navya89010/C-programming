#include <stdio.h>

int main() {
    int n, i, element, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found");
    }
    else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Array after deletion: ");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}