//Guillermo Ortega Romo 22/11/17

#include<stdio.h>

#define SUMA(x,y) x+y

int main(){
  int n1,n2;

  printf("Introduzca el primer valor: ");
  scanf("%d",&n1);

  printf("Introduzca el segundo valor: ");
  scanf("%d",&n2);

  printf("Su suma es: %d\n ",SUMA(n1,n2));
  return 0;
}
