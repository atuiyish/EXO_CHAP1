#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;

    system("clear");
    printf("Indiquer la valeur de a: \n");
    scanf("%f",&a);
    system("clear");
    printf("Indiquer la valeur de b: \n");
    scanf("%f",&b);
    system("clear");

    c = sqrt(pow(a,2) + pow(b,2));

    printf("L'hypoténuse est de %g m\n",c);

    getchar ();
}