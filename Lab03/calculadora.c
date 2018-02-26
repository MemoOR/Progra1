/*Guillermo Ortega Romo 13/09/17*/

#include <stdio.h>

void calculadora(void);
int main ()
{
  calculadora();
  return 0;
}
void calculadora(void)
{
  int oper;
  float num1;
  float num2;
  float rest;

  printf("Elige una opción \n 1)suma\n2)resta\n3)multiplicación\n4)división\n5)salir\n");
  scanf("%d", &oper);

  if (oper == 1 )
    {
      printf("Escribe el primer valor\n");
      scanf("%f",&num1);
      printf("Escribe el segundo valor\n");
      scanf("%f",&num2);
      rest=num1+num2;
       printf("El resultado es: %f\n",rest);
    }
   if (oper == 2 )
    {
      printf("Escribe el primer valor\n");
      scanf("%f",&num1);
      printf("Escribe el segundo valor\n");
      scanf("%f",&num2);
      rest=num1-num2;
      printf("El resultado es: %f\n",rest);
    }
 if (oper == 3 )
    {
      printf("Escribe el primer valor\n");
      scanf("%f",&num1);
      printf("Escribe el segundo valor\n");
      scanf("%f",&num2);
      rest=num1*num2;
       printf("El resultado es: %f\n",rest);
    }
 if (oper == 4 )
    {
      printf("Escribe el primer valor\n");
      scanf("%f",&num1);
      printf("Escribe el segundo valor\n");
      scanf("%f",&num2);
      rest=num1/num2;
       printf("El resultado es: %f\n",rest);
    }
 if (oper==5)
   {
     return;
   }
 if ((oper!=1)&&(oper!=2)&&(oper!=3)&&(oper!=4)&&(oper!=5))
   {
     printf("Esa no es una opción\n");
   }
}

 

