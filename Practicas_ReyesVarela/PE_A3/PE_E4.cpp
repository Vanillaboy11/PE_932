// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que lea 3 numeros y desplegar cuál numero es el mayor (usar AND o OR)
// RVS_ACT3_4_932

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El primer numero (%d) es el mayor.\n", num1);
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("El segundo numero (%d) es el mayor.\n", num2);
        }
        else
        {
            if (num3 > num1 && num3 > num2)
            {
                printf("El tercer numero (%d) es el mayor.\n", num3);
            }
        }
    }

    return 0;
}
