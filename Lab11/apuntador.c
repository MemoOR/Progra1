//Guillermo Ortega Romo 13/11/17
#include<stdio.h>

void intercambio(int *x,int *y)
{
  int z;

  z=*x;
  *x=*y;
  *y=z;
}

int main()
{
  int a=5, b=8;

  printf("a=%d y b=%d\n",a,b);

  intercambio(&a,&b);

  printf("a=%d y b=%d\n",a,b);
}
