// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que lea 3 números y despegarlos en forma ascendente (usar AND o OR)
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

    if (num1 <= num2 && num1 <= num3)
    {
        printf("%d, ", num1);
        if (num2 <= num3)
        {
            printf("%d, %d\n", num2, num3);
        }
        else
        {
            printf("%d, %d\n", num3, num2);
        }
    }
    else
    {
        if (num2 <= num1 && num2 <= num3)
        {
            printf("%d, ", num2);
            if (num1 <= num3)
            {
                printf("%d, %d\n", num1, num3);
            }
            else
            {
                printf("%d, %d\n", num3, num1);
            }
        }
        else
        {
            printf("%d, ", num3);
            if (num1 <= num2)
            {
                printf("%d, %d\n", num1, num2);
            }
            else
            {
                printf("%d, %d\n", num2, num1);
            }
        }
    }
    
        return 0;
    }
