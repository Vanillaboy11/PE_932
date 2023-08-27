// Autor:  salvador isaac reyes varela  372917
// 2023/26/08
// Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
// RVS_ACT1_7_932

#include<stdio.h>

int main()
{
  int num1, num2, num3;

  printf("Ingrese un numero: ");
  scanf("%d", &num1);
  printf("Ingrese un segundo numero: ");
  scanf("%d", &num2);
  printf("Ingrese un tercer numero: ");
  scanf("%d", &num3);

  if ((num1 <= num2) && (num1 <= num3))
  {
    printf("%d es el numero menor \n", num1);
  }
  else
  {
    if ((num2 <= num3) && (num2 <= num1))
    {
      printf("%d es el numero menor \n", num2);
    }
    else
    {
      if ((num3 <= num1) && (num3 <= num2))
      {
        printf("%d es el numero menor \n", num3);
      }
    }
  }
  
}