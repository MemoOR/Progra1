//Guillermo Ortega Romo

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void inst();

void codigo(char real[4][10])
{
  int i, Color;
  for(i=0; i<4; i++)
    {
      Color = 1 + rand() % 6;
      switch(Color)
	{
	case 1:
	  strcpy(real[i], "a");
	  break;
	case 2:
	  strcpy(real[i], "r");
	  break;
	case 3:
	  strcpy(real[i], "v");
	  break;
	case 4:
	  strcpy(real[i], "m");
	  break;
	case 5:
	  strcpy(real[i], "n");
	  break;
	case 6:
	  strcpy(real[i], "b");
	  break;
	}
    }
}

void intento(char comb[4][10])
{
  printf("\n    a r v m n b \n");
  printf("Ingresa tu combinación:\n");
  for(int i=0; i<4; i++)
    scanf("%s", comb[i]);
}

void comparacion(char real[4][10], char comb[4][10], int *b, int *w)
{
  int i, j, checkreal[4] = {1,1,1,1}, checkcomb[4] = {1,1,1,1};
  *b = *w = 0;

  for(i=0; i<4; i++)
    if(strcmp(comb[i], real[i]) == 0)
      {
	++*b;
	checkreal[i] = checkcomb[i] = 0;
      }

  for(i=0; i<4; i++)
    for(j=0; j<4; j++)
      if(strcmp(real[i],comb[j]) == 0  &&  checkcomb[i]  &&  checkreal[j]  &&  i != j)
	{
	  ++*w;
	  checkreal[j] = checkcomb[i] = 0;
	}
}

void turno(char comb[4][10], int b, int w)
{
  int i;
  printf("\nTu combinación\t\tResultado\n");
  
  for(i=0; i<4; i++)
    printf("%s ", comb[i]);
  printf("\t\t");

  for(i=0; i<b; i++)
    printf("* ");

  for(i=0; i<w; i++)
    printf("? ");
  printf("\n\n");
}

int main()
{
  srand(time(0));
  int i, opcion=1, b, w, turn;

  char real[4][10], comb[4][10];

  while(1)
    {
      printf("Escoge una opción\n\n [:v]Jugar: aprieta 1\n\n[:^v]Instrucciones: aprieta 2\n\n[>:v]Aprieta cualquier otro número para salir\n\n");
      scanf("%d", &opcion);
      if(opcion == 1)
	{
	  codigo(real);
	  for(turn=1; turn<=10; turn++)
	    {
	      intento(comb);
	      comparacion(real, comb, &b, &w);
	      turno(comb, b, w);
	      if(b == 4)
		{
		  printf("Ganaste!\n\n\n\n");  break;
		}
	    }
	  if(turn == 11)

	    printf("\nPerdiste:(\nLa respuesta es: %s %s %s %s\n\n\n\n\n", real[0], real[1], real[2], real[3]);
	}
      else if (opcion==2)
	{
	  inst();
	}
      else
	{
	  exit(1);
	}
    }
}


void inst()
{
  printf("\n\nInstrucciones del juego:\n\n");

  printf("Debes de adivinar la combinacion correcta de colores.\n");

  printf("Para ello tienes que escribir una combinacion de 4 colores representados con las siguientes letras:\n\n");

  printf("\t'a' = Azul  'r' = Rojo  'v' = Verde \n\n \t'm' = Morado  'n' = Negro  'b' = Blanco\n\n");

  printf("despues de cada tiro te dira si tienes algo bien.\n\nEsto consiste en el signo de ");

  printf("exclamacion (!), significando que tienes una\nletra correcta en la posicion ");

  printf("correcta.\n\nY el simbolo de gato (#) significa que tienes una letra\n");

  printf("correcta pero en la posicion incorrecta.\n");

  printf("\nEn total tienes 10 tiros.\n\n");
}
