// Autor:  salvador isaac reyes varela  372917
// 2023/19/09
// cadenas de caracteres
// RVS_ACT7_P2_932

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int msges();
void menu();
void upper(char data[]);
void lower(char data[]);
void capital(char data[]);
int length(char data[]);
void reverse(char data[]);
void no_space(char data[]);
void read_string(char data[]);
void all_strings(char data[]);
void palindromo(char data[]);
void validar(char data[]);

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
  printf("1.-Imprimir Mayusculas\n");
  printf("2.-Imprimir minusculas\n");
  printf("3.-Imprimir Capital\n");
  printf("4.-Cantidad de caracteres\n");
  printf("5.-Imprimir al reves\n");
  printf("6.-Imprimir sin espacios\n");
  printf("7.-caracteres alfabeticos \n");
  printf("8.-Todas las funciones \n");
  printf("9.-Palindromo \n");
  printf("0.-Salir\n");
  printf("Elige una opcion: ");
  scanf("%d", &opc);
  return opc;
  system("CLS");
}

void menu()
{

  char data[30];
  int opc;
  opc = msg();
  switch (opc)
  {
  case 1:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    upper(data);
    break;

  case 2:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    lower(data);
    break;

  case 3:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    capital(data);
    break;

  case 4:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    system("CLS");
    printf("El largo de la cadena es: %d\n", length(data));
    break;

  case 5:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    reverse(data);
    break;

  case 6:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    no_space(data);
    break;

  case 7:
    read_string(data);
    for (int i = 0; data[i] != '\0'; i++)
    {
      printf("%c", data[i]);
    }
    printf("\n");
    break;

  case 8:
    system("CLS");
    printf("Dame una cadena de texto: ");
    fflush(stdin);
    gets(data);
    all_strings(data);
    break;

  case 9:
    validar(data);
    palindromo(data);
  }
}

// imprime la cadena en mayusculas
void upper(char data[])
{
  int i;
  for (i = 0; data[i] != 0; i++)
  {
    if (data[i] >= 'a')
    {
      if (data[i] <= 'z')
      {
        data[i] = data[i] - 32;
        printf("%c", data[i]);
      }
    }
  }
}

// imprime la cadena en minusculas
void lower(char data[])
{
  int i;
  for (i = 0; data[i] != 0; i++)
  {
    if (data[i] >= 'A')
    {
      if (data[i] <= 'Z')
      {
        data[i] += 32; 
        printf("%c", data[i]);
      }
    }
  }
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

void no_space(char data[])
{
  int len = length(data);
  int i;

  for (i = 0; i <= len; i++)
  {
    if (data[i] != ' ')
    {
      putchar(data[i]);
    }
  }

  printf("\n");
}

void read_string(char data[])
{
  int val = 0, j, i, k;

  do
  {

    system("CLS");
    if (val != 0)
    {
      printf("error en cadena.Intente de nuevo\n");
    }

    val = 0;
    i = 0;
    j = 0;
    k = 0;
    printf("SOLO CARACTERES DEL ALFABETO,No INICIAR NI TERMINAR CON ESPACIOS,\n");
    printf("SIN DOBLES ESPACIOS!!\n");
    printf("Dame una palabra: ");
    fflush(stdin);
    gets(data);

    while (data[i] != '\0')
    {
      i++;
    }

    if (data[0] == ' ')
    {
      val++;
    }
    if (data[i - 1] == ' ')
    {
      val++;
    }

    while (j < i)
    {
      if (data[j] == ' ')
      {
        if (data[j + 1] == ' ')
        {
          val++;
        }
      }
      j++;
    }

    while (k < i)
    {
      if (data[k] > 'z')
      {
        val++;
      }
      else
      {
        if (data[k] < 'a')
        {
          if (data[k] > 'Z')
          {
            val++;
          }
          else
          {
            if (data[k] < 'A')
            {
              if (data[k] != ' ')
              {
                val++;
              }
            }
          }
        }
      }
      k++;
    }

  } while (val != 0);

  printf("Yey!!\n");
}

void capital(char data[])
{
  int i = length(data);
  int j = 0;
  system("CLS");
  while (j < i)
  {
    while (j == 0)
    {
      if (data[j] >= 'a')
      {
        if (data[j] <= 'z')
        {
          data[j] -= 32;
        }
      }
      printf("%c", data[j]);
      j++;
    }
    while (j < i)
    {
      if (data[j] >= 'A')
      {
        if (data[j] <= 'Z')
        {
          data[j] += 32;
        }
      }
      printf("%c", data[j]);
      j++;
    }
  }
  printf("\n");
}

void all_strings(char data[])
{

  upper(data);
  lower(data);
  capital(data);
  reverse(data);
  no_space(data);
}

void palindromo(char data[])
{
  int i = length(data);
  int j, k, palin = 0;
  system("CLS");

  for (j = 0, k = i - 1; k < j; j++, k--)
  {
    if (data[j] != data[k])
    {

      palin++;
    }
  }

  if (palin == 0)
  {
    printf("Si es un palindromo");
  }
  else
  {
    printf("No es un palindromo");
  }

  printf("\n");
}

void validar(char data[])
{
  int val = 0, j, i, k;
  do
  {

    system("CLS");
    if (val != 0)
    {
      printf("error\n");
    }

    val = 0;
    i = 0;
    j = 0;
    k = 0;
    printf("SOLO MAYUSCULAS Y SIN DOBLES ESPACIOS!!\n");
    printf("Dame una palabra: ");
    fflush(stdin);
    gets(data);

    while (data[i] != '\0')
    {
      i++;
    }

    if (data[0] == ' ')
    {
      val++;
    }
    if (data[i - 1] == ' ')
    {
      val++;
    }

    while (j < i)
    {
      if (data[j] == ' ')
      {
        if (data[j + 1] == ' ')
        {
          val++;
        }
      }
      j++;
    }

    while (k < i)
    {
      if (data[k] > 'Z')
      {
        val++;
      }
      else
      {
        if (data[k] < 'A')
        {
          if (data[k] != ' ')
          {
            val++;
          }
        }
      }
      k++;
    }

  } while (val != 0);
}