#include <stdio.h>


void passByValue(int x)
{
    x = 20;
    printf("Inside function: %d\n", x);
}


void passByReference(int *x)
{
    *x = 20;
}


int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}


void towerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    towerOfHanoi(n - 1, from, aux, to);

    printf("Move disk %d from %c to %c\n", n, from, to);

    towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
    int a = 10;
    int n = 5;

    
    printf("PASS BY VALUE\n");
    printf("Before: %d\n", a);
    passByValue(a);
    printf("After: %d\n\n", a);

    
    printf("PASS BY REFERENCE\n");
    printf("Before: %d\n", a);
    passByReference(&a);
    printf("After: %d\n\n", a);

    
    printf("FACTORIAL\n");
    printf("Factorial of %d = %d\n\n", n, factorial(n));

    
    printf("FIBONACCI SERIES\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    
    printf("TOWER OF HANOI\n");
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}