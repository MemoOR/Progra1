//Guillermo Ortega Romo 06/11/17

#include<stdio.h>

int main()
{
  FILE* archivo;

  archivo = fopen("archivo_prueba.txt","wt");
  fputs("Esto es una línea\n",archivo);
  fputs("Esto es otra", archivo);
  fputs(" y esto es continuación de la anterior\n",archivo);
  fclose(archivo);

  return 0;
}
