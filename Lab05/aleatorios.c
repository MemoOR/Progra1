/*Guillermo Ortega Romo 21/09/17*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void aleatorio (void);
int main()
{
  aleatorio();
  return 0;
}

void aleatorio()
{
  int n;
  int m;
  int o;
  
  srand(time(0));
  n= rand() % 10 + 1;
  printf("Un número entre 1 y 10: %d\n", n);
   m= rand() % 20 + 10;
  printf("Un número entre 10 y 29: %d\n", m);

   o= rand() % 100 + 1;
  printf("Un número entre 1 y 100: %d\n", 0);
  
}
