/*Guillermo Ortega Romo 13/09/17*/

#include <stdio.h>

void semana(void);
int main ()
{
  semana();
  return 0;
}
void semana(void)
{
  int num;

  printf("Escribe un número del 1 al 7\n");
  scanf("%d",&num);

  if ((num<1)||(num>7))
    {
      printf("Ese valor no sirve\n");
    }
  else if (num==1)
    {
      printf("El dia de la semana es Lunes\n");
    }
   else if (num==2)
    {
      printf("El dia de la semana es Martes\n");
    }
   else if (num==3)
    {
      printf("El dia de la semana es Miércoles\n");
    }
   else if (num==4)
    {
      printf("El dia de la semana es Jueves\n");
    }
   else if (num==5)
    {
      printf("El dia de la semana es Viernes\n");
    }
   else if (num==6)
    {
      printf("El dia de la semana es Sábado\n");
    }
   else if (num==7)
    {
      printf("El dia de la semana es Domingo\n");
    }
}


  

