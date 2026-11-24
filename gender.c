#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE = 2
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter gender (1 for Male, 2 for Female): ");
    scanf("%d", (int *)&p.gender);

    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male");
    else if (p.gender == FEMALE)
        printf("Gender: Female");
    else
        printf("Invalid Gender");

    return 0;
}