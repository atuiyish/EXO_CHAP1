#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Introduire 2 valeurs :\n");

    scanf("%f", &a);
    scanf("%f", &b);

    c = b * 2 - a;

    printf("%g est la moyenne de %g et %g\n", b, a, c);

    return 0;
}