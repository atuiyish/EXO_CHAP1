#include <stdio.h>

int main()
{
    int n, s;

    printf("Entrer valeur n :\n");
    scanf("%d", &n);

    s = ((n + 1) * (2 * n + 1) * n) / 6;

    printf("La somme est de %d\n", s);

    return 0;
}