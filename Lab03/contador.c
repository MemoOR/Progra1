/*Guillermo Ortega Romo 11/09/17*/
/*Ejemplo: Función for*/

#include <stdio.h>

void contador();

int main( )
  
{
  contador();
  return 0;
} /*Fin de programa*/

void contador (void)
{
  int count = 1; /* Declaración/inicio de variable*/
  int A;

  printf("Escribir el número al que se quiere llegar\n");
    scanf("%d", &A);

  
  for (count=1; count<=A; count++) /*Función cíclica*/
    {
      printf( "%d\n", count ); /* Imprimir en pantalla*/
    }
}
