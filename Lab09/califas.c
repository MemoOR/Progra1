//Guillermo Ortega Romo 30/10/17

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(0));
  
  int notas[2][10];
  int tmp;

    for (int i=0;i<2;i++)
      {
	for(int j=0;j<10;j++)
	  {
	
	    notas[i][j]=rand()%5+5;
	    
	    printf("%d%s",notas[i][j], (j==9) ? "\n\n" : ", ");
	  }
      }
  printf("\nLa nota del tercer alumno del grupo 1 es %d\n", notas[0][2]);
}
	    
