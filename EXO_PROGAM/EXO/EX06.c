#include <stdio.h>

int main()
{
    float num1, num2, num3;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    printf("%g\n", (num1 + num2 + num3) / 3);

    return 0;
}