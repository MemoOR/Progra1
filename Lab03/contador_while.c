/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>

void contador();

int main ( )
{
  contador ();
  return 0;
}

void contador (void)
{
  int count = 1; /* Declaración/ inicio de variable*/
  while (count < 11) { /* función cíclica*/
    printf("%d\n", count);
    count = count + 1;
  }
}
  
