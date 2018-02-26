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
  int P;
  int m;

  printf("Que tipo de triángulo quieres?\n 1)Equilátero\n 2)Isósceles\n 3)Escaleno\n 4)Salir\n");

  scanf("%d",&m);
  
   if (m<1 ||  m>4)
	{
	  printf("Esa no es una opción\n");
	}
  if (m==4)
    {
      return;
    }
  else
    {

  while(m!=4)
    {
       printf("Que tipo de triángulo quieres?\n 1)Equilátero\n 2)Isósceles\n 3)Escaleno\n 4)Salir\n");
       scanf("%d",&m);

       if (m<1 ||  m>4)
	{
	  printf("Esa no es una opción\n");
	}
      
      if (m==1)
	{
	  printf("Escribe el valor de los lados\n");
	  scanf("%d", &A);

	  P=A+A+A;

	  printf("El perímetro es: %d\n", P);
	}
       if (m==2)
	{
	  printf("Escribe el valor del lado desigual\n");
	  scanf("%d", &A);
	   printf("Escribe el valor de los lados iguales\n");
	  scanf("%d", &B);


	  P=A+B+B;

	  printf("El perímetro es: %d\n", P);
	}
       if (m==3)
	{
	  printf("Escribe el valor del primer lado\n");
	  scanf("%d", &A);
	   printf("Escribe el valor del segundo lado\n");
	  scanf("%d", &B);
	   printf("Escribe el valor del tercer lado\n");
	  scanf("%d", &C);


	  P=A+B+C;

	  printf("El perímetro es: %d\n", P);
	}
    }
    }
}

      
