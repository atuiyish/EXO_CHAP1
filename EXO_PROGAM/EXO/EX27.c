#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float dist,time,vit;

    system("clear");
    printf("Indiquer la distance (Km) :\n");
    scanf("%f",&dist);
    system("clear");
    printf("Indiquer le temp (min) :\n");
    scanf("%f",&time);
    system("clear");

    vit = (dist * 60) / time;

    printf("La vitesse est de %g Km/h\n",vit);

    getchar ();
}