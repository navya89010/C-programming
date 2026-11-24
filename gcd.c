#include <stdio.h>

 int findGCD(int a,int b)
 {
    while (a != b)
    {
        if (a > b)
        a = a - b;

        else
        b = b - a;

    }

    return a;

 }

 int main()
 {
    int num1, num2, gcd;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive numbers.\n");
    }
    else
    {
        gcd = findGCD(num1, num2);
        printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    }

    return 0;
 }




   

