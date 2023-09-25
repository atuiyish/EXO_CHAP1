#include <stdio.h>

int main()
{
    float l,s,p;

    printf("Entrer la longeur du carré :\n");
    scanf("%f",&l);

    s=l*l;
    p=l*4;

    printf("La surface est de %gm2 et le périmetre de %gm\n",s,p);

    return 0;
}