/*Guillermo Ortega Romo 16/10/17*/
#include<stdio.h>

void dream();

int main()
{
  printf("Estoy despierto, nivel 1. Listo para dormir....\n");
  dream(1);
  printf("Desperté en un avión aterrizando en LA\n");

  return 0;
}

void dream(int nivel)
{
  int inception=0;

  nivel += 1;
  printf("estoy durmiendo en el nivel %d\n",nivel);

  if (nivel == 5)
    inception=1;  //misión cumplida

  if (inception != 1)
    dream(nivel); //siguiente nivel de sueño
}

      
