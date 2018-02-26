/*Guillermo Ortega Romo  06/09/17*/ 

#include<stdio.h>

void leer();

int main()
{
  leer();
  return 0;
}
void leer(void)
{
  
  float R;
  float A;
  
  printf("Programa que calcula el área de un círculo \n");
  
printf("Escribir el radio del círculo\n");
scanf("%f", &R);

A = 3.1416 * (R * R);

printf("El área es: %5.2f\n",A);
}
