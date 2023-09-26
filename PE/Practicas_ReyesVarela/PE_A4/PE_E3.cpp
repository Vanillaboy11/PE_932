// Autor:  salvador isaac reyes varela  372917
// 2023/27/08
// leer 6 números, desplegar el valor del número mayor
// RVS_ACT4_3_932

#include<stdio.h>

int main()
{
  int n1, n2, n3, n4, n5, n6, mayor;
  
  printf("Ingrese un numero: ");
  scanf("%d", &n1);
  printf("Ingrese un segundo numero: ");
  scanf("%d", &n2);
  printf("Ingrese un tercer numero: ");
  scanf("%d", &n3);
  printf("Ingrese un cuarto numero: ");
  scanf("%d", &n4);
  printf("Ingrese un quinto numero: ");
  scanf("%d", &n5);
  printf("Ingrese un sexto numero: ");
  scanf("%d", &n6);

  if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1 > n6)
  {
    mayor = n1;
  }
  else
  {
    if (n2 > n3 && n2 > n4 && n2 > n5 && n2 > n6)
    {
      mayor = n2;
    }
    else
    {
      if (n3 > n4 && n3 > n5 && n3 > n6)
      {
        mayor = n3;
      }
      else
      {
        if (n4 > n5 && n4 > n6)
        {
          mayor = n4;
        }
        else
        {
          if (n5 > n6)
          {
            mayor = n5;
          }
          else
          {
            mayor = n6;
          }
        } 
      } 
    }
  }
    printf("%d", mayor);

  /*if (n3 >= n5 && n3 >= n6)
  {
    printf("%d", n3);
    if (n3 >= n6)
    {
      printf("%d", n3);
    }
  }
  else
  {
    if (n3 >= n2)
    {
      if (n5 >= n4)
      {
        
      }
    }
    else
    {
      if (n3 >= n1)
      {
        
      }
      else
      {
        if (n5 >= n1)
        {
          
        }
        
      }
    }
    
  }
*/
}