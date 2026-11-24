

#include <stdio.h>

int main()
{
    unsigned int n, temp;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &n);

    temp = n;

    while (temp != 0)
    {
        if (temp & 2)
        {
            count++;
        }

        temp = temp >> 1;
    }

    printf("Number of set bits in %u = %d\n", n, count);

    return 0;
}
