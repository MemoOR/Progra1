/*Guillermo Ortega Romo 09/10/17*/

#include<stdio.h>

void Local(void);

int main (void)
{
  int x=5;

  Local();

  printf("\n Variable local x en main es %d\n", x);

  return 0;
}

void Local (void)
{
  int x=25;
  printf("\n La variabe local x tiene un valor de %d al ingresar a la función Local\n", x);
  x++;
  printf("La variable local x tiene un valor de %d al salir de la función Local\n", x);
}
