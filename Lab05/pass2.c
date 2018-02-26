/*Guillermo Ortega Romo 25/09/17*/

#include <stdio.h>

void password();
int main()
{
  password();
  return 0;
}

void password (void)
{
  int clave_secreta = 246;
int clave_usuario;
int v=1;

  do
    {
      printf("Para ingresar al sistema, \n por favor ingresa la clave secreta:\n");
      scanf("%d", &clave_usuario);
v++;
} while ((clave_secreta != clave_usuario) &&(v<4));

  if(clave_secreta == clave_usuario)
    {
  printf("Has accedido..\n");
    }
  else
    {
      printf("Contraseña incorrecta\n");
    }
}

