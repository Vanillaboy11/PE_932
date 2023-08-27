// Autor:  salvador isaac reyes varela  372917
// 2023/22/08
// Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
// RVS_ACT1_1_932

#include<stdio.h>

int main()
{
  float cal, prom, total;

  printf("Ingrese su calificacion 1 en escala 0-100: \n");
  scanf("%f", &cal);
  total = total + cal;
  printf("Ingrese su calificacion 2 en escala 0-100: \n");
  scanf("%f", &cal);
  total = total + cal;
  printf("Ingrese su calificacion 3 en escala 0-100: \n");
  scanf("%f", &cal);
  total = total + cal;
  printf("Ingrese su calificacion 4 en escala 0-100: \n");
  scanf("%f", &cal);
  total = total + cal;

  prom = total / 4;
  printf("%f ", prom);
  if (prom < 60)
  {
    printf("Reprobado");
  }
  if (prom >= 60)
  {
    printf("Aprobado!!");
  }
  
}