/*Guillermo Ortega Romo 14/10/17*/
#include<stdio.h>

int main()
{
  int lim;
  unsigned long num1=0, num2=1, rest=0;

  printf("Escribe cuantos números de Fibonacci imprimir (0-94)\n");
  scanf("%d", &lim);/*Pedir al usuario la cantidad de valores a imprimir*/
  if(lim<0 || lim>94)
    {
      printf("Ese número no está  dentro del rango\n");
      return 1; /*declaración de límite de valores*/
    }

  for (int i=0;i<lim;i++)/*ciclo para imprimir los valores de la serie*/
    {
      if(i==(lim-1))
	{
	  printf("%lu\n", num1);
	}
      else if(i<(lim-1))
	{
	  printf("%lu, ", num1);
	}

      rest=num1+num2; /*operaciones de la serie Fibonacci*/
      num1=num2;
      num2=rest;
    }
  return 0;
}
