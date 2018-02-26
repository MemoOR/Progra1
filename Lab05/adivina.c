/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivina(void);
int main ()
{
  adivina();
  return 0;
}
void adivina(void)
{
  int numa;
  int numu;
  int v=1;

  srand(time(0));
    numa = rand() % 100 + 1;


 do
   {
     printf("Adivina el número del 1 al 100\n");
     scanf("%d",&numu);
     if(numu!=numa)
       {
	 v++;
       }
     if(numu<numa)
       {
	 printf("Prueba con un número mas grande\n");
       }
     if (numu>numa)
       {
	 printf("Prueba con un número mas pequeño\n");
       }
   } while ((numa!=numu)&&(v<6));
 if(numa==numu)
   {
     printf("Has ganado\n");
   }
 else
   {
     printf("Has perdido, el numero era: %d\n", numa);
   }
}

