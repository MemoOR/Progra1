/*Guillermo Ortega Romo 09/10/17*/

#include<stdio.h>

float mayor (float n1, float n2);
void saludar();

int main()
{
  saludar();
  
  float n1, n2;
  float nmayor;
 
  printf("Escribe el primer valor\n");
  scanf("%f", &n1);

  printf("Escribe el segundo valor\n");
  scanf("%f", &n2);

  nmayor = mayor(n1, n2);

  printf("El número mayor es: %5.2f\n",nmayor);

  return 0;

}

float mayor(float n1, float n2)
{
  if (n1>n2)
    return n1;
  else
    return n2;
}

void saludar()
{
  printf("Bienvenido al programa\n");
  printf(" de ejemplo\n");
  printf("Bienvenido al programa\n");
}
