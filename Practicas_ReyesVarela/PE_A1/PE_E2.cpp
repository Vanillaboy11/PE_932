// Autor:  salvador isaac reyes varela  372917
// 2023/22/08
// Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
// RVS_ACT1_2_932

#include<stdio.h>

int main()
{
  int num;
  printf("Ingrese un numero entero: \n");
  scanf("%d", &num);
  
  if (num % 2 == 0)
  {
    printf("PAR");
  }
  if (num % 2 != 0)
  {
    printf("IMPAR");
  }
  
}