//Guillermo Ortega Romo 18/10/17*/

#include<stdio.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  int numero[5];
  int suma;

  numero[0]=200;
  numero[1]=150;
  numero[2]=100;
  numero[3]=-50;
  numero[4]=300;

  suma = numero[0]+numero[1]+numero[2]+numero[3]+numero[4];

  printf("El resultadode la suma es: %d\n", suma);
}
