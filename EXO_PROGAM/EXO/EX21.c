#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,coef_ang;

    system("clear");
    printf("Indiquer la valeur x1 :\n");
    scanf("%f",&x1);
    system("clear");
    printf("Indiquer la valeur y1 :\n");
    scanf("%f",&y1);
    system("clear");
    printf("Indiquer la valeur x2 :\n");
    scanf("%f",&x2);
    system("clear");
    printf("Indiquer la valeur y2 :\n");
    scanf("%f",&y2);
    system("clear");

    coef_ang=(y2-y1)/(x2-x1);

    printf("%g - %g\n",y2,y1);
    printf("----- = %g\n",coef_ang);
    printf("%g - %g\n",x2,x1);

    return 0;
}