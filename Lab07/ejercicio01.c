/*Guillermo Ortega Romo 18/10/17*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void num0();

int main()
{
  srand(time(0));

  int numero[19];
  int posicion1, posicion2;
  int valor1, valor2;

  printf("Los valores del arreglo son:\n");

  for (int i=0;i<20;i++)
    {
      numero[i]=0;
      if(i==19)
	{
      printf("%d\n",numero[i]);
	}
      else if (i<19)
	{
	  printf("%d, ",numero[i]);
	}
    }

   printf("Los valores del arreglo son:\n");

  for (int i=0;i<20;i++)
    {
      numero[i]=rand()%10+1;
      if(i==19)
	{
      printf("%d\n",numero[i]);
	}
      else if (i<19)
	{
	  printf("%d, ",numero[i]);
	}
    }


  printf("\nEscoge dos posiciones del arreglo para cambiar su valor\n");
  
  printf("\nIngresa la primera posicion: ");
  scanf("%d", &posicion1);
  
  printf("Ingresa el primer valor: ");
  scanf("%d", &valor1);
  
   printf("\nIngresa la segunda posicion: ");
  scanf("%d", &posicion2);
  
  printf("Ingresa el segundo valor: ");
  scanf("%d", &valor2);

    for (int i=0;i<20;i++)
    {
      numero[i]=rand()%10+1;
      
      if(i==posicion1)
	{
	   numero[posicion1]=valor1;
	}
      if(i==posicion2)
	{
	   numero[posicion2]=valor2;
	}
      if(i==19)
	{
      printf("%d\n",numero[i]);
	}
      else if (i<19)
	{
	  printf("%d, ",numero[i]);
	}
    }

}





  
  
