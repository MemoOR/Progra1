//Guillermo Ortega Romo 13/11/17

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arreglo(int *v,int *p)
{
  int arr[10];
  
  for(int i=0;i<10;i++)
    {
      arr[i]=rand()%100+1;
    }

  for(int j=0;j<10;j++)
    {
      if(arr[j]>arr[j-1]){
	*v=arr[j];
	*p=j;
      }
    }
}

int main()
{
  srand(time(0));
    
  int valor, posicion;

  arreglo(&valor,&posicion);

  printf("El máximo valor es %d\n",valor);
  printf("Su posición es %d\n",posicion);
}

