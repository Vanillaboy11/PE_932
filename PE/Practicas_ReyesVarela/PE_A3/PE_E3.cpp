// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora, (usar selección múltiple) 
// RVS_ACT3_3_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int ran, opc;
  srand(time(NULL));
  printf("Ingrese su accion por numero: \n1. Piedra \n2. Papel \n3. Tijeras \n");
  scanf("%d", &opc);

  ran = rand() % 3 + 1;

  switch (opc)
  {
  case 1:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;
  
  case 2:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;

  case 3:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;

  default:
    break;
  }

}