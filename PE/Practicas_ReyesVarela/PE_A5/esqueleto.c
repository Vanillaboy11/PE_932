#include <stdio.h>
#include <stdlib.h>

//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void numdes (void);
void pares (void);
void digitos (void);
void tablas (void);
//****  main principal  *********
int main()
{
   menu();

	return 0;
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("1.- Numeros descendentes \n");
  printf("2.- Numeros pares \n");
  printf("3.- Digitos aleatorios \n");
  printf("4.- Tablas de multiplicar\n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
}
//****************
void menu()
{
  int op;
  do{
      op=msges();
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

    }while (op != 0);


}

//*********************
void numdes (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    //  AQUI DESARROLLO PROGRAMA
    printf("   FIBONACCI\n"); 
    system ("PAUSE");
}

//*************************
void pares (void)
{

    //  VARIALES LOCALES 
    system ("CLS");
    //  AQUI DESARROLLO PROGRAMA
    printf("   FACTORIAL\n"); 
    system ("PAUSE");
}
//****************************
void digitos (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    //  AQUI DESARROLLO PROGRAMA
    printf("   DIGITOS\n"); 
    system ("PAUSE");

}
//*****************************
void tablas (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    //  AQUI DESARROLLO PROGRAMA
    printf("   DIGITOS\n"); 
    system ("PAUSE");

}