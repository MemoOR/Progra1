/* Guillermo Ortega Romo 04/09/17*/

#include<stdio.h>

void leer();

int main ()
{
  leer();
  return 0;
}
void leer (void)
{
float a;
float b;
float c;
float s;
float m;

 printf("Programa que calcula la suma y la multiplicación de tres valores \n");
 printf("Escribe el primer valor\n");
 scanf("%f", &a);

  printf("Escribe el segundo valor\n");
  scanf("%f", &b);

    printf("Escribe el tercer valor\n");
    scanf("%f", &c);

    s = a + b + c;
    m = a * b * c;
      
      printf("El resultado de la suma es: %5.2f\n", s);
    printf("El resultado de la multiplicación es: %5.2f\n", m);
}
