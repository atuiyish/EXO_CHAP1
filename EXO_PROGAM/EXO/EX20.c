#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sin_a,sin_b,cos_a,cos_b,a,b,c,d;

    system("clear");
    printf("Indiquer la valeur de sinus a :\n");
    scanf("%f",&sin_a);
    system("clear");
    printf("Indiquer la valeur de cosinus a :\n");
    scanf("%f",&cos_a);
    system("clear");
    printf("Indiquer la valeur de sinus b :\n");
    scanf("%f",&sin_b);
    system("clear");
    printf("Indiquer la valeur de cosinus b :\n");
    scanf("%f",&cos_b);

    a=(cos_a*cos_b)-(sin_a*sin_b);
    b=(cos_a*cos_b)+(sin_a*sin_b);
    c=(sin_a*cos_b)+(sin_b*cos_a);
    d=(sin_a*cos_b)-(sin_b*cos_a);

    printf("la valeur de cos(a+b) vaut %g\n",a);
    printf("la valeur de cos(a-b) vaut %g\n",b);
    printf("la valeur de sin(a+b) vaut %g\n",c);
    printf("la valeur de sin(a-b) vaut %g\n",d);

    return 0;
}