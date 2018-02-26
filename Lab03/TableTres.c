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

  printf("Los primeros multiplos de 3 son:");

  for (count=1; count<=100; count++)
    {
      if (count%3==0)
	{
      printf( "%d, ", count );
	}
    }
  printf("\n");
}
