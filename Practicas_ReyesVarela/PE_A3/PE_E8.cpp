// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Evaluar Optimización de codigo
// RVS_ACT3_1_932

#include <stdio.h>

int main()
{
  float cal, prom = 0; // declaracion de variables

  printf("Ingrese su calificacion 1: \n");
  scanf("%f", &cal);
  prom = prom + cal; // lee un dato y se suma a la variable prom
  printf("Ingrese su calificacion 2: \n");
  scanf("%f", &cal);
  prom = prom + cal;
  printf("Ingrese su calificacion 3: \n");
  scanf("%f", &cal);
  prom = prom + cal;

  printf("Su promedio es de : %.2f \n", prom / 3); // imprime el promedio

  if (prom >= 80)
  {
    if (prom <= 100)
    {
      printf("Excelente");
    }
    else
    {
      if (prom > 100)
      {
        printf("ERROR en promedio");
      }
      else
      {
        if (prom <= 90)
        {
          printf("Bien");
        }
        else
        {
          if (prom > 90)
          {
            printf("Muy bien");
          }
        }
      }
    }
  }

  else
  {
    if (prom >= 60)
    {
      if (prom >= 70)
      {
        printf("Regular");
      }
    }
    else
    {
      if (prom < 30)
      {
        printf("Repetir");
      }
      else
      {
        printf("Extraordinario");
      }
    }
  }
}
// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora, (usar condición anidada)
// RVS_ACT3_2_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int ran, opc;
  srand(time(NULL));
  printf("Ingrese su accion por numero: \n1. Piedra \n2. Papel \n3. Tijeras \n");
  scanf("%d", &opc);

  ran = rand() % 3 + 1;

  // cadena de seleccion
  if (opc > ran)
  {
    printf("Gana el jugador");
  }
  else
  {
    if (opc == ran)
    {
      printf("Es un empate");
    }
    else
    {
      if (opc < ran)
      {
        printf("Gana la computadora");
      }
    }
  }
}

// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora, (usar selección múltiple) 
// RVS_ACT3_3_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int ran, opc;
  srand(time(NULL));
  printf("Ingrese su accion por numero: \n1. Piedra \n2. Papel \n3. Tijeras \n");
  scanf("%d", &opc);

  ran = rand() % 3 + 1;

  switch (opc)
  {
  case 1:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;
  
  case 2:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;

  case 3:
    switch (ran)
    {
    case 1:
      printf("Empate");
      break;
    case 2:
      printf("La computadora gana\n");
      break;
    case 3:
      printf("Usted gana\n");
      break;
    default:
      break;
    }
    break;

  default:
    break;
  }

}

// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que lea 3 numeros y desplegar cuál numero es el mayor (usar AND o OR)
// RVS_ACT3_4_932

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El primer numero (%d) es el mayor.\n", num1);
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("El segundo numero (%d) es el mayor.\n", num2);
        }
        else
        {
            if (num3 > num1 && num3 > num2)
            {
                printf("El tercer numero (%d) es el mayor.\n", num3);
            }
        }
    }

    return 0;
}

// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que lea 3 numeros y desplegar el numero del medio (usar AND o OR)
// RVS_ACT3_4_932

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3))
    {
        printf("El numero del medio es: %d\n", num1);
    }
    else
    {
        if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3))
        {
            printf("El numero del medio es: %d\n", num2);
        }
        else
        {
            if ((num3 >= num1 && num3 <= num2) || (num3 <= num1 && num3 >= num2))
            {
                printf("El numero del medio es: %d\n", num3);
            }
        }    
    }

    return 0;
}

// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Programa en C que lea 3 números y despegarlos en forma ascendente (usar AND o OR)
// RVS_ACT3_4_932

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3)
    {
        printf("%d, ", num1);
        if (num2 <= num3)
        {
            printf("%d, %d\n", num2, num3);
        }
        else
        {
            printf("%d, %d\n", num3, num2);
        }
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        printf("%d, ", num2);
        if (num1 <= num3)
        {
            printf("%d, %d\n", num1, num3);
        }
        else
        {
            printf("%d, %d\n", num3, num1);
        }
    }
    else
    {
        printf("%d, ", num3);
        if (num1 <= num2)
        {
            printf("%d, %d\n", num1, num2);
        }
        else
        {
            printf("%d, %d\n", num2, num1);
        }
    }

    return 0;
}

// Autor:  salvador isaac reyes varela  372917
// 2023/05/09
// Funcion en C que pida el mes y dia de nacimiento de una persona y el programa le despliega el signo del zodiaco que le corresponde y su correspondiente horoscopo del Dia.
// RVS_ACT3_4_932

#include <stdio.h>

int main()
{
    int mes, dia;

    printf("Ingrese el mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    printf("Ingrese el dia de nacimiento (1-31): ");
    scanf("%d", &dia);
    
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
    {
      printf("Tu signo del zodiaco es Aries.\n");
      printf("Horoscopo del dia para Aries: Hoy sera un gran dia, no te rindas.");
    } 
    else
    {
      if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
      {
        printf("Tu signo del zodiaco es Tauro.\n");
        printf("Horoscopo del dia para Tauro: Hoy sera un gran dia, ve con exito.");
      }
      else
      {
        if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        {
          printf("Tu signo del zodiaco es Géminis.\n");
          printf("Horoscopo del dia para Géminis: El dia de hoy es unico para ti, disfrutalo con tus seres queridos");
        }
        else
        {
          if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
          {
            printf("Tu signo del zodiaco es Cancer.\n");
            printf("Horoscopo del dia para Cancer: Porque dejar para despues lo que puedes hacer ahora, ve por ello.");
          }
        }
      }
    }

  return 0;
}
