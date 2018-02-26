/*Guillermo Ortega Romo 14/10/17*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int dado();

int main()
{
  srand(time(0));

  int p1=0, p2=0;
  int q1=0, q2=0;

  int j1, j2;

  printf("Tiros de dado\n\n");

  printf("| Tiro |Jugador 1|Jugador 2|\n");

  for(int i=0;i<20;i++)
    {
      j1=dado();
      j2=dado();

      printf("|  %2d  |    %2d   |    %2d   |\n",i,j1,j2);

      switch (j1)
	{
      case 5:
	p1++;
        break;

      case 6:
	q1++;
	break;

    default:
      break;
	}
      switch (j2)
	{
      case 5:
	p2++;
        break;

      case 6:
	q2++;
	break;

    default:
      break;
	}
      usleep(100000);
    }

  if(p1>p2 && q1<p1)
    {
      printf("El jugador 1 gana\n");
      printf("Puntaje: p1 %d veces 5, %d veces 6; p2 %d veces 5, %d veces 6\n", p1, q1, p2, q2);
    }
  else if(p1<p2 && q2<p2)
    {
      printf("El jugador 2 gana\n");
      printf("Puntaje: p1 %d veces 5, %d veces 6; p2 %d veces 5, %d veces 6\n", p1, q1, p2, q2);
    }
  else
    {
      printf("Empate\n");
      printf("Puntaje: p1 %d veces 5, %d veces 6; p2 %d veces 5, %d veces 6\n", p1, q1, p2, q2);
    }
}


int dado()
{
  return(rand() % 6) + 1;
}

