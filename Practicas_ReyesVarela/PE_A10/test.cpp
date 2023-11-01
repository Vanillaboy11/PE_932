// Autor:  salvador isaac reyes varela  372917
// 2023/15/10
// strucs para datos de alumnos
// RVS_ACT10_P2_932

#include "houseSpecial.h"

typedef struct _alum
{
  int matri;
  char ln_p[30];
  char ln_m[30];
  char name[30];
  int age;
  char gender[2];
  int status;
} Talum;

void menu(void);
int msg(void);
int busq_seq(Talum alum[], int n, int matri);
void name(char string[], int gender);
void doble_name(char string[], int gender);
void ln(char string[]);
int verify_matri(Talum alum[], int n, int matri);
Talum fill_reg(Talum alum[], int i);
Talum fill_manual(Talum alum[], int i);
void pri_reg(Talum alum[], int n);
void srch(int i);
int busq_bin(Talum alum[], int inf, int sup, int matri);
int improved_bubble_sort(Talum alum[], int n, int band);
void swap(int *a, int *b);

int main()
{
  srand(time(NULL));
  menu();
  return 0;
}

void menu()
{
  Talum reg[500];
  int opt;
  int i = 0, j;
  int matri, src, del;
  bool band;
  do
  {
    opt = msg();
    switch (opt)
    {
    case 1:
      if (i < 500)
      {
        for (j = 0; j < 10; j++)
        {
          if (i < 500)
          {
            reg[i] = fill_reg(reg, i);
            i++;
          }
        }
        band = 1;
      }
      else
      {
        printf("Limite alcanzado!!\n");
        system("pause");
      }
      break;

    case 2:
      if (i < 500)
      {
        reg[i] = fill_manual(reg, i);
        i++;
        band = 1;
      }
      else
      {
        printf("Limite alcanzado!!\n");
        system("pause");
      }
      break;

    case 3:
      printf("Que registro desea eliminar?");
      verify_ranged(300000, 399999);
      if (band == 1)
      {
        src = busq_seq(reg, i, matri);
      }
      else
      {
        src = busq_bin(reg, 0, i, matri);
      }
      reg[src].status = 0;
      break;

    case 4:
      printf("Ingresa Matricula: ");
      matri = verify_ranged(300000, 399999);
      if (band == 1)
      {
        src = busq_seq(reg, i, matri);
      }
      else
      {
        src = busq_bin(reg, 0, i, matri);
      }
      srch(src);
      system("pause");
      break;

    case 5:
      if (band == 1)
      {
        band = improved_bubble_sort(reg, i, band);
      }
      break;

    case 6:
      pri_reg(reg, i);
      break;
    }
  } while (opt != 0);
}

int msg()
{
  int opt;
  system("CLS");
  printf("Menu\n");
  printf("1.-Agregar (10 registros)\n");
  printf("2.-Agregar manual\n");
  printf("3.-Eliminar registro\n");
  printf("4.-Buscar\n");
  printf("5.-Ordenar\n");
  printf("6.-Imprimir\n");
  printf("0.-Salir\n");
  printf("Elige una opcion: ");
  opt = vali_num();
  return opt;
  system("CLS");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int improved_bubble_sort(Talum alum[], int n, int band)
{
  int i, j;
  int swapped;

  for (i = 0; i < n - 1; i++)
  {
    swapped = 0;

    for (j = 0; j < n - i - 1; j++)
    {
      if (alum[j].matri > alum[j + 1].matri)
      {
        swap(&alum[j].matri, &alum[j + 1].matri);
        swapped = 1;
      }
    }
    if (swapped == 0)
    {
      break;
    }
  }
  return band = 0;
}

int busq_seq(Talum alum[], int n, int matri)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (alum[i].matri == matri)
    {
      return i;
    }
  }
  return -1;
}

int busq_bin(Talum alum[], int inf, int sup, int matri)
{
  int hlf;
  while (inf <= sup)
  {
    hlf = (inf + sup) / 2;
    if (alum[hlf].matri == matri)
    {
      return hlf;
    }
    else
    {
      if (matri < alum[hlf].matri)
      {
        sup = hlf--;
      }
      else
      {
        inf = hlf++;
      }
    }
  }
  return -1;
}

void name(char string[], int gender)
{
  int data;

  char names_hombre[25][10] = {
      "Carlos", "Juan", "Miguel", "Andres", "Pedro", "Luis", "Javier", "Fernando", "Diego", "Roberto", "Gustavo", "Jose", "Hector", "Alejandro", "Ricardo", "Ernesto", "Francisco", "Manuel", "Sergio", "Antonio", "Mario", "Daniel", "Alberto", "Rafael", "Eduardo"};

  char names_mujer[25][10] = {
      "Ana", "Maria", "Laura", "Isabel", "Sofia", "Elena", "Carmen", "Luisa", "Patricia", "Natalia", "Lorena", "Veronica", "Rosa", "Lucia", "Carolina", "Alicia", "Beatriz", "Gabriela", "Valentina", "Monica", "Olga", "Raquel", "Cecilia", "Margarita", "Claudia"};

  if (gender == 1)
  {
    data = rand() % 25;
    strcpy(string, names_hombre[data]);
  }
  if (gender == 2)
  {
    data = rand() % 25;
    strcpy(string, names_mujer[data]);
  }
}

void doble_name(char string[], int gender)
{
  int data;
  char names_dobles_hombre[25][30] = {
      "María Jose", "Ana Maria", "Laura Elena", "Maria Isabel", "Carmen Sofia", "Maria Victoria", "Ana Luisa", "Marta Elena", "Ana Carolina", "Maria Antonia", "Clara Isabel", "Sofia Valentina", "Maria Fernanda", "Laura Andrea", "Maria Eugenia", "Ana Belen", "Marta Patricia", "Maria Celeste", "Laura Beatriz", "Ana Gabriela", "Clara Alejandra", "Laura Catalina", "Maria del Pilar", "Ana Maria del Carmen", "Marta Josefina"};

  char names_dobles_mujer[25][30] = {
      "Juan Jose", "Luis Miguel", "Jose Antonio", "Manuel Alejandro", "Carlos Andres", "Pedro Pablo", "Javier Eduardo", "Miguel Angel", "Fernando Jose", "Juan Carlos", "Luis Alberto", "Jose Luis", "Andres Felipe", "Gustavo Adolfo", "Fernando Antonio", "Miguel David", "Diego Esteban", "Roberto Carlos", "Jose Ignacio", "Manuel Enrique", "Sergio Antonio", "Antonio Rafael", "Mario Ernesto", "Daniel Alejandro", "Alberto Javier"};

  if (gender == 1)
  {
    data = rand() % 25;
    strcpy(string, names_dobles_hombre[data]);
  }
  if (gender == 2)
  {
    data = rand() % 25;
    strcpy(string, names_dobles_mujer[data]);
  }
}

void ln(char string[])
{
  int data;
  char apellidos[50][20] = {
      "Perez", "Gonzalez", "Rodriguez", "Lopez", "Martinez", "Sanchez", "Fernandez", "Torres", "Garcia", "Diaz", "Ramirez", "Varela", "Jimenez", "Moreno", "Herrera", "Castro", "Rivera", "Reyes", "Alvarez", "Romero", "Medina", "Ortega", "Cruz", "Ruiz", "Flores", "Morales", "Peralta", "Gomez", "Castillo", "Mendoza", "Guzman", "Espinosa", "Rojas", "Acosta", "Rios", "Leon", "Vega", "Soto", "Nuñez", "Paredes", "Cordero", "Pantoja", "Cardenas", "Aguilar", "Arias", "Santana", "Rosario", "Tavares", "De la Cruz", "Jimenez"};

  data = rand() % 10;
  strcpy(string, apellidos[data]);
}

int verify_matri(Talum alum[], int n, int matri)
{
  int i, j, con = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (alum[j].matri == matri)
      {
        con = 1;
      }
    }
  }
  if (con == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

Talum fill_reg(Talum alum[], int i)
{
  int gndr, ver;
  char nm[25], lstnm[25];

  gndr = rand() % 2 + 1;

  name(nm, gndr);
  strcpy(alum[i].name, nm);

  ln(lstnm);
  strcpy(alum[i].ln_p, lstnm);

  ln(lstnm);
  strcpy(alum[i].ln_m, lstnm);

  alum[i].age = rand() % 13 + 18;

  alum[i].status = rand() % 2;

  do
  {
    ver = 0;
    alum[i].matri = rand() % 100000 + 300000;
    ver = verify_matri(alum, i, alum[i].matri);

  } while (ver != 0);

  if (gndr == 1)
  {
    strcpy(alum[i].gender, "M");
  }
  else
  {
    strcpy(alum[i].gender, "F");
  }

  return alum[i];
}

Talum fill_manual(Talum alum[], int i)
{
  int gndr, ver;
  system("CLS");
  fflush(stdin);
  do
  {
    ver = 0;
    printf("Ingrese matricula: ");
    alum[i].matri = verify_ranged(300000, 399999);
    ver = verify_matri(alum, i, alum[i].matri);

    if (ver != 0)
    {
      printf("Matricula ya existente\n");
    }

  } while (ver != 0);

  verify_char("Nombre: ", alum[i].name);
  verify_char("Ingrese apellido paterno: ", alum[i].ln_p);
  verify_char("Ingrese apellido materno: ", alum[i].ln_m);

  system("CLS");
  printf("Ingrese Edad: ");
  alum[i].age = verify_ranged(18, 30);

  printf("Ingresa el sexo(1. M, 2. F): ");
  gndr = verify_ranged(1, 2);

  if (gndr == 1)
  {
    strcpy(alum[i].gender, "M");
  }
  else
  {
    strcpy(alum[i].gender, "F");
  }
  printf("Ingrese estatus: (ALTA 1,  BAJA 0)");
  alum[i].status = verify_ranged(0, 1);

  return alum[i];
}

void pri_reg(Talum alum[], int n)
{
  int i;
  system("cls");
  printf("%-10s %-10s %-10s %-10s %-4s %-5s %-8s\n", "Matricula", "Nombre", "Ap_P", "Ap_M", "Edad", "Sexo", "Estatus");
  for (i = 0; i < n; i++)
  {
    if (alum[i].status == 1)
    {
      printf("%-10d %-10s %-10s %-10s %-4d %-5s %-8d\n", alum[i].matri, alum[i].name, alum[i].ln_p, alum[i].ln_m, alum[i].age, alum[i].gender, alum[i].status);
    }
  }
  system("PAUSE");
}

void srch(int i)
{
  if (i != -1)
  {
    printf("Alumno encontrado en el indice: %d", i);
  }
  else
  {
    printf("Alumno no encontrado");
  }
  scanf("PAUSE");
}
