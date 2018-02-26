//Guillermo Ortega Romo
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<unistd.h>

struct carta
{
  int numero;
  char palo;
};

struct{
  struct carta corazon[13];
  struct carta trebol[13];
  struct carta diamante[13];
  struct carta pica[13];
}baraja;

void nuevo();
void revol();
void juego();
void menu();
void inst();
void resultado();
void pjugador(char ce);
void pcompu(char ce);

struct carta bar[52];//estructura para la baraja completa
struct carta puntoc[5];//estructura de las cinco cartas del jugador
struct carta puntoj[5];//estructura de las cinco cartas de la compu

int bloq=1;//numero de bloque de las cartas
int pjug=0;//puntos del jugador
int pcomp=0;//puntos de la compu

//funcion principal
int main()
{
  srand(time(0));
  menu();
  return 0;
}

//menu inicial del juego
void menu()
{
  int opcion;
  do
    {
  printf("¿Qué quieres hacer?\n1)Jugar\n2)Instrucciones\nPulsa cualquier otro número para salir\n\n");
  scanf("%d",&opcion);
  //se le pregunta al usuario que quiere hacer

  switch(opcion)
    {
    case 1:
      nuevo();//imprime la baraja nueva
      revol();//revuelve la baraja
      juego();//funcion donde se lleva a cabo el juego
      resultado();//muestra el resultado
      break;
    case 2:
      inst();//instructivo
      break;
    default:
      break;
    }
    }while(opcion==1 || opcion==2);
  //ciclo para repetir el juego las veces que el usuario decida
}


//instructivo
void inst()
{
  printf("\nBienvenido al juego de cartas\nSe revolverá la baraja y se separara en 5 bloques de 10 cartas\nTendrás que escoger entre la carta de la parte baja o superior del bloque\ny la computadora se quedara con la otra\nAl final cuando no haya mas bloques se revelaran las cartas que escogistey el puntaje que ganaste\nde igual forma con la computadora\nQuien tenga mas puntos gana ¡Buena Suerte!\n\n");
}

//imprime la baraja ordenada
void nuevo()
{
  printf("Baraja ordenada\n\n");
  for (int c=0;c<13;c++)//imprime el palo de corazon
    {
      baraja.corazon[c].numero=c;
      baraja.corazon[c].palo='C';
      
      switch (baraja.corazon[c].numero)
	{
	case 0:
	  baraja.corazon[c].numero='A';
	  printf("%c%c%s",baraja.corazon[c].numero,baraja.corazon[c].palo,(c==12)? "\n":" ");
	  break;
	  case 10:
	  baraja.corazon[c].numero='J';
	  printf("%c%c%s",baraja.corazon[c].numero,baraja.corazon[c].palo,(c==12)? "\n":" ");
	  break;
	  case 11:
	  baraja.corazon[c].numero='Q';
	  printf("%c%c%s",baraja.corazon[c].numero,baraja.corazon[c].palo,(c==12)? "\n":" ");
	  break;
	  case 12:
	  baraja.corazon[c].numero='K';
	  printf("%c%c%s",baraja.corazon[c].numero,baraja.corazon[c].palo,(c==12)? "\n":" ");
	  break;
	default:
	  printf("%d%c%s",baraja.corazon[c].numero,baraja.corazon[c].palo,(c==12)? "\n":" ");
	  break;
	}
    }
  for(int c=0;c<13;c++)//imprime el palo de trebol
    {
      baraja.trebol[c].numero=c;
      baraja.trebol[c].palo='T';
      
	  switch (baraja.trebol[c].numero)
	{
	case 0:
	  baraja.trebol[c].numero='A';
	  printf("%c%c%s",baraja.trebol[c].numero,baraja.trebol[c].palo,(c==12)? "\n":" ");
	  break;
	  case 10:
	  baraja.trebol[c].numero='J';
	  printf("%c%c%s",baraja.trebol[c].numero,baraja.trebol[c].palo,(c==12)? "\n":" ");
	  break;
	  case 11:
	  baraja.trebol[c].numero='Q';
	  printf("%c%c%s",baraja.trebol[c].numero,baraja.trebol[c].palo,(c==12)? "\n":" ");
	  break;
	  case 12:
	  baraja.trebol[c].numero='K';
	  printf("%c%c%s",baraja.trebol[c].numero,baraja.trebol[c].palo,(c==12)? "\n":" ");
	  break;
	default:
	  printf("%d%c%s",baraja.trebol[c].numero,baraja.trebol[c].palo,(c==12)? "\n":" ");
	  break;
	}
    }
  for(int c=0;c<13;c++)//imprime el palo de diamante
    {
      baraja.diamante[c].numero=c;
      baraja.diamante[c].palo='D';
	  switch (baraja.diamante[c].numero)
	    {
	case 0:
	  baraja.diamante[c].numero='A';
	  printf("%c%c%s",baraja.diamante[c].numero,baraja.diamante[c].palo,(c==12)? "\n":" ");
	  break;
	  case 10:
	  baraja.diamante[c].numero='J';
	  printf("%c%c%s",baraja.diamante[c].numero,baraja.diamante[c].palo,(c==12)? "\n":" ");
	  break;
	  case 11:
	  baraja.diamante[c].numero='Q';
	  printf("%c%c%s",baraja.diamante[c].numero,baraja.diamante[c].palo,(c==12)? "\n":" ");
	  break;
	  case 12:
	  baraja.diamante[c].numero='K';
	  printf("%c%c%s",baraja.diamante[c].numero,baraja.diamante[c].palo,(c==12)? "\n":" ");
	  break;
	default:
	  printf("%d%c%s",baraja.diamante[c].numero,baraja.diamante[c].palo,(c==12)? "\n":" ");
	  break;
	}
    }
  for(int c=0;c<13;c++)//imprime el palo de pica
    {
      baraja.pica[c].numero=c;
      baraja.pica[c].palo='P';
      
	  switch (baraja.pica[c].numero)
	{
	case 0:
	  baraja.pica[c].numero='A';
	  printf("%c%c%s",baraja.pica[c].numero,baraja.pica[c].palo,(c==12)? "\n":" ");
	  break;
	  case 10:
	  baraja.pica[c].numero='J';
	  printf("%c%c%s",baraja.pica[c].numero,baraja.pica[c].palo,(c==12)? "\n":" ");
	  break;
	  case 11:
	  baraja.pica[c].numero='Q';
	  printf("%c%c%s",baraja.pica[c].numero,baraja.pica[c].palo,(c==12)? "\n":" ");
	  break;
	  case 12:
	  baraja.pica[c].numero='K';
	  printf("%c%c%s",baraja.pica[c].numero,baraja.pica[c].palo,(c==12)? "\n":" ");
	  break;
	default:
	  printf("%d%c%s",baraja.pica[c].numero,baraja.pica[c].palo,(c==12)? "\n":" ");
	  break;
	}
    }
}

//revuelve las cartas
void revol()
{
  int r1,r2;//numeros aleatorios para revolver
  struct carta tmp;//estructura para revolver las cartas

  printf("\n\tSe estan revolviendo las cartas\n\n");
  usleep(1000000);
  
  for(int i=0;i<52;i++)//guarda las 52 cartas en un solo arreglo
    {
      bar[i] = baraja.corazon[i];
    }
  for (int i=0;i<52;i++)//ciclo que revuelve las cartas
    {
      r1 = rand() % 52;
      r2 = rand() % 52;

    tmp = bar[r1];
    bar[r1] = bar[r2];
    bar[r2] = tmp;
    }
}


//funcion que lleva a cabo la interacción con el usuario
void juego()
{
  char ce;

  for(bloq=1;bloq<=5;bloq++)//ciclo para preguntar que carta queire el usuario
    {
      printf("Bloque de cartas %d\n",bloq);
      do{
    printf("¿Qué carta quieres derecha[d] o izquierda[i]?\n");
    scanf(" %c",&ce);
      }while(ce!='d' && ce!='i');
      pjugador(ce);//manda la elección del usuario a evaluar en otra función
      pcompu(ce);//manda la elección del ususario para evaluar la decisión de la computadora
    }
}


//deacuerdo a la eleccion del jugador guarda las cartas que escogio en un arreglo
void pjugador(char ce)
{
  switch(bloq)//condicional para guardar las cartas que escogio el usuario
    {
    case 1:
      if(ce=='i'){
      puntoj[0].numero=bar[0].numero;
      puntoj[0].palo=bar[0].palo;
      }else if(ce=='d'){
	puntoj[0].numero=bar[9].numero;
	puntoj[0].palo=bar[9].palo;
      }
	break;
	case 2:
      if(ce=='i')
      puntoj[1]=bar[10];
      else if(ce=='d')
	puntoj[1]=bar[19];
	break;
	case 3:
      if(ce=='i')
      puntoj[2]=bar[20];
      else if(ce=='d')
	puntoj[20]=bar[29];
	break;
	case 4:
      if(ce=='i')
      puntoj[3]=bar[30];
      else if(ce=='d')
	puntoj[3]=bar[39];
	break;
	case 5:
      if(ce=='i')
      puntoj[4]=bar[40];
      else if(ce=='d')
	puntoj[4]=bar[49];
	break;
    default:
      break;
    }
  pjug=puntoj[0].numero+puntoj[1].numero+puntoj[2].numero+puntoj[3].numero+puntoj[4].numero;
  //suma del puntaje del usuario
}

//se evalua la decisión del jugador para que la compu escoja
void pcompu(char ce)
{
  switch(bloq)//condicional ara ver que cartas le corresponden a la compu
    {
    case 1:
      if(ce=='i')
      puntoc[0]=bar[9];
      else if(ce=='d')
	puntoc[0]=bar[0];
	break;
	case 2:
      if(ce=='i')
      puntoc[1]=bar[19];
      else if(ce=='d')
	puntoc[1]=bar[10];
	break;
	case 3:
      if(ce=='i')
      puntoc[2]=bar[29];
      else if(ce=='d')
	puntoc[20]=bar[20];
	break;
	case 4:
      if(ce=='i')
      puntoc[3]=bar[39];
      else if(ce=='d')
	puntoc[3]=bar[30];
	break;
	case 5:
      if(ce=='i')
      puntoc[4]=bar[49];
      else if(ce=='d')
	puntoc[4]=bar[40];
	break;
    default:
      break;
    }
  pcomp=puntoc[0].numero+puntoc[1].numero+puntoc[2].numero+puntoc[3].numero+puntoc[4].numero;
  //suma el puntaje de la compu
}

//imprime el resultado
void resultado()
{
  if(pjug>pcomp)
    {
    printf("FELICIDADES GANASTE!!\n\n");
    }
    else if (pjug<pcomp)
      {
	printf("PERDISTE\n\n");
      }
  //consicionales para imprimir la letra de una carta en caso de ser necesario
  if(puntoj[0].numero==65 || puntoj[0].numero==74 || puntoj[0].numero==81 || puntoj[0].numero==75)
    {
	  printf("Tus cartas son: %c%c ",puntoj[0].numero,puntoj[0].palo);
    }
  else{printf("Tus cartas son: %d%c ",puntoj[0].numero,puntoj[0].palo);}
  
  if(puntoj[1].numero==65 || puntoj[1].numero==74 || puntoj[1].numero==81 || puntoj[1].numero==75)
    {
	  printf("%c%c ",puntoj[1].numero,puntoj[1].palo);
    }
  else{printf("%d%c ",puntoj[1].numero,puntoj[1].palo);}
  
  if(puntoj[2].numero==65 || puntoj[2].numero==74 || puntoj[2].numero==81 || puntoj[2].numero==75)
    {
	  printf("%c%c ",puntoj[2].numero,puntoj[2].palo);
    }
  else{printf("%d%c ",puntoj[2].numero,puntoj[2].palo);}
  
  if(puntoj[3].numero==65 || puntoj[3].numero==74 || puntoj[3].numero==81 || puntoj[3].numero==75)
    {
	  printf("%c%c ",puntoj[3].numero,puntoj[3].palo);
    }
  else{printf("%d%c ",puntoj[3].numero,puntoj[3].palo);}
  
  if(puntoj[4].numero==65 || puntoj[4].numero==74 || puntoj[4].numero==81 || puntoj[4].numero==75)
    {
	  printf("%c%c\n\n",puntoj[4].numero,puntoj[4].palo);
    }
  else{printf("%d%c\n\n",puntoj[4].numero,puntoj[4].palo);}


  if(puntoc[0].numero==65 || puntoc[0].numero==74 || puntoc[0].numero==81 || puntoc[0].numero==75)
    {
	  printf("Tus cartas son: %c%c ",puntoc[0].numero,puntoc[0].palo);
    }
  else{printf("Tus cartas son: %d%c ",puntoc[0].numero,puntoc[0].palo);}
  
  if(puntoc[1].numero==65 || puntoc[1].numero==74 || puntoc[1].numero==81 || puntoc[1].numero==75)
    {
	  printf("%c%c ",puntoc[1].numero,puntoc[1].palo);
    }
  else{printf("%d%c ",puntoc[1].numero,puntoc[1].palo);}
  
  if(puntoc[2].numero==65 || puntoc[2].numero==64 || puntoc[2].numero==81 || puntoc[2].numero==75)
    {
	  printf("%c%c ",puntoc[2].numero,puntoc[2].palo);
    }
  else{printf("%d%c ",puntoc[2].numero,puntoc[2].palo);}
  
  if(puntoc[3].numero==65 || puntoc[3].numero==74 || puntoc[3].numero==81 || puntoc[3].numero==75)
    {
	  printf("%c%c ",puntoc[3].numero,puntoc[3].palo);
    }
  else{printf("%d%c ",puntoc[3].numero,puntoc[3].palo);}
  
  if(puntoc[4].numero==65 || puntoc[4].numero==74 || puntoc[4].numero==81 || puntoc[4].numero==75)
    {
	  printf("%c%c\n\n",puntoc[4].numero,puntoc[4].palo);
    }
  else{printf("%d%c\n\n",puntoc[4].numero,puntoc[4].palo);} 
}
