/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void triangulo(void);
int main ()
{
  triangulo();
  return 0;
}
void triangulo(void)
{
  int A;
  int B;
  int C;

  printf("Escribe el valor del primer\n");
  scanf("%d", &A);
    
  printf("Escribe el valor del segundo lado\n");
  scanf("%d", &B);

  printf("Escribe el valor del tercer lado\n");
  scanf("%d", &C);

  if (A==B && A==C)
    {
      printf("Es equilátero\n");
    }

  if ((A==B && B!=C) || (A==C && C!=B) || (B==C && C!=A))
    {
      printf("Es isósceles\n");
    }
  if (A!=B && A!=C && B!=C)
    {
      printf("Es escaleno\n");
    }
}
