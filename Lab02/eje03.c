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
  float a;
  float b;
  float c;
  float d;

  printf("Programa que pide dos valores y calcula su diferencia de cuadrados de dos maneras diferentes\n");

  printf("Escribe el primer valor\n");
  scanf("%f", &a);

   printf("Escribe el segundo valor\n");
  scanf("%f", &b);

  c = (a+b) * (a-b);
  d = (a*a) - (b*b);

  printf("El resultado por el primer camino es: %5.2f\n", c);
  printf("El reultado por el segundo camino es: %5.2f\n", d);
}

  
