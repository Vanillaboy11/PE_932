// Autor:  salvador isaac reyes varela  372917
// 2023/27/08
// Programa que sirva para calcular el salario semanal de un trabajador
// RVS_ACT1_10_932

#include<stdio.h>
#define JORNADA_NORMAL 40

int main()
{
  int hrsem, hrsal, regsal, exthr = 0, totsal;
  printf("Ingrese sus horas semanales: ");
  scanf("%d", &hrsem);
  printf("Ingrese su salario por hora: ");
  scanf("%d", &hrsal);
  regsal = hrsal * hrsem;

  printf("------------------------------------------------------------------------------------ \n");

  if (hrsem <= JORNADA_NORMAL)
  {
    totsal = regsal;
    printf("Horas a la semana: %d \n", hrsem);
    printf("Salario x hora: %d \n", hrsal);
    printf("Su salario regular es de: %d \n", regsal);
    printf("salario x horas extra: %d \n", exthr);
    printf("Salario semanal total: %d \n", totsal);
  }
  else
  {
    if (hrsem > JORNADA_NORMAL)
    {
      if (hrsem <= 49)
      {
        exthr = (hrsal * 9);
        totsal = regsal;
        totsal = regsal + exthr;
        printf("Horas a la semana: %d \n", hrsem);
        printf("Salario x hora: %d \n", hrsal);
        printf("Su salario regular es de: %d \n", regsal);
        printf("salario x horas extra: %d \n", exthr);
        printf("Salario semanal total: %d \n", totsal);
      }
      else
      {
        if (hrsem > 49)
        {
          exthr = ((hrsal * 9) + ((hrsem - 49) * hrsal * 3));
          totsal = regsal;
          totsal = regsal + exthr;
          printf("Horas a la semana: %d \n", hrsem);
          printf("Salario x hora: %d \n", hrsal);
          printf("Su salario regular es de: %d \n", regsal);
          printf("salario x horas extra: %d \n", exthr);
          printf("Salario semanal total: %d \n", totsal);
        }
      }
    }
  }
  
}