//Guillermo Ortega Romo

#include<stdio.h>

int main()
{
  float num[10];
  float prom, suma;

  for(int i=1;i<=10;i++)
    {
      printf("Ingresa el %d numero: ",i);
      scanf("%f",&num[i]);

      suma+=num[i];
    }
  prom=suma/10;
  printf("La media es %.2f y los números mayores a esta son: \n",suma); 

  for (int i = 0; i < 10; i++)
    {
      if (num[i] > prom)
	{
	  printf("Numero mayor a la media: %.2f\n", num[i]);
	}
    }
}

