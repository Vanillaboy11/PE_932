// Autor:  salvador isaac reyes varela  372917
// 2023/26/08
// Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
// RVS_ACT1_8_932

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

  if (num1 >= num2)
  {
    if(num2 >= num3)
    {
      printf("%d es el numero medio \n", num2);
    }
    else
    {
      if (num1 >= num3)
      {
        printf("%d es el numero medio \n", num3);
      }
      else
      {
        printf("%d es el numero medio \n", num1);
      }
    }
  }
  else
  {
    if (num1 >= num3)
    {
      printf("%d es el numero medio \n", num1);
    }
    else
    {
      if(num2 >= num3)
      {
        printf("%d es el numero medio \n", num3);
      }
      else
      {
        printf("%d es el numero medio \n", num2);
      }
    }
  }
  
}