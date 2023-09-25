#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, result;

    system("clear");
    printf("Veuillez enter une valeur réelle pour a\n");
    scanf("%f",&a);
    system("clear");
    printf("Veuillez entrer une valeur réelle pour b\n");
    scanf("%f",&b);
    result=pow(a,b);
    system("clear");
    printf("La valeur de %g exposant %g vaut : %g\n",a,b,result);
    getchar();
}