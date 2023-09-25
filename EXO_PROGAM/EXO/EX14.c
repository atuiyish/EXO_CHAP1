#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float diam, surf, circonf;

    printf("Indiquer le diamètre :\n\n");
    scanf("%f", &diam);

    putchar('\n');

    surf = (PI * diam * diam) / 4;
    circonf = PI * diam;

    printf("La surface est de %gm2\n\n", surf);
    printf("La circonference est de %gm\n\n", circonf);

    return 0;
}