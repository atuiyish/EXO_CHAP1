#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lb, lB, lh, surf;

    system("clear");
    printf("Entrer la petite base en métre :\n");
    scanf("%f", &lb);
    system("clear");
    printf("Entrer la grande base en métre :\n");
    scanf("%f", &lB);
    system("clear");
    printf("Entrer la hauteur en métre :\n");
    scanf("%f", &lh);
    system("clear");

    surf=((lB+lb)*lh)/2;

    printf("La surface est de %gm2\n", surf);

    return 0;
}