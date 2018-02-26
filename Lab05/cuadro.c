/*Guillermo Ortega Romo 25/09/17*/

#include <stdio.h>

void cuadro(void);
int main ()
{
  cuadro();
  return 0;
}
void cuadro(void)
{
  int num;
  int fil=1;
  int col=0;

  printf("Escribe un número del 1 al 50\n");
  scanf("%d",&num);

  if ((num<1)||(num>50))
    {
      printf("Ese valor no sirve\n");
    }
  for (fil=0;fil<num;fil++)
    {
      for (col=0;col<num;col++)
	    {
	      if(col==0||col==(num-1))
		{printf("*");}
	      else if (fil==0||fil==(num-1))
		{printf("*");}
	      else
		{printf(" ");}
	    }
      printf("\n");
    }
}



