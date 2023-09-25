#include <stdio.h>

int main()
{
    int age, code ;
    char init ;
    printf("Entrez votre âge :\n");
    scanf("%d",&age);
    printf("Entrez la première lettre de votre prénom :");
    fflush(stdin);
    scanf("%c",&init);
    code = (int)init;
    printf("Votre âge est de %d ans.\n",age);
    printf("Le code ASCII de init est : %d\n",code);
    printf("La première lettre de votre prénom est : %c\n",init);
}