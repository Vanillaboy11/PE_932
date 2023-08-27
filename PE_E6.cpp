// Autor:  salvador isaac reyes varela  372917
// 2023/22/08      /   2023/26/08
// Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar mensajes segun la condicion falsa
// RVS_ACT1_6_932

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
    printf("Repetir");
  }
  else
  {
    if ( (prom >=30) && (prom <60))
    {
      printf("Extraordinario");
    }
    else 
    {
      if ( (prom >=60) && (prom <70))
      {
        printf("Suficiente");
      }
      else
      {
        if ((prom >=70) && (prom <80))
        {
          printf("Regular");
        }
        else
        {
          if ((prom >=70) && (prom <80))
          {
            printf("Regular");
          }
          else
          {
            if ((prom >=80) && (prom <90))
            {
              printf("Bueno");
            }
            else
            {
              if((prom >=90) && (prom <98))
              {
                printf("Muy bien");
              }
              else
              {
                if ((prom >=98) && (prom <=100))
                {
                  printf("Excelente");
                }
                else
                {
                  printf("Error en promedio");
                }
              } 
            } 
          }
          
        }
      }
    }
  }
  
}