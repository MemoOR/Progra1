/*Guillermo ORtega Romo 09/10/17*/

#include<stdio.h>

void tablademultiplicar();
void primo();
void sumadig();

int main()
{
  int opcion;

  printf("Escoge una opción\n");
  printf("1) Tabla de multiplicar de un número\n");
  printf("2) Saber si un número es primo\n");
  printf("3) Sumar los digitos de un valor ingresado\n");
  printf("4) Salir\n");
  scanf("%d", &opcion);

  while (opcion!=4)
    {

  if (opcion==1)
    {
      tablademultiplicar();
      return 0;
    }
  else if (opcion==2)
    {
      primo();
      return 0;
    }
  else if (opcion==3)
    {
      sumadig();
      return 0;
    }
  
  if (opcion<1 || opcion>3)
    {
      printf("Esa no es una opción\n");
      return 0;
    }
    }
}

void tablademultiplicar()
{
  int rest;
  int num;
      printf("Escribe un número\n");
      scanf("%d", &num);

      for(int i=0; i<=10; i++)
    {
      rest=i*num;
      printf("%d * %d = %d\n",num, i, rest);
    }
}

void primo()
{
  int val;
  int x=0;

  printf("Escribe un número\n");
  scanf("%d", &val);

  for(int i=2; i<=val; i++)
    {
      if (val%i==0)
	{
	  x++;
	}
    }
      if(x>1)
	{
	  printf("No es número primo\n");
	}
      else
	{
	  printf("Es número primo\n");
	}
}

void sumadig()
<%
  int n, sum, s2;
  
  printf("Escribe un número\n");
  scanf("%d", &n);

  s2=0;

  while(n/10!=0)
    {
      sum=n%10;
      n/=10;
      s2+=sum;
    }
  s2+=n;
  printf("La suma de los dígitos es: %d\n", s2);
  
%>
  

  
  
      
	  
      
	  
      
  
  
  
  
