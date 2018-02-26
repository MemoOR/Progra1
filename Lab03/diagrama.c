/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>

void calificar(void);
int main ()
{
  calificar();
  return 0;
}
void calificar(void)
{
  int numero;

  printf("Escribe un número \n");
  scanf("%d", &numero);

  if (numero < 0 )
    {
      printf("Es negativo\n");
    }

      else if (numero==0)
	{
	  printf("Es cero\n");
	}

	  else if (numero>0)

	    {
	      printf("Es Positivo\n");
	    }
}

	  
  

	  
  

