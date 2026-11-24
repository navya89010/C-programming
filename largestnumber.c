#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, largest;

    if (argc < 2)
    {
        printf("Please enter numbers as command line arguments.");
        return 0;
    }

    largest = atoi(argv[1]);

    for (i = 2; i < argc; i++)
    {
        if (atoi(argv[i]) > largest)
        {
            largest = atoi(argv[i]);
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}