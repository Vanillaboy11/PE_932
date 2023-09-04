// Autor:  salvador isaac reyes varela  372917
// 2023/02/09
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora
// RVS_ACT4_8_932


#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
  int ran, opc;
  srand(time(NULL));
  printf("Ingrese su accion por numero: \n1. Piedra \n2. Papel \n3. Tijeras \n");
  scanf("%d", &opc);

  ran = rand() % 3 + 1;

  // cadena de seleccion
  if(opc > ran)
  {
    printf("Gana el jugador");  
  }
  else
  {
    if (opc == ran)
    {
      printf("Es un empate");
    }
    else
    {
      if (opc < ran)
      {
        printf("Gana la computadora");
      }
    }
  }

}
