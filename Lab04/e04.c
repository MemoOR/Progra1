/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void numeros(void);
int main ()
{
  numeros();
  return 0;
}
void numeros(void)
{
  int hor;
  int min;
  int seg;

  printf("Escribe la hora\n");
  scanf("%d", &hor);
  printf("Escribe los minutos\n");
  scanf("%d", &min);
  printf("Escribe los segundos\n");
  scanf("%d", &seg);

  if ((hor >=0)&&(hor<=23)&&(min>=0)&&(min<=59)&&(seg>=0)&&(seg<=59))
    {
      seg++;
      if (seg==60)
       {
	 seg=00;
      min++;
       }
      if(min==60)
	{
	  min=00;
	hor++;
	}
      if(hor==24)
	{
	hor=00;
	}
	printf("La hora un segundo después es: %d:%d:%d\n",hor,min,seg);
    }
  else
    {
    printf("Ese valor no sirve\n");
    }
}
