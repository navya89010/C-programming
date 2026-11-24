#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct real roots: %.2f and %.2f", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);

        printf("Two equal real roots: %.2f and %.2f", root1, root1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);

        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi",
               real, imag, real, imag);
    }

    return 0;
}