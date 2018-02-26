/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>

void adivina(void);
int main ()
{
  adivina();
  return 0;
}
void adivina(void)
{
  int A;
  int num;

  A = 333;

  printf("Adivina el número del 0 al 1000 \n");
  scanf("%d", &num);
  /*primer intento*/
  if (num == A )
    {
      printf("Felicidades! ganaste\n");
    }
  else if (num<A)
    {/*segundo intento*/
      printf("Ese no es, prueba otra vez con un número mas grande\n");
      scanf("%d", &num);
    }
  else if (num>A)
    {
      printf("Ese no es, prueba otra vez con un número mas pequeño\n");
      scanf("%d", &num);
    }
  if (num == A )
    {
      printf("Felicidades! ganaste\n");
    }
   else if (num<A)
     {/*tercer intento*/
      printf("Ese no es, prueba otra vez con un número mas grande\n");
      scanf("%d", &num);
    }
  else if (num>A)
    {
      printf("Ese no es, prueba otra vez con un número mas pequeño\n");
      scanf("%d", &num);
    }
  if (num == A )
    {
      printf("Felicidades! ganaste\n");
    }
   if (num<A)
    {/*cuarto intento*/
      printf("Ese no es, prueba otra vez con un número mas grande\n");
      scanf("%d", &num);
    }
  else if (num>A)
    {
      printf("Ese no es, prueba otra vez con un número mas pequeño\n");
      scanf("%d", &num);
    }
   if (num == A )
    {
      printf("Felicidades! ganaste\n");
    }
  else if (num<A)
    {/*quinto intento*/
      printf("Ese no es, prueba otra vez con un número mas grande\n");
      scanf("%d", &num);
    }
  else if (num>A)
    {
      printf("Ese no es, prueba otra vez con un número mas pequeño\n");
      scanf("%d", &num);
    }
   if (num==A)
    {
      printf("Felicidades! ganaste\n");
    }
  if (num!=A)
    {
      printf("Has Perdido\n");
    }
}

