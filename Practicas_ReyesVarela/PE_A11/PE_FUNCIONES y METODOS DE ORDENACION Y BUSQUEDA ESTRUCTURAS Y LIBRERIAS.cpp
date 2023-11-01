// Autor:  salvador isaac reyes varela  372917
// 2023/31/10
// Registros y archivos
// RVS_ACT11_P2_932

#include "houseSpecial.h"
#include "curp.h"

#define MAX 2000

int msg();
int msg2();
void menu();

Tprogra ran_pers(void);
Tprogra man_pers(void);
void prt_pers(Tprogra vect[], int n);
void prt_reg(Tprogra pers);
void filesPrint(char nomArchivo[], Tprogra vect[], int n);

int main()
{
  srand(time(NULL));
  menu();

  return 0;
}

int msg(void)
{
  int opt;
  system("cls");
  printf("\n M  E  N  U\n");
  printf("1. Agregar \n");
  printf("2. Eliminar registro \n");
  printf("3. Buscar \n");
  printf("4. Ordenar \n");
  printf("5. Imprimir \n");
  printf("6. Archivo de texto \n");
  printf("0. Salir \n");
  printf("Elija una opcion: \n");
  opt = verify_ranged(0, 6);
  return opt;
}

int msg2()
{
  int opt;
  system("cls");
  printf("\n A  G  R  E  G  A  R\n");
  printf("1. Manual (1) \n");
  printf("2. Automatico (100) \n");
  printf("3. Regresar \n");
  printf("Elija una opcion: \n");
  opt = verify_ranged(0, 3);
  return opt;
}

void menu()
{
  int op, i, num;
  int nPers = 0;
  int nAuto = 100;
  bool band;
  char nomArchivo[15];

  Tprogra data[MAX];
  Tprogra pers;

  system("CLS");

  do
  {
    op = msg();
    system("CLS");

    switch (op)
    {
    case 1:
      do
      {
        op = msg2();
        system("CLS");

        switch (op)
        {
        case 1:
          if ((nPers + 1) <= MAX)
          {
            pers = man_pers();

            while (busqSeq(data, nPers, pers.key) != -1)
            {
              system("CLS");
              printf("Matricula repetida, ingrese una nueva: ");
              pers.matri = verify_ranged(300000, 399999);
              pers.key = pers.matri;
            }

            data[nPers] = pers;
            nPers++;
            band = false;
            system("CLS");
            printf("Registro Agregado: \n\n");
            prt_reg(pers);
          }
          else
          {
            printf("Limite de personas alcanzado\n");
          }
          printf("\n");
          system("PAUSE");
          break;

        case 2:
          if ((nPers + nAuto) <= MAX)
          {
            for (i = 0; i < nAuto; i++)
            {
              pers = ran_pers();

              while (busqSeq(data, nPers, pers.key) != -1)
              {
                pers.matri = ranMatri();
                pers.key = pers.matri;
              }

              data[nPers] = pers;
              nPers++;
            }
            band = false;
            printf("Se han agregado %d personas\n", nAuto);
          }
          else
          {
            printf("Limite de personas alcanzado\n");
          }
          printf("\n");
          system("PAUSE");
          break;

        case 3:
          break;
        }
      } while (op != 3);
      break;

    case 2:
      printf("Ingrese la matricula del estudiante que desea eliminar: ");
      num = verify_ranged(300000, 399999);
      system("CLS");

      i = busqOpt(data, nPers, num, band);

      if (i != -1)
      {
        if (data[i].status != 0)
        {
          prt_reg(data[i]);
          printf("\n\nDesea eliminar el registro? (1 - Si, 2 - No) ");
          op = verify_ranged(1, 2);
          system("CLS");

          if (op == 1)
          {
            data[i].status = 0;
            printf("Matricula eliminada con exito\n");
          }
          else
          {
            printf("Matricula no eliminada\n");
          }
        }
        else
        {
          printf("El alumno ya se encuentra inactivo\n");
        }
      }
      else
      {
        printf("Matricula no encontrada\n");
      }
      printf("\n");
      system("PAUSE");
      break;

    case 3:
      printf("Ingrese la matricula del estudiante que desea buscar: ");
      num = verify_ranged(300000, 399999);
      system("CLS");

      i = busqOpt(data, nPers, num, band);

      if (i != -1)
      {
        printf("Matricula encontrada\n\n"
        );
        prt_reg(data[i]);
      }
      else
      {
        printf("La matricula %d no se encuentra en el vector\n", num);
      }
      printf("\n");
      system("PAUSE");
      break;

    case 4:
      if (band == false)
      {
        band = ordOpt(data, nPers);
        printf("El vector ha sido ordenado\n");
      }
      else
      {
        printf("El vector ya estaba ordenado\n");
      }
      printf("\n");
      system("PAUSE");
      break;

    case 5:
      prt_pers(data, nPers);
      printf("\n");
      system("PAUSE");
      break;

    case 6:
      printf("Ingresa el nombre del archivo: ");
      fflush(stdin);
      gets(nomArchivo);
      ver_string(nomArchivo);

      filesPrint(nomArchivo, data, nPers);
      printf("\n");
      system("PAUSE");
      break;

    case 0:
      return;
    }
  } while (op != 0);
}

Tprogra man_pers(void)
{
  Tprogra pers;

  system("CLS");
  pers.status = 1;

  printf("Ingresa la matricula (300000 - 399999): ");
  pers.matri = verify_ranged(300000, 399999);

  do
  {
    system("CLS");
    printf("Ingresa el/los nombre/s: ");
    fflush(stdin);
    gets(pers.name.name);
  } while (ver_string(pers.name.name) == 0 || pers.name.name[0] == '\0');

  do
  {
    system("CLS");
    printf("Ingresa el apellido paterno: ");
    fflush(stdin);
    gets(pers.name.ln_f);
  } while (ver_string(pers.name.ln_f) == 0);

  do
  {
    system("CLS");
    printf("Ingresa el apellido materno: ");
    fflush(stdin);
    gets(pers.name.ln_m);
  } while (ver_string(pers.name.ln_m) == 0);

  system("CLS");
  printf("Ingresa el anio de nacimiento: ");
  pers.date.year = verify_ranged(1900, 2023);

  do
  {
    system("CLS");
    printf("Ingresa el mes de nacimiento: ");
    pers.date.month = verify_ranged(1, 12);
  } while (ver_month(pers.date.month, pers.date.year) == false);

  do
  {
    system("CLS");
    printf("Ingresa el dia de nacimiento: ");
    pers.date.day = verify_ranged(1, 31);
  } while (ver_date(pers.date.day, pers.date.month, pers.date.year) == false);

  pers.edad = ageing(pers.date);

  do
  {
    system("CLS");
    printf("Ingrese el sexo (H/M): ");
    fflush(stdin);
    gets(pers.gender);
    ver_chars(pers.gender);
  } while (strcmp(pers.gender, "H") != 0 && strcmp(pers.gender, "M") != 0);
  (strcmp(pers.gender, "M")) ? strcpy(pers.gender, "HOMBRE") : strcpy(pers.gender, "MUJER");

  do
  {
    system("CLS");
    printf("Ingresa el estado de nacimiento (o 'extranjero'): ");
    fflush(stdin);
    gets(pers.state.state);
    ver_chars(pers.state.state);
    acronm(pers.state.acro, pers.state.state);
  } while (!strcmp(pers.state.acro, "X"));

  curp_string(pers, pers.curp);

  pers.key = pers.matri;

  return pers;
}

Tprogra ran_pers(void)
{
  Tprogra pers;
  int gnd;

  pers.status = 1;
  pers.matri = ranMatri();
  ln(pers.name.ln_f);
  ln(pers.name.ln_m);
  gnd = ranNum(1, 2);
  do
  {
    pers.date.day = ranNum(1, 31);
    pers.date.month = ranNum(1, 12);
    pers.date.year = ranNum(1990, 2003);
  } while (ver_date(pers.date.day, pers.date.month, pers.date.year) == false);

  pers.edad = ageing(pers.date);

  if (gnd == 1)
  {
    mName(pers.name.name);
    strcpy(pers.gender, "HOMBRE");
  }
  else
  {
    fName(pers.name.name);
    strcpy(pers.gender, "MUJER");
  }

  ranState(pers.state.state, pers.state.acro);

  curp_string(pers, pers.curp);

  pers.key = pers.matri;
  return pers;
}

void prt_pers(Tprogra vect[], int n)
{
  int i, activos, op;

  printf("Registros 1 - 40\n\n");
  printf("NO     MATRICULA   APPAT                            APMAT                            NOMBRE                           EDAD   SEXO      CURP              \n\n");
  for (i = 0, activos = 0; i < n; i++)
  {
    if (vect[i].status != 0)
    {
      printf("%-4d   %-9d   %-30s   %-30s   %-30s   %-4d   %-7s   %-18s\n", i + 1, vect[i].matri, vect[i].name.ln_f, vect[i].name.ln_m, vect[i].name.name, vect[i].edad, vect[i].gender, vect[i].curp);
      activos++;
    }

    if ((activos) % 40 == 0 && activos < n)
    {
      printf("\n\n");
      printf("Desea continuar? (0 - Si, 1 - No): ");
      op = verify_ranged(0, 1);

      if (op == 0)
      {
        system("CLS");
        printf("Registros %d - %d\n\n", activos + 1, (activos + 40) > n ? n : (activos + 40));
        printf("NO     MATRICULA   APPAT                            APMAT                            NOMBRE                           EDAD   SEXO      CURP              \n\n");
      }
      else
      {
        return;
      }
    }
  }
}

void prt_reg(Tprogra pers)
{
  printf("STATUS: ");
  printf("%s\n", pers.status == 1 ? "ACTIVO" : "NO ACTIVO");
  printf("MATRICULA: ");
  printf("%d\n", pers.matri);
  printf("NOMBRE: ");
  printf("%s\n", pers.name.name);
  printf("AP. PATERNO: ");
  printf("%s\n", pers.name.ln_f);
  printf("AP. MATERNO: ");
  printf("%s\n", pers.name.ln_m);
  printf("FECHA NAC: ");
  printf("%02d-%02d-%4d\n", pers.date.day, pers.date.month, pers.date.year);
  printf("EDAD: ");
  printf("%d\n", pers.edad);
  printf("SEXO: ");
  printf("%s\n", pers.gender);
  printf("LUGAR NAC: ");
  printf("%s\n", pers.state.state);
  printf("CURP: ");
  printf("%s\n", pers.curp);
}

void filesPrint(char nomArchivo[], Tprogra vect[], int n)
{
  int i;
  FILE *fa;

  strcat(nomArchivo, ".txt");
  fa = fopen(nomArchivo, "w");
  fprintf(fa, "MATRICULA   NOMBRE                           APPAT                            APMAT                            FECHA NAC    EDAD   SEXO      LUGAR NAC              CURP\n\n");
  for (i = 0; i < n; i++)
  {
    if (vect[i].status != 0)
    {
      fprintf(fa, "%-9d   %-30s   %-30s   %-30s   %02d-%02d-%4d   %-4d   %-7s   %-20s   %-18s\n", vect[i].matri, vect[i].name.name, vect[i].name.ln_f, vect[i].name.ln_m, vect[i].date.day, vect[i].date.month, vect[i].date.year, vect[i].edad, vect[i].gender, vect[i].state.state, vect[i].curp);
    }
  }

  printf("Archivo escrito con exito");
  fclose(fa);
}