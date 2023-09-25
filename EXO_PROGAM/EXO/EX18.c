#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,p,s;

    system("clear");
    printf("Indiquer la longueur du côté a :\n");
    scanf("%f",&a);
    system("clear");
    printf("Indiquer la longueur du côté b :\n");
    scanf("%f",&b);
    system("clear");
    printf("Indiquer la longueur du côté c :\n");
    scanf("%f",&c);
    system("clear");

    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("La surface vaut %g m2\v\n",s);

}