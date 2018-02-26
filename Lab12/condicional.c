//Guillermo Ortega Romo 22/11/17

#include<stdio.h>

#define CANTIDADNUMEROS 5

#define DEPURANDO 1

int main(){
  int numero[CANTIDADNUMEROS];
  int suma=0;
  int i;

  for(i=0;i<CANTIDADNUMEROS;i++){
    printf("Introduzca el dato número %d: ",i+1);
    scanf("%d",&numero[i]);
  }

  for(i=0;i<CANTIDADNUMEROS;i++){

#if DEPURANDO
    
    printf("Valor actual de la suma %d\n",suma);

#endif

    suma+=numero[i];
  }

  printf("Su suma es %d\n",suma);

  return 0;
}

  
