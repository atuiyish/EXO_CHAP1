#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y;

    system("clear");
    printf("Indiquer la valeur de x: \n");
    scanf("%f",&x);
    system("clear");

    y = - ((4 * x) - 8) / 2;

    printf("La valeur de y est de %g\n",y);

    return 0;
}