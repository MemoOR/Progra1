//Guillermo Ortega Romo 6/11/17

#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE* archivo;
  char nombre[80] = "archivo_prueba2.txt";
  char linea[81];

  archivo=fopen(nombre,"rt");

  if (archivo==NULL)
    {
      printf("No existe el archivo\n");
      exit(1);
    }
  fgets(linea,80,archivo);
  puts(linea);
  fclose(archivo);

  return 0;
}
