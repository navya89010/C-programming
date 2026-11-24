#include <stdio.h>

int globalVar = 100;

extern int globalVar;

void demonstrateAuto()
{
    auto int a = 10;

    printf("\n--- AUTO STORAGE CLASS ---\n");
    printf("Auto variable = %d\n", a);
}

void demonstrateStatic()
{
    static int s = 0;

    s++;

    printf("\n--- STATIC STORAGE CLASS ---\n");
    printf("Static variable = %d\n", s);
}

void demonstrateRegister()
{
    register int r = 20;

    printf("\n--- REGISTER STORAGE CLASS ---\n");
    printf("Register variable = %d\n", r);
}

void demonstrateExtern()
{
    printf("\n--- EXTERN STORAGE CLASS ---\n");
    printf("Global variable = %d\n", globalVar);
}

int main()
{
    printf("SCOPE AND STORAGE CLASSES IN C\n");

    demonstrateAuto();

    demonstrateStatic();
    demonstrateStatic();
    demonstrateStatic();

    demonstrateRegister();

    demonstrateExtern();

    return 0;
}