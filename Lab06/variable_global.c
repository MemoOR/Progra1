/*Guillermo Ortega Romo 09/10/17*/

#include<stdio.h>
void duplica();

int n=5;

int main()
{
  printf("n vale %d\n", n);
  duplica();
  printf("Ahora n vale %d\n",n );

  return 0;
}

void duplica()
{
  n = n*2;
}
