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
  int A;

  printf("Escriba un número desde 11 hasta 200\n");
    scanf("%d", &A);

    count = A;
    while (count>10)
      {
	if (count%2==0)
	  printf("%d, ", count);
	count--;
      }
    printf("\n");
}
	  

