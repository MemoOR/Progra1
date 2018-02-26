/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>

void calificar(void);
int main ()
{
  calificar();
  return 0;
}
void calificar(void)
{
  int calificacion;

  printf("Escribe tu calificación \n");
  scanf("%d", &calificacion);

  if (calificacion >= 6 )
    {
      printf("Pasaste!\n");
    }
  else
    {
      printf("Reprobado\n");
    }
}
