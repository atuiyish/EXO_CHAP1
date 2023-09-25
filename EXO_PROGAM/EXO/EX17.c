#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x;

    system("clear");
    printf("Indiquer la valeur a :\n");
    scanf("%f",&a);
    system("clear");
    printf("Indiquer la valeur b :\n");
    scanf("%f",&b);
    system("clear");
    printf("Indiquer la valeur c :\n");
    scanf("%f",&c);
    system("clear");

    x=(c-b)/a;

    printf("X vaut %g\v\n",x);
    return 0;
}