//Guillero Ortega Romo

#include <stdio.h>
#include <string.h>

void nombre_apellido() {
  char texto1[40], texto2[40], texto3[40];

  printf("Introduce tu nombre: ");
  gets(texto1);

  printf("Introduce tu apellido: ");
  gets(texto2);

  strcat(texto1, " ");
  strcat(texto1, texto2);

  printf("Te llamas: %s\n", texto1);
}

int main() {

  nombre_apellido();

  return 0;
}
