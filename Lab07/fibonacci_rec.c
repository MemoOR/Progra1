//Guillermo Ortega Romo 16/10/17

#include<stdio.h>

long fibonacci(long fib);

int main()
{
  int lim;

  printf("Escribe cuantos números de Fibonacci imprimir (0-94)\n");
  scanf("%d", &lim);

  if(lim<0 || lim>94)
    {
      printf("Ese número no esta dentro del rango\n");
      return 1;
    }
  for (int i=0;i<lim;i++)
    {
      if(i==(lim-1))
	{
	  printf("%lu\n", fibonacci(i));
	}
      else if (i<(lim-1))
	{
	  printf("%lu, ", fibonacci(i));
	}
    }
  return 0;
}

long fibonacci(long fib)
{
  if (fib==0 || fib==1)
    {
      return fib;
    }
  else
    {
      return fibonacci(fib-1)+fibonacci(fib-2);
    }
}

  
      
