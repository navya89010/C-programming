#include <stdio.h>

void findCube(int *n)
{
    *n = (*n) * (*n) * (*n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    findCube(&num);

    printf("Cube of the number = %d\n", num);

    return 0;
}
