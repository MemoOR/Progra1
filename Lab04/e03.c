/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void numeros(void);
int main ()
{
  numeros();
  return 0;
}
void numeros(void)
{
  int num;
  int mayor;
  int menor;
  int i;
   printf("Escribe un número\n");
  scanf("%d",&num);
 
  mayor = menor = num;
  
  while(num!=0)
	{
       printf("Escribe un número\n");
  scanf("%d",&num);
	
   
	  if(num>mayor)
	    {
	      mayor=num;
	    }
	  if (num<menor)
	    {
	      menor=num;
	    }
	}
  
      
      printf("\nEl mayor es: %d\n", mayor);
      printf("\nEl menor es: %d\n", menor);
}

      


