// Autor:  salvador isaac reyes varela  372917
// 2023/01/09
// calcular el promedio final de la materia donde la calificación menor de los exámenes se anula y el promedio se calcula en base a 4 exámenes.
// RVS_ACT4_7_932

#include<stdio.h>

int main()
{
  int ex1,ex2,ex3,ex4,ex5, fprom;

  printf("Ingrese la calificacion del primer examen: ");
  scanf("%d", &ex1);
  printf("Ingrese la calificacion del segundo examen: ");
  scanf("%d", &ex2);
  printf("Ingrese la calificacion del tercer examen: ");
  scanf("%d", &ex3);
  printf("Ingrese la calificacion del cuarto examen: ");
  scanf("%d", &ex4);
  printf("Ingrese la calificacion del quinto examen: ");
  scanf("%d", &ex5);

  if (ex1 < ex2 && ex1 < ex3 && ex1 < ex4 && ex1 < ex5)
  {
    fprom = (ex2+ex3+ex4+ex5)/4;
  }
  else
  {
    if (ex2 < ex3 && ex2 < ex4 && ex2 < ex5)
    {
      fprom = (ex1+ex3+ex4+ex5)/4;
    }
    else
    {
      if (ex3 < ex4 && ex3 < ex5)
      {
        fprom = (ex1+ex2+ex4+ex5)/4;
      }
      else
      {
        if (ex4 < ex5)
        {
          fprom = (ex1+ex2+ex3+ex5)/4;
        }
        else
        {
          fprom = (ex1+ex2+ex3+ex4)/4;
        }
      } 
    } 
  }

  printf("El promedio final es de: %d", fprom);
  
}