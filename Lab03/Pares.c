/*Guillermo Ortega Romo 11/09/17*/


#include <stdio.h>

void contador();

int main( )
  
{
  contador();
  return 0;
} 

void contador (void)
{
  int count;

  printf("Los primeros 50 números pares son:");

  for (count=2; count<=100; count++)
    {
      if (count%2==0)
	{
      printf( "%d, ", count );
	}
    }
  printf("\n");
}
