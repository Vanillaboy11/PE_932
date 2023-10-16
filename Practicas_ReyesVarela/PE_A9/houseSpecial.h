// Autor:  salvador isaac reyes varela  372917
// 2023/08/10
// FUNCIONES y METODOS DE ORDENACION Y BUSQUEDA
// RVS_ACT9_test_932

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int verify_int(void);                                           // verifica que el valor introducido sea un numero por completo
int length(char data[]);                                        // mide el largo de una cadena
int busq_seq(int vect[], int n, int num);                       // busca que un numero en un vector
int vali_num(void);                                             // valida un numero dentro de un rango

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

