//Guillermo Ortega Romo 6/11/17

#include <stdio.h>


struct Persona {
  char nombre[50];
  int edad;
  char ciudad[100];
};

int main() {

  struct Persona persona1;
  FILE *archivo;
  char nombre_archivo[50] = "gente.dat";

  archivo = fopen(nombre_archivo, "rb");

  if (archivo == NULL) {
    archivo = fopen(nombre_archivo, "wb");

    printf("Ingresa el nombre de la persona: ");
    gets(persona1.nombre);

    printf("Ingresa la edad de la persona: ");
    scanf("%d", &persona1.edad);
    getchar();

    printf("Ingresa la ciudad de residencia: ");
    gets(persona1.ciudad);

    fwrite(&persona1, sizeof(persona1), 1, archivo);

  }
  else {
    fread(&persona1, sizeof(persona1), 1, archivo);

    printf("\tNombre: %s\n", persona1.nombre);
    printf("\tEdad: %d\n", persona1.edad);
    printf("\tCiudad de residencia: %s\n", persona1.ciudad);
  }

  fclose(archivo);

  return 0;
}
