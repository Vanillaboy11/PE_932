// Autor:  salvador isaac reyes varela  372917
// 2023/22/08
// menú para realizar conversiones de unidades de medida
// RVS_ACT4_2_932

#include<stdio.h>
#define IN 2.54
#define FT 30.48
#define MI 1.609
#define KM 1000

int main()
{
  int opc;
  float num;
  
  printf("Ingrese la opcion a usar: \n1.- cm a pulgadas \n2.- cm a pies \n3.- Km a millas \n4.- Pulgadas a cm \n5.- pies a cm \n6.- millas a Km \n");
  scanf("%d", &opc);
  printf("Ingrese un numero: \n");
  scanf("%f", &num);

  if (opc == 1)
  {
    printf("%.2f cm a in = %.2f", num, num * IN);
  }
  else
  {
    if (opc == 2)
    {
      printf("%.2f cm a ft = %.2f", num, num * FT);
    }
    else
    {
      if (opc == 3)
      {
        printf("%.2f km a mi = %.2f", num, num * MI);
      }
      else
      {
        if (opc == 4)
        {
          printf("%.2f in a cm = %.2f", num, num / IN);
        }
        else
        {
          if (opc == 5)
          {
            printf("%.2f ft a cm = %.2f", num, num / FT);
          }
          else
          {
            if (opc == 6)
            {
              printf("%.2f mi a km = %.2f", num, num / MI);
            }
          }
        } 
      }
    }
  }

}