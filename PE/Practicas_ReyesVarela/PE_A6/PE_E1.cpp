// Autor:  salvador isaac reyes varela  372917
// 2023/12/09
// Menu de ejercicios
// RVS_ACT6_P1_932

#include <stdio.h>
#include <stdlib.h>

//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void Fibonacci(void);
void Factorial(void);
void Digitos(void);
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
  printf("1.- FIBONACCI \n");
  printf("2.- FACTORIAL \n");
  printf("3.- DIGITOS \n");
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
      Fibonacci();
      break;
    case 2:
      Factorial();
      break;
    case 3:
      Digitos();
      break;
    }
}

//*********************
void Fibonacci(void)
{
  int n, i, fib = 0, last = -1, next = 1;
  printf("Ingrese la cantidad de veces que quiere que se realice la funcion de fibonacci: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    fib = last + next;
    printf("%d, ", fib);
    last = next;
    next = fib;
  }
}

//*************************
void Factorial(void)
{
  int n, i, fac;
  printf("Ingrese un numero: ");
  scanf("%d", &n);

  fac = n;

  for (i = n - 1; i >= 1; i--)
  {
    fac = fac * i;
    n = fac;
  }
  printf("%d ", fac);
}

//****************************
void Digitos(void)
{
  int n, i = 0;
  printf("Ingrese un numero: ");
  scanf("%d", &n);
  for (i = 0; n > 0; i++)
  {
    n /= 10;
  }
  printf("Su numero es de %d digitos", i);
}