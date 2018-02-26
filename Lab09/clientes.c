//Guillermo Ortega Romo 01/11/17

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct datos
{
  char nombre[40];
  char apellido[40];
  int edad;
  char genero[40];
  int cp;
}clientes[10];

int clientesan=0;

void menu();
void anadir();
void ver();
void buscar();

int main()
{
  menu();
  return 0;
} 

void menu()
{
  int opcion;
  do
    {
  printf("¿Qué quieres hacer?\n");
  printf("1)Añadir cliente\n2)Ver todos los clientes\n3)Buscar cliente por nombre\n\n Pulsa cualquier otro número para salir\n");
  scanf("%d",&opcion);
  getchar();
  switch(opcion)
    {
    case 1:
      if(clientesan>9)
	{
	  printf("Ya no hay espacio para otro cliente\n");
	}
      else
	{
	  anadir();
	}
      break;
      
    case 2: ver(); break;
    case 3: buscar(); break;
    default: break;
    }
    }while(opcion>0 && opcion<4);
}

void anadir()
{ 
  printf("Escribe el nombre del cliente\n");
  gets(clientes[clientesan].nombre);
  
  printf("Escribe el apellido del cliente\n");
  gets(clientes[clientesan].apellido);
  
  printf("Escribe la edad del cliente\n");
  scanf("%d",&clientes[clientesan].edad);
  getchar();
  printf("Escribe el genero del cliente\n");
  gets(clientes[clientesan].genero);
  
  printf("Escribe el código postal del cliente\n");
  scanf("%d",&clientes[clientesan].cp);
  getchar();
  
  clientesan++; 
		  
}

void ver()
{
  if(clientesan==0)
    {
      printf("No hay ningun cliente\n\n");
    }
  else
    {

  for (int i=1;i<=clientesan;i++)
    {
      printf("cliente %d: %s %s \n", i,clientes[i-1].nombre,clientes[i-1].apellido);
    }
    }
}

void buscar()
{
  char busc[40];
  int e=0;
  
  printf("Escribe el nombre del cliente que quieres buscar\n");
  gets(busc);

  for(int i=0;i<=clientesan;i++)
    {
      if(strcmp(clientes[i].nombre,busc)==0)
	{
	  e=1;
	  printf("Nombre: %s \nApellido: %s \nEdad: %d \nGénero: %s \nCódigo postal: %d\n\n",clientes[i].nombre,clientes[i].apellido,clientes[i].edad,clientes[i].genero,clientes[i].cp);
	}
    }
  if(e==0)
    {
      printf("Ese cliente no esta en la base de datos\n\n");
    }
}


       

