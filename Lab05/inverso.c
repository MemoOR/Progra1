/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inv(void);
int main ()
{
  inv();
  return 0;
}
void inv(void)
{
  char A, B, C, D;
  int v=1;
  int r=1;

  printf("Escribe cuatro letras\n");
  scanf("%c %c %c %c", &A, &B, &C, &D);

 
do
  {
    printf("%c, %c, %c, %c\n", D, C, B, A);
    r++;
  } while ((v=1) && (r<2)) ;
    
}

