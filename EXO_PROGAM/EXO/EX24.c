#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cot,vol;

    system("clear");
    printf("Indiquer la valeur du côté (m) :\n");
    scanf("%f",&cot);
    system("clear");

    vol=pow(cot,3);

    printf("Le volume est de %g m3\n",vol);

    return 0;
}