// Autor:  salvador isaac reyes varela  372917
// 2023/31/10
// strucs para datos de alumnos
// RVS_ACT10_fuciones y Metodos de ordenacion_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

typedef long Tkey;

typedef struct _name
{
  char name[30];
  char ln_f[30];
  char ln_m[30];
} Tname;

typedef struct _date
{
  int day;
  int month;
  int year;
} Tdate;

typedef struct _state
{
  char state[20];
  char acro[3];
} Tstate;

typedef struct _progra
{
  int status;
  Tkey key;
  int matri;
  Tname name;
  Tdate date;
  int edad;
  char gender[7];
  Tstate state;
  char curp[18];
} Tprogra;

int verify_int(void);
int length(char data[]);
int busqSeq(Tprogra vect[], int n, Tkey num);
int vali_num(void);
void swap(void);
void improved_bubble_sort(int vect[], int n);
void verify_char(const char data[], char string[]);
int busqBin(Tprogra vect[], int n, Tkey num);
int verify_ranged(int lim_inf, int lim_sup);
int busqOpt(Tprogra vect[], int n, Tkey num, bool band);
int random_ranged(int ri, int rf);
bool ordBubble(Tprogra vect[], int n);
int busqSeqOrd(Tprogra vect[], int n, Tkey num);
int ageing(Tdate date);
bool ordOpt(Tprogra vect[], int n);
bool ordQuick(Tprogra vect[], int n);
void qs(Tprogra vect[], int limite_inicial, int limite_final);
int ranMatri(void);
int ranNum(int ri, int rf);
void mName(char str[]);
void fName(char str[]);
void ln(char str[]);

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

void mName(char str[])
{
  char names_hombre[25][10] = {
      "Carlos", "Juan", "Miguel", "Andres", "Pedro", "Luis", "Javier", "Fernando", "Diego", "Roberto", "Gustavo", "Jose", "Hector", "Alejandro", "Ricardo", "Ernesto", "Francisco", "Manuel", "Sergio", "Antonio", "Mario", "Daniel", "Alberto", "Rafael", "Eduardo"};
  strcpy(str, names_hombre[rand() % 100]);
}

void fName(char str[])
{
  char names_mujer[25][10] = {
      "Ana", "Maria", "Laura", "Isabel", "Sofia", "Elena", "Carmen", "Luisa", "Patricia", "Natalia", "Lorena", "Veronica", "Rosa", "Lucia", "Carolina", "Alicia", "Beatriz", "Gabriela", "Valentina", "Monica", "Olga", "Raquel", "Cecilia", "Margarita", "Claudia"};
  strcpy(str, names_mujer[rand() % 100]);
}

void ln(char str[])
{
  char apellidos[50][20] = {
      "Perez", "Gonzalez", "Rodriguez", "Lopez", "Martinez", "Sanchez", "Fernandez", "Torres", "Garcia", "Diaz", "Ramirez", "Varela", "Jimenez", "Moreno", "Herrera", "Castro", "Rivera", "Reyes", "Alvarez", "Romero", "Medina", "Ortega", "Cruz", "Ruiz", "Flores", "Morales", "Peralta", "Gomez", "Castillo", "Mendoza", "Guzman", "Espinosa", "Rojas", "Acosta", "Rios", "Leon", "Vega", "Soto", "Nuñez", "Paredes", "Cordero", "Pantoja", "Cardenas", "Aguilar", "Arias", "Santana", "Rosario", "Tavares", "De la Cruz", "Jimenez"};
  strcpy(str, apellidos[rand() % 100]);
}

int busqSeq(Tprogra vect[], int n, Tkey num)
{
  int i;

  for (i = 0; i < n; i++)
  {
    if (vect[i].key == num)
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

int busqBin(Tprogra vect[], int n, Tkey num)
{
  int med;
  int ri = 0;
  int rf = n;

  while (ri <= rf)
  {
    med = ri + (rf - ri) / 2;

    if (vect[med].key == num)
    {
      return med;
    }
    else
    {
      if (num < vect[med].key)
      {
        rf = med--;
      }
      else
      {
        ri = med++;
      }
    }
  }

  return -1;
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

int busqOpt(Tprogra vect[], int n, Tkey num, bool band)
{
  int i;

  if (band)
  {
    i = busqBin(vect, n, num);
  }
  else
  {
    i = busqSeq(vect, n, num);
  }

  return i;
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

bool ordBubble(Tprogra vect[], int n)
{
  int i, j;
  Tprogra temp;

  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (vect[j].key <= vect[i].key)
      {
        temp = vect[i];
        vect[i] = vect[j];
        vect[j] = temp;
      }
    }
  }

  return true;
}

int busqSeqOrd(Tprogra vect[], int n, Tkey num)
{
  int i = 0;

  while (i < n)
  {
    if (num >= vect[i].key)
    {
      if (vect[i].key == num)
      {
        return i;
      }
    }
    else
    {
      return -1;
    }
  }

  return -1;
}

int ageing(Tdate date)
{
  int age, yr, mt, dy;
  yr = 2023, mt = 10, dy = 28;

  age = yr - date.year;
  if (mt < date.month || (mt == date.month && dy < date.month))
  {
    age--;
  }

  return age;
}

bool ordQuick(Tprogra vect[], int n)
{
  qs(vect, 0, n - 1);

  return true;
}

bool ordOpt(Tprogra vect[], int n)
{
  if (n <= 200)
  {
    ordBubble(vect, n);
  }
  else
  {
    ordQuick(vect, n);
  }

  return true;
}

void qs(Tprogra vect[], int limite_inicial, int limite_final)
{
  int inicial, final, pivote;
  Tprogra temp;

  inicial = limite_inicial;
  final = limite_final;
  pivote = vect[(inicial + final) / 2].key;

  do
  {
    while (vect[inicial].key < pivote && inicial < limite_final)
    {
      inicial++;
    }

    while (pivote < vect[final].key && final > limite_inicial)
    {
      final--;
    }

    if (inicial <= final)
    {
      temp = vect[inicial];
      vect[inicial] = vect[final];
      vect[final] = temp;
      inicial++;
      final--;
    }
  } while (inicial <= final);

  if (limite_inicial < final)
  {
    qs(vect, limite_inicial, final);
  }

  if (limite_final > inicial)
  {
    qs(vect, inicial, limite_final);
  }
}

int ranMatri(void)
{
  int matri, mid, low;
  mid = rand() % 100 * 1000;
  low = rand() % 1000;

  matri = 300000 + mid + low;

  return matri;
}

int ranNum(int ri, int rf)
{
  int range = (rf - ri + 1);

  return rand() % range + ri;
}