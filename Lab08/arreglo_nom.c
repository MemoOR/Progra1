#include<stdio.h>
#include <string.h>

void nombres(void);
int main()
{
  nombres();
  return 0;
}

void nombres(void)
{
  char nombre1[40];
  char nombre2[40];
  char nombre3[40];
  char nombre4[40];
  char nombre5[40];
  char nom[40];
  
	  printf("Introduce el primer nombre: ");
	  gets(nombre1);

	  printf("\nIntroduce el segundo nombre: ");
	  gets(nombre2);
	 
	  printf("\nIntroduce el tercer nombre: ");
	  gets(nombre3);

	  printf("\nIntroduce el cuarto nombre: ");
	  gets(nombre4);

	  printf("\nIntroduce el quinto nombre: ");
	  gets(nombre5);
	  
  while(strcmp(nom,"fin")!=0)
    {
      printf("\nIngresa el nombre que quieres comparar: ");
      gets(nom);

      int comparacion1=strcmp(nom,nombre1);
      int comparacion2=strcmp(nom,nombre2);
      int comparacion3=strcmp(nom,nombre3);
      int comparacion4=strcmp(nom,nombre4);
      int comparacion5=strcmp(nom,nombre5);

      
      if (comparacion1 == 0)
	{
	  printf("\nEse fue el primer nombre que ingresaste\n");
	}
      if (comparacion2 == 0)
	{
	  printf("\nEse fue el segundo nombre que ingresaste\n");
	}
      if (comparacion3 == 0)
	{
	  printf("\nEse fue el tercer nombre que ingresaste \n");
	}
      if (comparacion4 == 0)
	{
	  printf("\nEse fue el cuarto nombre que ingresaste\n");
	}
      if (comparacion5 == 0)
	{
	  printf("\nEse fue el primer nombre que ingresaste\n");
	}
      if(comparacion1!=0 && comparacion2!=0 && comparacion3!=0 && comparacion4!=0 && comparacion5!=0 && strcmp(nom,"fin")!=0)
 	{
	  printf("\nEse nombre no lo ingresaste\n");
	}
    }
  

  printf("\nFIN DEL PROGRAMA\n");

  return;
}
   


  




	  
