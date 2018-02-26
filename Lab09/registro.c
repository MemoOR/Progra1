//Guillermo Ortega Romo 01/11/17

#include<stdio.h>

struct datosPersona
{
  char inicial;
  int edad;
  float nota;
};

void registro(void)
{
  struct datosPersona ficha;

  ficha.inicial='J';
  ficha.edad = 20;
  ficha.nota = 7.5;

  printf("La edad es %d\n",ficha.edad);
}

int main()
{
  registro();
  return 0;
}
