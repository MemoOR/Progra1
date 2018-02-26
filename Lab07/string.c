//Guillermo Ortega Romo

#include<stdio.h>

void cadena(void);

int main()
{
  cadena();
  return 0;
}

void cadena(void)
{
  char texto[40];

  printf("Introduce tu nombre: ");
  scanf("%s", texto);

  printf("Hola, %c\n",texto[0]);
}
