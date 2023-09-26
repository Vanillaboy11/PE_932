// Autor:  salvador isaac reyes varela  372917
// 2023/10/09
// Codigo que genera varios ejercicios
// RVS_ACT5_1_932

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void numdes(void);
void pares(void);
void digitos(void);
void tablas(void);
//****  main principal  *********
int main()
{
  menu();

  return 0;
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- Numeros descendentes \n");
  printf("2.- Numeros pares \n");
  printf("3.- Digitos aleatorios \n");
  printf("4.- Tablas de multiplicar\n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}
//****************
void menu()
{
  int op;
    op = msges();
    switch (op)
    {
    case 1:
      numdes();
      break;
    case 2:
      pares();
      break;
    case 3:
      digitos();
      break;
    case 4:
      tablas();
      break;
    }


}

//*********************
void numdes(void)
{
  int n, i;
  printf("Ingrese un numero:\n");
  scanf("%d", &n);

  for (i = n; i >= 0; i--)
  {
    printf("%d, ", i);
  }
}

//*************************
void pares(void)
{
  srand(time(NULL));
  int i, ran, par = 0, imp = 0, acp = 0, aci = 0;
  for (i = 0; i <= 40; i++)
  {
    ran = rand() % 200 + 1;

    printf("%d ", ran);
    if (i % 2 == 0)
    {
      printf("par\n");
      par++;
      acp = acp + i;
    }
    else
    {
      printf("Impar\n");
      imp++;
      aci = aci + i;
    }
  }
  printf("cantidad de numeros pares: %d, suma total: %d \n", par, acp);
  printf("cantidad de numeros impares: %d, suma total: %d \n", imp, aci);
}
//****************************
void digitos(void)
{

  srand(time(NULL));
  int mvb = 0, lvb = 201, ran, i;

  for (i = 0; i < 35; i++)
  {
    ran = rand() % 100 + 101;
    if (ran > mvb)
    {
      mvb = ran;
    }
    if (ran < lvb)
    {
      lvb = ran;
    }
  }

  printf("Numero mayor: %d\n", mvb);
  printf("Numero menor: %d", lvb);
}
//*****************************
void tablas(void)
{
  int n, i;
  printf("Ingrese un numero: ");
  scanf("%d", &n);

  for (i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", n, i, n * i);
  }
}
