// Autor:  salvador isaac reyes varela  372917
// 2023/19/09
// cadenas de caracteres
// RVS_ACT7_P1_932

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char upper(char data[]);
int length(char data[]);
void reverse(char data[]);
void print_string(char data[]);
void line(char data[]);
void r_line(char data[]);
void string_minus_right(char data[]);
void r_string_minus_right(char data[]);
void string_minus_left(char data[]);
void r_string_minus_left(char data[]);
void consonants(char data[]);
void vocals(char data[]);

int main()
{
  char string[20];
  printf("Ingrese cualquier cosa: ");
  fflush(stdin);
  gets(string);
  string[20] = upper(string);

  printf("salida 1\n");
  print_string(string);

  printf("\nsalida 2\n");
  reverse(string);

  printf("\nsalida 3\n");
  line(string);

  printf("\nsalida 4\n");
  r_line(string);

  printf("\nsalida 5\n");
  string_minus_right(string);

  printf("\nsalida 6\n");
  r_string_minus_right(string);

  printf("\nsalida 7\n");
  string_minus_left(string);

  printf("\nsalida 8\n");
  r_string_minus_left(string);

  printf("\nsalida 9\n");
  consonants(string);

  printf("\nsalida 10\n");
  vocals(string);
}


char upper(char data[])
{
  int i;
  for (i = 0; data[i] != 0; i++)
  {
    if (data[i] >= 'a')
    {
      if (data[i] <= 'z')
      {
        data[i] = data[i] - 32;
      }
    }
  }
  return 0;
}


int length(char data[])
{
  int i = 0, leng = 0;

  for (i = 0; data[i] != '\0'; i++)
  {
    leng++;
  }
  return leng;
}


// salida 1, solo imprime la cadena en mayusculas
void print_string(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    printf("%c", data[i]);
  }
  printf("\n");
}


// salida 2, imprime la cadena al reves
void reverse(char data[])
{
  int leng = strlen(data);
  int i;
  for (i = leng - 1; i >= 0; i--)
  {
    printf("%c", data[i]);
  }
  printf("\n");
}


// salida 3, la cadena por lineas
void line(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    printf("%c\n", data[i]);
  }
  printf("\n");
}


// salida 4, la cada alreves por lineas
void r_line(char data[])
{
  int leng = length(data);
  int i;
  for (i = leng - 1; i >= 0; i--)
  {
    printf("%c\n", data[i]);
  }
  printf("\n");
}


// salida 5, imprime la cadena eliminando caracteres de derecha a izquierda
void string_minus_right(char data[])
{
  int leng = length(data);
  int i = leng, j;
  while (i != 0)
  {
    for (j = 0; j < i; j++)
    {
      printf("%c", data[j]);
    }
    i--;
    printf("\n");
  }
}


// salida 6, imprime la cadena alreves eliminando caracteres de derecha a izquierda
void r_string_minus_right(char data[])
{
  int leng = length(data);
  int i = leng, j;
  while (i > 0)
  {
    for (j = i - 1; j >= 0; j--)
    {
      printf("%c", data[j]);
    }
    i--;
    printf("\n");
  }
}


// salida 7, imprime la cadena eliminando caracteres de izquierda a derecha
void string_minus_left(char data[])
{
  int leng = length(data);
  int i = 0, j;
  while (i <= leng)
  {
    for (j = i; j < leng; j++)
    {
      printf("%c", data[j]);
    }
    i++;
    printf("\n");
  }
}


// salida 8, imprime la cadena alreves eliminando caracteres de izquierda a derecha
void r_string_minus_left(char data[])
{
  int leng = length(data);
  int i = 0, j;
  while (i <= leng)
  {
    for (j = i ; j >= 0; j--)
    {
      printf("%c", data[j]);
    }
    i++;
    printf("\n");
  }
}


// salida 9, imprime solo las consonantes de la cadena
void consonants(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    if (data[i] != 65 && data[i] != 97 && data[i] != 69 && data[i] != 101 && data[i] != 73 && data[i] != 105 && data[i] != 79 && data[i] != 111 && data[i] != 85 && data[i] != 117)
    {
      printf("%c", data[i]);
    }
  }
  printf("\n");
}

// salida 10, imprime solo las vocales de la cadena
void vocals(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    if (data[i] == 65 || data[i] == 97 || data[i] == 69 || data[i] == 101 || data[i] == 73 || data[i] == 105 || data[i] == 79 || data[i] == 111 || data[i] == 85 || data[i] == 117)
    {
      printf("%c", data[i]);
    }
  }
  printf("\n");
}
