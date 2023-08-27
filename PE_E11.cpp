// Autor:  salvador isaac reyes varela  372917
// 2023/27/08
// Algoritmo que sirva para desplegar el Total de una llamada telefónica
// RVS_ACT1_11_932

#include<stdio.h>

int main()
{
  int min, subtot, tipo;
  float tot, iva;

  printf("Ingrese el tipo de llamada realizada en numeros (1. local, 2. nacional, 3. internacional): \n");
  scanf("%d", &tipo);
  printf("Ingrese la duracion de la llamada en minutos de la llamada: \n");
  scanf("%d", &min);

  if (tipo == 1)
  {
    subtot = min * 3;
    iva = subtot * 0.16;
    tot = subtot + iva;
    printf("subtotal: %d \n", subtot);
    printf("IVA: %.2f \n", iva);
    printf("total: %.2f \n", tot);
  }
  else
  {
    if (tipo == 2)
    {
      if (min <= 3)
      {
        subtot = min * 7;
        iva = subtot * 0.16;
        tot = subtot + iva;
        printf("subtotal: %d \n", subtot);
        printf("IVA: %.2f \n", iva);
        printf("total: %.2f \n", tot);
      }
      else
      {
        if (min > 3)
        {
          subtot = ((7 * 3) + ((min - 3) * 2));
          iva = subtot * 0.16;
          tot = subtot + iva;
          printf("subtotal: %d \n", subtot);
          printf("IVA: %.2f \n", iva);
          printf("total: %.2f \n", tot);
        }
      }
    }
    else
    {
      if (tipo == 3)
      {
        if (min <= 2)
        {
          subtot = min * 9;
          iva = subtot * 0.16;
          tot = subtot + iva;
          printf("subtotal: %d \n", subtot);
          printf("IVA: %.2f \n", iva);
          printf("total: %.2f \n", tot);
        }
        else
        {
          if (min > 2)
          {
            subtot = ((9 * 2) + ((min - 2) * 4));
            iva = subtot * 0.16;
            tot = subtot + iva;
            printf("subtotal: %d \n", subtot);
            printf("IVA: %.2f \n", iva);
            printf("total: %.2f \n", tot);
          }
        }
      }
    }
  }

}