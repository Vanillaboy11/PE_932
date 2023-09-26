// Autor:  salvador isaac reyes varela  372917
// 2023/01/09
// Calcular el Total a pagar por consumo de agua
// RVS_ACT4_6_932

#include<stdio.h>
#define R1 50
#define R2 8
#define R3 10
#define R4 11

int main()
{
  int m3a, subt, r;
  float iva;
  printf("Ingrese la cantidad de m3: ");
  scanf("%d", &m3a);

  if (m3a >= 4)
  {
    r = R1;
    subt = r * m3a;
    iva = 0.16 * subt;
    printf("Subtotl: %d\n", subt);
    printf("iva: %.2f\n", iva);
    printf("total: %.2f\n", iva + subt);
  }
  else
  {
    if (m3a == 5 && m3a <= 15)
    {
      r = R2;
      subt = r * m3a;
      iva = 0.16 * subt;
      printf("Subtotl: %d\n", subt);
      printf("iva: %.2f\n", iva);
      printf("total: %.2f\n", iva + subt);
    }
    else
    {
      if (m3a == 16 && m3a <= 50)
      {
        r = R3;
        subt = r * m3a;
        iva = 0.16 * subt;
        printf("Subtotl: %d\n", subt);
        printf("iva: %.2f\n", iva);
        printf("total: %.2f\n", iva + subt);
      }
      else
      {
        if (m3a >= 51)
        {
          r = R3;
          subt = r * m3a;
          iva = 0.16 * subt;
          printf("Subtotl: %d", subt);
          printf("iva: %.2f", iva);
          printf("total: %.2f", iva + subt);
        } 
      }
    }
  }
  
}