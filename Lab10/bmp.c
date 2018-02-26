//Guillermo Ortega Romo 6/11/17

#include<stdio.h>

int main()
{
  char nombre[90] = "mm.bmp";

  FILE* archivo;
  int ancho, alto;
  char marca1,marca2;

  puts("Comprobador de imágenes BMP\n");

  archivo = fopen(nombre, "rb");

  if(archivo==NULL)
    puts("no encontrado\n");
  else
    {
      marca1=fgetc(archivo);
      marca2=fgetc(archivo);
      if(marca1=='B' && marca2=='M')
	{
	printf("Marca del archivo: %c%c\n",marca1,marca2);
      fseek(archivo,18,SEEK_SET);
      fread(&ancho,1,4,archivo);
      printf("Ancho: %d\n",ancho);
      fread(alto,1,4,archivo);
      printf("Alto: %d\n",alto);
      fclose(archivo);
	}else
	printf("Ese no es una archivo BMP\n");
    }
      return 0;
}

