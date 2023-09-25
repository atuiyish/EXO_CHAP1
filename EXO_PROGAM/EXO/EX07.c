#include <stdio.h>

int main()
{
    int age;

    printf("Introduire son age :\n");

    scanf("%d", &age);
    printf("Dans 10 ans tu aurras %d ans\n", age + 10);
    printf("Dans 15 ans tu aurras %d ans\n", age + 15);
    printf("Dans 25 ans tu aurras %d ans\n", age + 25);

    return 0;
}