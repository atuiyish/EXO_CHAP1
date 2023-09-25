#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Introduire 2 valeurs :\n");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("a = %d et b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("a = %d et b = %d\n", a, b);
    getchar();
}