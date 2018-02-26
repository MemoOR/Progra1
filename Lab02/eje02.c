/*Guillermo Ortega Romo  06/09/17*/

#include <stdio.h>

void leer();
int main()
{
  leer();
  return 0;
}
void leer(void)
{
  int num1;
  int num2;
  float rest;
  float resi;
  printf("Programa que divide dos números y da su residuo\n");

  printf("Escribe el dividendo\n");
  scanf("%d", &num1);

  printf("Escribe el divisor\n");
  scanf("%d", &num2);

  rest = num1/num2;
  resi = num1%num2;

  printf("El resultado de la división es: %5.2f\n", rest);
  printf("El residuo de la división es: %5.2f\n", resi);
}
    
