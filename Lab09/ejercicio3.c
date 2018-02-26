//Guillermo Ortega Romo 01/11/17

#include<stdio.h>

void modificar(int a[]);

int main(void)
{
  int cont,a[3];
  printf("\nDesde main antes de llamar a la función\n");
  for(cont=0;cont<3;cont++)
    {
      a[cont]=cont+1;
      printf("a[%d] = %d\n",cont,a[cont]);
    }
  modificar(a);

  printf("\nDesde main despues de llamar a la función\n");
  for (cont=0;cont<3;cont++)
    {
      printf("a[%d] = %d\n",cont,a[cont]);
    }
}

void modificar(int a[])
{
  int cont;
  printf("\nDesde la función después de modificar los valores:\n");
  for(cont=0;cont<3;cont++)
    {
      a[cont]=123;
      printf("a[%d] = %d\n",cont,a[cont]);
    }
  return;
}
