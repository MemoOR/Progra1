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

  do
    {
      printf("Para ingresar al sistema, \n por favor ingresa la clave secreta:\n");
      scanf("%d", &clave_usuario);
    } while (clave_secreta != clave_usuario);

  printf("Has accedido..\n");
}
