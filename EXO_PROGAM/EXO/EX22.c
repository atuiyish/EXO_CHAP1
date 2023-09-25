#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,div,rest;

    system("clear");
    printf("Indiquer un nombre :\n");
    scanf("%d",&n);
    system("clear");

    div=n/16;
    rest=n%16;

    printf("%d/16=%d\v\n",n,div);
    printf("%dmod16=%d\n",n,rest);

    return 0;
}