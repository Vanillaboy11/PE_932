#include <stdio.h>
#include <stdlib.h>
#include "houseSpecial.h"

void menu();
int msg();

int main()
{
  menu();

  return 0;
}

int msg()
{
  int opc;
  system("CLS");
  printf("Menu\n");
  printf("1.-Llenar vector\n");
  printf("2.-Llenar matriz\n");
  printf("3.-Imprimir vector\n");
  printf("4.-Imprimir matriz\n");
  printf("5.-Ordenar vector\n");
  printf("6.-Buscar valor en vector\n");
  printf("0.-Salir\n");
  printf("Elige una opcion: ");
  opc = vali_num();
  return opc;
  system("CLS");
}

void menu()
{
  int opc;
  int ri, rf, n;
  do
  {
    opc = msg();
    switch (opc)
    {
    case 1:
      system("CLS");
      int vect[15];
      n = 15, ri = 100, rf = 200;
      llena_sin_repetir(vect, n, ri, rf);
      break;

    case 2:
      system("CLS");
      int mat[4][4];
      ri = 1, rf = 16;
      matriz_llena_sin_repetir(mat, ri, rf);
      break;

    case 3:
      system("CLS");
      print_vect(vect);
      system("pause");
      break;

    case 4:
      system("CLS");
      print_matriz(mat);
      system("pause");
      break;

    case 5:
      system("CLS");
      improved_bubble_sort(vect, n);
      break;

    case 6:
      system("CLS");
      int num;
      char data[15];
      printf("Ingrese un valor a buscar: ");
      gets(data);
      num = atoi (data);
      int i = busq_seq(vect, 15, num);
      if (i != -1)
      {
        printf("El numero %d se encuentra en la posicion %d\n",num, i);
      }
      else
      {
        printf("El numero ingresado no se encuentra en el vector\n");
      }
      system("pause");
      break;
    }
  } while (opc != 0);
}