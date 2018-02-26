#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ficha
{
  char nombre[50];
  int altura;
};

int main()
{
  struct ficha a[5];
  FILE *archivo;
  int i;
  archivo = fopen("fichero2.txt","wb");
  for(i=0;i<5;i++)
    {
      printf("ingresa Nombre: ");
      gets(a[i].nombre);
      printf("ingresa altura: ");
      scanf("%d",&a[i].altura);
      getchar();
    }
  fwrite(a,sizeof(a),1,archivo);
  fclose(archivo);
}
