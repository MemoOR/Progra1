/*Guillermo Ortega Romo 21/09/17*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void fact(void);
int main()
{
  fact();
  return 0;
}

void fact()
{
  int num;
  int fact;

  printf("Escribe un número\n");
  scanf("%d", &num);
  fact = num-1;
  int v=num;
  while(fact>=1)
    {
      v=v*fact;
      fact--;
    }

  printf("El factorial de %d es %d\n", num, v);
}
