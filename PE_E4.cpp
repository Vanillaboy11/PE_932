// Autor:  salvador isaac reyes varela  372917
// 2023/22/08
// Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
// RVS_ACT1_4_932

#include<stdio.h>

int main()
{
  int sexo;
  printf("Ingrese su sexo segun la opcion (1.- Hombre 2.- Mujer): \n");
  scanf("%d", &sexo);

  if ((sexo == 1) && (sexo != 0))
  {
    printf("Hola eres Hombre");
  }
  else if ((sexo == 0) && (sexo != 1))
  {
    printf("Hola eres Mujer");
  }

}