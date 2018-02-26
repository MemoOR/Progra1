/*Guillero Ortega Romo 09/10/17*/
#include<stdio.h>
int cuadrado(int n);

  int main() {
  int numero;
  int resultado;

  numero=5;
  resultado = cuadrado(numero);
  printf("El cuadrado del número es %d", resultado);
  printf(" y el de 3 es %d\n", cuadrado(3));

  return 0;
}
int cuadrado(int n) {

  return n*n;
}
