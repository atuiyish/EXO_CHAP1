#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

int main()
{
    float vol,hau,diam;

    system("clear");
    printf("Indiquer le volume (m3):\n");
    scanf("%f",&vol);
    system("clear");
    printf("Indiquer la hauteur (m):\n");
    scanf("%f",&hau);
    system("clear");

    diam = (sqrt(1 / ((hau * PI) / (vol * 4))));

    printf("Le diamétre est de %.1fm\n",diam);

    return 0;
}