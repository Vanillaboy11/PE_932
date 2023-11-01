// Autor:  salvador isaac reyes varela  372917
// 2023/26/09
// Vectores y matrices
// RVS_ACT8_P1_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// funciones utilizadas
int msges();
void menu();
int fill_vect(void);
int fill_vect_ran(void);
int fill_vect_sum(int vect1[10], int vect2[10]);
void print_vect(int vect[], int vect2[], int vect3[]);
int fill_mat(int vect1[], int vect2[]);
void print_mat(int mat[4][4]);

// funcion principal
int main()
{
  menu();

  return 0;
}

// despliega los mensajes
int msges()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- Llenar vector de forma manual \n");
  printf("2.- LLenar vector de forma aleatoriamente \n");
  printf("3.- LLenar vector \n");
  printf("4.- Imprimir vectores \n");
  printf("5.- LLenar matriz 4x4 \n");
  printf("6.- Imprimir matriz \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}

// imprime el menu
void menu()
{
  int op;
  int vect_1[10], vect_2[10], vect_3[20];
  int mat[4][4];
  do
  {
    op = msges();
    switch (op)
    {
    case 1:
      vect_1[10] = fill_vect();
      break;
    case 2:
      vect_2[10] = fill_vect_ran();
      break;
    case 3:
      vect_3[20] = fill_vect_sum(vect_1, vect_2);
      break;
    case 4:
      print_vect(vect_1, vect_2, vect_3);
      break;
    case 5:
      mat[4][4] =fill_mat(vect_1, vect_2);
      break;
    case 6:
      print_mat(mat);
      break;
    }
  } while (op != 0);
}

// llena el vector de forma manual
int fill_vect()
{
  char value[2]; // declara que el numero de digitos a utilizar
  int i, val, vect1[10];

  puts("Solo numeros del 30 a 70 \n");
  for (i = 0; i < 10;)
  {
    printf("Ingrese el dato %d: \n", i);
    fflush(stdin);     // descarta la basura
    gets(value);       // lee la cadena
    val = atoi(value); // convierte la cadena a numeros enteros y se la asigna a val

    if (val >= 30 && val <= 70) // valida que el numero sea entre 30 y 70
    {
      vect1[i] += val; // asigna el valor a la posicion del vector
      i++;
    }
  }

  return vect1[10]; // regresa el vector con valores
}

// llena el vector de forma aleatoria
int fill_vect_ran()
{
  srand(time(NULL));
  int vect2[10];
  int used[20] = {0}; // Un arreglo para rastrear números ya usados

  int ran, con = 0;

  while (con < 10)
  {
    ran = (rand() % 20) + 1; // Generar un número aleatorio entre 1 y 20

    if (used[ran - 1] == 0) // Verificar si el número ya ha sido usado
    {
      vect2[con] = ran;  // Asignar el número al vector
      used[ran - 1] = 1; // Marcar el número como usado
      con++;
    }
  }

  return vect2[10];
}

int fill_vect_sum(int vect1[10], int vect2[10])
{
  int i, vect3[20]; // genera
  for (i = 0; i < 20; i++)
  {
    vect3[i] = vect1[i];
    vect3[i + 1] = vect2[i];
  }

  return vect3[20];
}

void print_vect(int vect[], int vect2[], int vect3[])
{
  int i;
  printf("Vector 1");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", vect[i]);
  }
  printf("\n");

  printf("Vector 2");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", vect2[i]);
  }
  printf("\n");

  printf("Vector 3");
  for (i = 0; i < 20; i++)
  {
    printf("%d ", vect3[i]);
  }
  printf("\n");
  system("pause");
}

int fill_mat(int vect1[], int vect2[])
{
  int i, mat[20];
  for (i = 0; i < 20; i++)
  {
    mat[i] = vect1[i];
    mat[i + 1] = vect2[i];
  }

  return mat[20];
}

void print_mat(int mat[4][4])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  system("pause");
}
