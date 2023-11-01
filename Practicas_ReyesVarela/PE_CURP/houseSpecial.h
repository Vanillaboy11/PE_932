// Autor:  salvador isaac reyes varela  372917
// 2023/08/10 // 2023/10/10
// FUNCIONES y METODOS DE ORDENACION Y BUSQUEDA
// RVS_ACT9_test_932
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int verify_int(void);            
int length(char data[]);    
int busq_seq(int vect[], int n, int num);  
int vali_num(void);       
void swap(void);   
void improved_bubble_sort(int vect[], int n);
void verify_char(const char data[], char string[]);
int verify_ranged(int lim_inf, int lim_sup);
int random_ranged(int ri, int rf);
int busq_seq_ord(int vect[], int n, int num);

int length(char data[])
{
  int i = 0, leng = 0;

  for (i = 0; data[i] != '\0'; i++) 
  {
    leng++;
  }
  return leng;
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
  char num[2];
  int i;
  do
  {
    gets(num);
    i = atoi(num);
    if (i > 399999 || i < 300000)
    {
      printf("Opcion invalida\n");
    }
  } while (i > 6 || i < 0);
  return i;
}

int verify_ranged(int lim_in, int lim_sup)
{
  char string[10];
  int opc;

  do
  {
    fflush(stdin);
    gets(string);
    opc = atoi(string);

    if (opc < lim_in || opc > lim_sup)
    {
      system("CLS");
      printf("Error\n");
    }
    system("CLS");
  } while (opc < lim_in || opc > lim_sup);
  return opc;
}

int random_ranged(int ri, int rf)
{
    int range = (rf - ri + 1);

    return rand() % range + ri;
}

void verify_char(const char data[], char string[])
{
  int ver = 0, j, i, k;
  do
  {

    system("CLS");
    if (ver != 0)
    {
      printf("Intente otra vez (solo use mayusculas)\n");
    }
    ver = 0;
    i = 0;
    j = 0;
    k = 0;
    printf("%s", data);
    fflush(stdin);
    gets(string);

    while (string[i] != '\0')
    {
      i++;
    }

    if (string[0] == '\0')
    {
      ver++;
    }

    if (string[0] == ' ')
    {
      ver++;
    }

    if (string[i - 1] == ' ')
    {
      ver++;
    }

    while (j < i)
    {
      if (string[j] == ' ')
      {
        if (string[j + 1] == ' ')
        {
          ver++;
        }
      }
      j++;
    }

    while (k < i)
    {
      if (string[k] > 'Z')
      {
        ver++;
      }
      else
      {
        if (string[k] < 'A')
        {
          if (string[k] != ' ')
          {
            ver++;
          }
        }
      }
      k++;
    }

  } while (ver != 0);
}

int busq_seq_ord(int vect[], int n, int num)
{
  int i;
  i = 0;
  while (i < n)
  {
    if (num >= vect[i])
    {
      if (num == vect[i])
      {
        return i;
      }
    }
    else
    {
      return -1;
    }
    i++;
  }
  return -1;
}