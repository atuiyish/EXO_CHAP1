#include <stdio.h>

int main()
{
    int n, s;

    printf("Entrer valeur n :\n");
    scanf("%d", &n);

    s = ((n + 1) * n) / 2;

    printf("La somme est de %d\n", s);

    return 0;
}