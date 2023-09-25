#include <stdio.h>

int main()
{
    int code ;
    char car;
    printf("Entrez un caractère : \n");
    scanf("%c",&car);
    code = (int)car ;
    printf("Vous avez saisi : \"%c\".\n",car);
    printf("Le code ASCII de car est : %d.",code);
}