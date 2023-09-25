#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float rayon,surf,circonf;

    printf("Indiquer le rayon :\n\n");
    scanf("%f", &rayon);

    putchar('\n');

    surf = PI * rayon * rayon;
    circonf = 2 * PI * rayon;

    printf("La surface est de %gm2\n\n", surf);
    printf("La circonference est de %gm\n\n", circonf);

    return 0;
}
