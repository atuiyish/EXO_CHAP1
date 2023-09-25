#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,n,res;

    system("clear");
    printf("Indiquer les nombres :\n");
    scanf("%f",&a);
    scanf("%f",&b);
    system("clear");

    n=a*b;
    res=sqrt(n);

    printf("La moyenne géometrique est de %g\v\n",res);
    return 0;
}