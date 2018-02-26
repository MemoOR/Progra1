//Guillermo Ortega Romo 22/11/17

#include<stdio.h>

#define CANTIDADNUMEROS 3

int main()
{
  int numero[CANTIDADNUMEROS];
  int suma=0;

  for(int i=0;i<CANTIDADNUMEROS;i++){
    printf("Introduzca el dato numero %d: ",i+1);
    scanf("%d",&numero[i]);
  }

  for(int i=0;i<CANTIDADNUMEROS;i++){
    suma+=numero[i];
  }
    printf("Su suma es %d\n",suma);

    return 0;
}
