#include<stdio.h>

FILE *archivo;

struct ficha
{
  char nombre[5];
  int altura;
};
  
int main()
{
  struct ficha b[5];
  archivo=fopen("fichero2.txt","rb");
  fread(b,sizeof(b),1,archivo);
  
  for(int i=0;i<5;i++)
    {
      printf("Nombre: %s  Altura: %d\n",b[i].nombre,b[i].altura);
    }
  fclose(archivo);
}
