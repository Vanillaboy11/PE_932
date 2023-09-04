// Autor:  salvador isaac reyes varela  372917
// 2023/22/08
// un menú para realizar las 4 operaciones básicas
// RVS_ACT4_1_932

#include<stdio.h>

int main()
{
  char operacion;
  float n1, n2;
  
  printf("Ingrese un operador (+, -, /, *): \n");
  scanf("%c", &operacion);
  printf("Ingrese un numero: \n");
  scanf("%f", &n1);
  printf("Ingrese otro numero: \n");
  scanf("%f", &n2);

  if (operacion == '+')
  {
    printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
  }
  else
  {
    if (operacion == '-')
    {
      printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
    }
    else
    {
      if (operacion == '/')
      {
        printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
      }
      else
      {
        if (operacion == '*')
        {
          printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
        }   
      }
    }
  }

}