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
        else
        {
          if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
          {
            printf("Tu signo del zodiaco es Leo.\n");
            printf("Horoscopo del dia para Leo: Hoy es tu dia, haz eso que mas querias.");
          }
          else
          {
            if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
            {
              printf("Tu signo del zodiaco es Virgo.\n");
              printf("Horoscopo del dia para Virgo: No sobrepienses las cosas, todo esta bien.");
            }
            else
            {
              if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
              {
                printf("Tu signo del zodiaco es Libra.\n");
                printf("Horoscopo del dia para Libra: Hay que dejar ir las anclas de tu vida, abraza al cambio.");
              }
              else
              {
                if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
                {
                  printf("Tu signo del zodiaco es Escorpio.\n");
                  printf("Horoscopo del dia para Escorpio: No tienes porque hacer las cosas solo, cuentas con alguien.");
                }
                else
                {
                  if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
                  {
                    printf("Tu signo del zodiaco es Sagitario.\n");
                    printf("Horoscopo del dia para Sagitario: Aprende a ser paciente, todo saldra bien.");
                  }
                  else
                  {
                    if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
                    {
                      printf("Tu signo del zodiaco es Capricornio.\n");
                      printf("Horoscopo del dia para Capricornio: Hoy te llegara una noticia inesperada");
                    }
                    else
                    {
                      if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
                      {
                        printf("Tu signo del zodiaco es Acuario.\n");
                        printf("Horoscopo del dia para Acuario: Hoy se celebra un gran cambio para ti, inicia proyectos nuevos");
                      }
                      else
                      {
                        if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
                        {
                          printf("Tu signo del zodiaco es Piscis.\n");
                          printf("Horoscopo del dia para Piscis: Hoy es tu gran dia, continua con tus proyectos");
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}