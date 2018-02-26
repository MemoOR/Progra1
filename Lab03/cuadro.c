/*Guillermo Ortega Romo 13/09/17*/

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
  int d=1;
  int dig=1;

  printf("Escribe un número del 1 al 9\n");
  scanf("%d",&num);

  if ((num<1)||(num>9))
    {
      printf("Ese valor no sirve\n");
    }
  else
    {

  for (d=1;d<=num;d++)
    {
      if (d%2==0)
	{
	  for (dig=num;dig>=1;dig--)
	    {
	      printf("%d",dig);
	    }
	}
      else if (d%2==1)
	    {
	      for(dig=1;dig<=num;dig++)
		{
		  printf("%d",dig);
		}
	    }
      printf("\n");
    }
    }
}









  
