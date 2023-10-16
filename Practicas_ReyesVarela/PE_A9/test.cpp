// Autor:  salvador isaac reyes varela  372917
// 2023/08/10
// FUNCIONES y METODOS DE ORDENACION Y BUSQUEDA
// RVS_ACT9_test_932

#include <stdio.h>
#include <stdlib.h>
#include "houseSpecial.h"

void menu();
int msg();
void llena_sin_repetir(int vect[], int n, int ri, int rf);      // llena un vector sin repetir datos usando la funcion "busq_seq"
void matriz_llena_sin_repetir(int mat[][4], int ri, int rf);    // llena una matriz sin repetir datos
int mat_busq_seq(int mat[4][4], int line, int column, int num); // busca un valor en la matriz (?)
void print_vect(int vect[]);                                    // imprime el vector
void print_matriz(int mat[4][4]);                               // imprime la matriz
void swap(void);                                                // intercambia valores
void improved_bubble_sort(int vect[], int n);                   // burbuja mejorada

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
      num = atoi(data);
      int i = busq_seq(vect, 15, num);
      if (i != -1)
      {
        printf("El numero %d se encuentra en la posicion %d\n", num, i);
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

void llena_sin_repetir(int vect[], int n, int ri, int rf)
{
  int num, rango, i;
  rango = (rf - ri + 1);

  for (i = 0; i < n; i++)
  {
    do
    {
      num = (rand() % rango) + ri;
    } while (busq_seq(vect, i, num) != -1);

    vect[i] = num;
  }
}

void matriz_llena_sin_repetir(int mat[4][4], int ri, int rf)
{
  int num, rango, i, j;
  rango = (rf - ri + 1);

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      do
      {
        num = (rand() % rango) + ri;
      } while (mat_busq_seq(mat, i, j, num) != -1);

      mat[i][j] = num;
    }
  }
}

int mat_busq_seq(int mat[4][4], int line, int column, int num)
{
  int i, j; // i es la fila y j es la columna
  for (i = 0; i < line; i++)
  {
    for (j = 0; j < column; j++)
    {
      if (mat[i][j] == num)
      {
        return i;
      }
    }
  }
  return -1;
}

void print_matriz(int mat[4][4])
{
  int i, j;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}

void print_vect(int vect[])
{
  int i;
  printf("Contenido del vector:\n");

  for (i = 0; i < 15; i++)
  {
    printf("%d ", vect[i]);
  }

  printf("\n");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// burbuja mejorada
void improved_bubble_sort(int vect[], int n)
{
  int i, j;
  int swapped;

  for (i = 0; i < n - 1; i++)
  {
    swapped = 0; // Inicializamos la variable swapped

    for (j = 0; j < n - i - 1; j++)
    {
      if (vect[j] > vect[j + 1])
      {
        swap(&vect[j], &vect[j + 1]);
        swapped = 1; // Indicamos que se realizó un swap
      }
    }

    // Si no hubo intercambios en esta pasada, el arreglo ya está ordenado
    if (swapped == 0)
    {
      break;
    }
  }
}
