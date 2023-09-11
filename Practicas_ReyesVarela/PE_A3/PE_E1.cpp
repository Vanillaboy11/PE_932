// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Evaluar Optimización de codigo
// RVS_ACT3_1_932

#include <stdio.h>

int main()
{
  float cal, prom = 0; // declaracion de variables

  printf("Ingrese su calificacion 1: \n");
  scanf("%f", &cal);
  prom = prom + cal; // lee un dato y se suma a la variable prom
  printf("Ingrese su calificacion 2: \n");
  scanf("%f", &cal);
  prom = prom + cal;
  printf("Ingrese su calificacion 3: \n");
  scanf("%f", &cal);
  prom = prom + cal;

  printf("Su promedio es de : %.2f \n", prom / 3); // imprime el promedio

  if (prom >= 80)
  {
    if (prom <= 100)
    {
      printf("Excelente");
    }
    else
    {
      if (prom > 100)
      {
        printf("ERROR en promedio");
      }
      else
      {
        if (prom <= 90)
        {
          printf("Bien");
        }
        else
        {
          if (prom > 90)
          {
            printf("Muy bien");
          }
        }
      }
    }
  }

  else
  {
    if (prom >= 60)
    {
      if (prom >= 70)
      {
        printf("Regular");
      }
    }
    else
    {
      if (prom < 30)
      {
        printf("Repetir");
      }
      else
      {
        printf("Extraordinario");
      }
    }
  }
}