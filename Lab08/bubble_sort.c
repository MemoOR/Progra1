#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void burbuja();

int main()
{

  burbuja();
  return 0;

}

void burbuja()
{

  int i, temp, x;
  int num[20];
  srand(time(0));


  for(i=0; i<=19; i++)
    {
      num[i] = rand()%20+1;

      printf("%d, ", num[i]);
    }

  printf("\n\n");

  for(x=0; x<=18; x++)
    {
      for(i=0; i<=18; i++)
	{
	  if(num[i] > num[i+1])
	    {
	      temp = num[i];
	      num[i] = num [i+1];
	      num[i+1] = temp;
	    }
	}
    }
     for(i=0; i<=19; i++)
    {
      printf("%d, ", num[i]);
    }  
      printf("\n"); 
}
