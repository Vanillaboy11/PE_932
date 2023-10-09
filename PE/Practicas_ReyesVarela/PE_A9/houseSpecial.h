#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int verify_int(void);                                      // verifica que el valor introducido sea un numero por completo
int length(char data[]);                                   // mide el largo de una cadena
int busq_seq(int vect[], int n, int num);                  // busca que un numero en un vector
void llena_sin_repetir(int vect[], int n, int ri, int rf); // llena un vector sin repetir datos usando la funcion "busq_seq"
int vali_num(void);                                        // valida un numero dentro de un rango
void matriz_llena_sin_repetir(int mat[][4], int ri, int rf);    // llena una matriz sin repetir datos
int mat_busq_seq(int mat[4][4], int line, int column, int num);   // busca un valor en la matriz (?)
void print_vect(int vect[]);                                      // imprime el vector
void print_matriz(int mat[4][4]);                                     // imprime la matriz
void swap(void);                                            // intercambia valores
void improved_bubble_sort(int vect[], int n);               // burbuja mejorada

int length(char data[])
{
  int i = 0, leng = 0;

  for (i = 0; data[i] != '\0'; i++) // cuenta la cantidad de caracteres incluyendo espacios hasta el valor '\0' ( conjunto vacio)
  {
    leng++; // almacena la cantidad de caracteres
  }
  return leng; // regresa el valor obtenido
}

int verify_int()
{

  int isNumber = 1;
  do
  {
    char num[20];
    gets(num);
    for (int i = 0; i < length(num); i++)
    {
      if (num[i] < '0' || num[i] > '9')
      {
        isNumber = 0;
        break;
      }
    }
  } while (isNumber == 0);
  return 0;
}

int busq_seq(int vect[], int n, int num)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (vect[i] == num)
    {
      return i;
    }
  }
  return -1;
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

int vali_num(void)
{
  char num[20];
  int i;
  do
  {
    gets(num);
    i = atoi(num);
    if (i > 6 || i < 0)
    {
      printf("Opcion invalida\n");
    }
  } while (i > 6 || i < 0);
  return i;
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