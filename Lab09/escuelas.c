//Guillermo Ortega Romo 30/10/17

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int calif[2][3][10];
  int i,j,k;
  float tempi,tempj,tempk;
  float prome,promt,promg;

  for(i=0;i<2;i++)
    {
      tempj=0;
        printf("Escuela: %d\n",i+1);
      for(j=0;j<3;j++)
	{
	   tempk=0;
	   printf("Grupo: %d\n",j+1);
	  for(k=0;k<10;k++)
	    {
	      calif[i][j][k] = rand()%5+5;
	      printf("%d ",calif[i][j][k]);
	      	      
	      tempk+=calif[i][j][k];
	      promg=tempk/10;
	    }
	  printf(" El promedio del grupo es: %.2f",promg);
	 
	  printf("\n");

	  tempj+=promg;
	  prome=tempj/3;
	}
      
      printf("\nEl promedio de la escuela es: %.2f\n",prome);
     
      printf("\n");

      tempi+=prome;
      promt=tempi/2;
    }
  printf("El promedio total es: %.2f\n\n",promt);
}
