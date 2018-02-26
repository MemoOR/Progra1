/*Guillermo Ortega Romo 21/09/17*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void dado (void);
int main()
{
  dado();
  return 0;
}

void dado()
{
  int c;
  int r=1;
  int l1=0;
  int l2=0;
  int l3=0;
  int l4=0;
  int l5=0;
  int l6=0;
  
  srand(time(0));
  

  for(r=1;r<=1000;r++)
    {
    c = rand() % 6 + 1;
  	
      if(c==1)
	{
	  l1++;
	    }
	  if(c==2)
	{
	  l2++;
	    }
	   if(c==3)
	{
	  l3++;
	    }
	    if(c==4)
	{
	  l4++;
	    }
	     if(c==5)
	{
	  l5++;
	    }
	      if(c==6)
	{
	  l6++;
	    }
    }
  printf("El dado cayó %d veces en 1\n",l1);
   printf("El dado cayó %d veces en 2\n",l2);
    printf("El dado cayó %d veces en 3\n",l3);
     printf("El dado cayó %d veces en 4\n",l4);
      printf("El dado cayó %d veces en 5\n",l5);
       printf("El dado cayó %d veces en 6\n",l6);
}
	      
	
	      
     
