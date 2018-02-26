//Guillermo Ortega Romo 30/10/17

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i;
  char nombre[10][40];
  char comp[10][40];

  for(int q=0;q<10;q++)
    {
      printf("Introduce el nombre %d: ",q+1);
      gets(nombre[q]);
      printf("\n");
    }

 	
  for(i=0;i<9;i++)
    {
      for(i=0;i<9;i++)
	{
	  if(strcmp(nombre[i],nombre[i+1])>0)
		{
		  strcpy(comp[i],nombre[i]);
		  strcpy(nombre[i+1],nombre[i]);
		  strcpy(comp[i],nombre[i+1]);
		}	 
	}
    }
  	
  for(int e=0;e<10;e++)
    {
      printf("%s\n",nombre[e]);
    }
  
}
