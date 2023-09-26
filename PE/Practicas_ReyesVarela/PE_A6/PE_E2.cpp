// Autor:  salvador isaac reyes varela  372917
// 2023/14/09
// Menu de ejercicios
// RVS_ACT6_P2_932

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int msges();
void menu();
void Examenes(void);
void Tablas(void);
void Media(void);
void Pesos(void);
void Bajas(void);
int validar(char val[]);
int validar_baja(char val[]);
int validar_cal(char val[]);

int main()
{
  menu();

  return 1;
}

int msges()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- EXAMENES \n");
  printf("2.- TABLAS \n");
  printf("3.- SUMA Y MEDIA \n");
  printf("4.- PESOS \n");
  printf("5.- BAJAS \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}

void menu()
{
  int op;
  op = msges();
  switch (op)
  {
  case 1:
    Examenes();
    break;
  case 2:
    Tablas();
    break;
  case 3:
    Media();
    break;
  case 4:
    Pesos();
    break;
  case 5:
    Bajas();
    break;
  }
}

void Examenes(void)
{
  int sin_der = 0, ac = 0, eva = 0, i, sal;
  char ent[256];
  for (i = 1; i <= 40;)
  {
    printf("Ingrese la calificacion es escala 0-100, alumno %d: \n", i);
    sal = validar_cal(ent);
    ac = ac + sal;
    eva++;
    if (eva >= 5)
    {
      ac /= 5;
      if (ac < 50)
      {
        sin_der++;
      }
      eva = 0;
      ac = 0;
      i++;
    }
  }
  printf("La cantidad de alumnos sin derecho es de %d", sin_der);
}

void Tablas(void)
{
  int n = 1, i, j;

  for (i = 1; i <= 10;)
  {
    for (j = 0; j <= 10; j++)
    {
      printf("%d * %d = %d\n", n, j, n * j);

      if (j == 10)
      {
        system("pause");
        i++;
        n++;
      }
    }
  }
}

void Media(void)
{
  int ac = 0, num, i, sal;
  char ent[256];
  printf("Ingrese la cantidad de datos que desea ingresar: ");
  sal = validar(ent);

  for (i = 1; i <= sal; i++)
  {
    printf("Ingrese el %d numero: ", i);
    scanf("%d", &num);
    ac = ac + num;
  }
  printf("Suma de los numeros: %d \nMedia aritmetica: %d", ac, ac / sal);
}

void Pesos(void)
{
  int n_tur, tot_wgt = 0, wgt, i;
  char ent[256];
  printf("Ingrese la cantidad de pasajeros: ");
  n_tur = validar(ent);

  for (i = 1; i <= n_tur; i++)
  {
    printf("Ingrese el peso del pasajero %d: ", i);
    wgt = validar(ent);
    tot_wgt = tot_wgt + wgt;
  }

  printf("Promedio del peso: %d\n", tot_wgt / i);

  if (n_tur <= 10)
  {
    printf("Numero de pasajeros dentro del permitido\n");
  }

  if (tot_wgt <= 700)
  {
    printf("Peso dentro del permitido\n");
  }
}

void Bajas(void)
{
  int n_curso, i, j = 0, cal, ac = 0, prom;
  char ent[256], ent2[256];
  printf("Ingrese ingrese la vez que esta cursando el curso (1-3): ");
  n_curso = validar_baja(ent);

  for (i = 1; i <= 3; i++)
  {
    printf("Ingrese la calificacion del examen %d ", i);
    cal = validar_cal(ent2);
    ac = ac + cal;
  }

  prom = ac / 3;

  if (prom < 60 && n_curso != 3)
  {
    if (prom < 60 && n_curso == 3)
    {
      printf("Baja temporal\n");
    }
    else
    {
      printf("Repetir el curso\n");
    }
  }
  else
  {
    printf("Aprobado\n");
  }
}

int validar(char val[])
{
  int i;
  do
  {
    fflush(stdin);
    gets(val);
    i = atoi(val);
  } while (i == '\0');
  return i;
}

int validar_baja(char val[])
{
  int i;
  do
  {
    fflush(stdin);
    gets(val);
    i = atoi(val);
  } while (i < 0 || i > 3);
  return i;
}

int validar_cal(char val[])
{
  int j;
  do
  {
    fflush(stdin);
    gets(val);
    j = atoi(val);
  } while (j < 0 || j > 100 || j == '\0');
  return j;
}