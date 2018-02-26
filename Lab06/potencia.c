/*Guillermo Ortega Romo 09/10/17*/
#include<stdio.h>

int potencia();

int main()
{
  int num1, num2;

  printf("Introduzca la base: ");
  scanf("%d", &num1);

  printf("\nIntroduzca el exponente: ");
  scanf("%d", &num2);

  printf("\n%d elevado a la %d vale %d\n", num1, num2, potencia(num1,num2));

  return 0;
}

int potencia(int base, int exponente)
{
  int temporal=1;
  int i;

  for(i=1; i<=exponente; i++)
    temporal *= base;
  return temporal;
}
