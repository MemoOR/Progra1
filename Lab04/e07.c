/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void primo(void);
int main ()
{
  primo();
  return 0;
}
void primo(void)
{
  int num;

  printf("Escribe un número del 1 al 20\n");
  scanf("%d", &num);

  if ((num<=0) || (num>=21))
    {
      printf("Ese valor no es válido\n");
    }
  else if (num==2 || num==3 || num==5 || num==7 || num==11 || num==13|| num==17 || num==19)
    {
      printf("Es primo\n");
    }
  else if  (num!=2 || num!=3 || num!=5 || num!=7 || num!=11 || num!=13|| num!=17 || num!=19)
    {
      printf("No es primo\n");
    }
}
