// Autor:  salvador isaac reyes varela  372917
// 2023/22/08   /  2023/26/08
// Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar mensajes segun la condicion verdadera
// RVS_ACT1_5_932

#include<stdio.h>

int main()
{
  float cal, prom, total = 0;
  printf("Ingrese su calificacion 1: \n");
  scanf("%f", &cal);
  total = total + cal;
  printf("Ingrese su calificacion 2: \n");
  scanf("%f", &cal);
  total = total + cal;
  printf("Ingrese su calificacion 3: \n");
  scanf("%f", &cal);
  total = total + cal;
  prom = total / 3;
  printf("Su promedio es de : %f \n", prom);

  if (prom < 30)
  {
    if ( (prom >=30) && (prom <60))
    {
      if ( (prom >=60) && (prom <70))
      {
        if ((prom >=70) && (prom <80))
        {
          if ((prom >=80) && (prom <90))
          {
            if((prom >=90) && (prom <98))
            {
              if (prom > 100)
              {
                printf("Error en promedio");
              }
            }
            else
            {
              printf("Excelente");
            }
          }
          else
          {
            printf("Muy bien");
          }
        }
        else
        {
          printf("Bueno");
        }
      }
      else
      {
        printf("Regular");
      }
    }
    else
    {
      printf("Extraordinario");
    }
  }
  else
  {
    printf("Repetir");
  }
  
}