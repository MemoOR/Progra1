//Guillermo Ortega Romo

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char nombre[40];
  char apellido[40];
  char lugar[40];
  int i=1;

  printf("Escribe tu nombre: ");
  gets(nombre);
  
  printf("\nEscribe tu apellido: ");
  gets(apellido);
  
  printf("\nEscribe tu lugar de nacimiento: ");
  gets(lugar);

  strcat(nombre, " ");
  strcat(nombre, apellido);
  strcat(nombre, " ");
  strcat(nombre, lugar);

  do
    {
      printf("\n%s", nombre);
      i++;
    } while(i<=5);
  printf("\n");
}
