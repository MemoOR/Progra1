//Guillermo Ortega Romo 8/11/17

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu();//menu principal del juego
void juego();//primera parte del juego
void inst();//instructivo
void coorj();//posicionamiento de los barcos del jugador
void coorc();//posicionamiento de los barcos de la compu
void juego2();//segunda parte del juego
void ataquec();//ataques de la computadora

int tableroj[6][6],tableroc[6][6],tablerox[6][6];//tablero del jugador, el real de la compu y el que ve en pantalla el jugador

int main()
{
  srand(time(0));
  
  for(int i=1;i<=5;i++)//se igualan todos los caracteres de los arreglos a 0 
    {for(int j=1;j<=5;j++)
	{tableroj[i][j]=0;
	  tableroc[i][j]=0;
	  tablerox[i][j]=0;
	}
    }
  menu();//va al menu del juego
return 0;
}

void menu()
{
  int opcion;
  printf("\n\n");
  printf("\t\tBATALLA NAVAL\n\n");//se le pregunta al jugador que quiere hacer
  do{
    printf("¿Qué quieres hacer?\n1)JUGAR\n2)Instrucciones\nPulsa cualqier otro número para salir\n\n");
    scanf("%d",&opcion);
    switch(opcion)
      {
      case 1:
	juego();//inicia el juego
	break;
      case 2:
	inst();//va al instructivo
	break;
      default:
	break;
      }
  }while(opcion==1 || opcion==2);//cualquier otra opcion sale del juego
}

void juego()//primera parte del juego para acomodar barcos
{
  for(int i=1;i<=5;i++)//se asigan las coordenadas en y del jugador
    {
      tableroj[i][0]=i+64;
    }
  for(int j=1;j<=5;j++)//se asignan las coordenadas en x del jugador
    {
      tableroj[0][j]=j;
    }
  printf("     Tu tablero\n\n");
  
  for(int i=0;i<6;i++){//imprime el tablero del jugador
    for(int j=0;j<6;j++){
      if(tableroj[i][j]==65 || tableroj[i][j]==66 || tableroj[i][j]==67 || tableroj[i][j]==68 || tableroj[i][j]==69)
	printf("%c |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tableroj[i][j],(j==5)?"\n\n":"   ");
    }
  }

  for(int i=1;i<=5;i++)//se asignan las coordenadas en y de la compu
    {
      tablerox[i][0]=i+64;
    }
  for(int j=1;j<=5;j++)//se asignan las coordenas en x de la compu
    {
      tablerox[0][j]=j;
    }
  printf("Tablero de la computadora\n\n");//imprime el tablero que vera el jugador en pantalla
  
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(tablerox[i][j]==65 || tablerox[i][j]==66 || tablerox[i][j]==67 || tablerox[i][j]==68 || tablerox[i][j]==69)
	printf("%c |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tablerox[i][j],(j==5)?"\n\n":"   ");
    }
  }
  coorj();//se le pide al usuario que coloque sus barcos
  coorc();//se asigan los barcos de la compu
  printf("     Tu tablero\n\n");
  
  for(int i=0;i<6;i++){//se imprimen los tableros con los barcos colocados
    for(int j=0;j<6;j++){
      if(tableroj[i][j]==65 || tableroj[i][j]==66 || tableroj[i][j]==67 || tableroj[i][j]==68 || tableroj[i][j]==69)
	printf("%c |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tableroj[i][j],(j==5)?"\n\n":"   ");
    }
  }
  printf("Tablero de la computadora\n\n");
  
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(tablerox[i][j]==65 || tablerox[i][j]==66 || tablerox[i][j]==67 || tablerox[i][j]==68 || tablerox[i][j]==69)
	printf("%c |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tablerox[i][j],(j==5)?"\n\n":"   ");
    }
  }

  juego2();//manda a la segunda parte del juego
  return;
}

void coorj()//el jugador acomoda sus barcos
{
  int x1,y1,x2,y2,x3,y3;
  char r1,r2,r3;

  printf("Primer barco (3 cuadros)\n");//coordenadas del primer barco
  for(int i=1;i<=3;i++)
    {
      do{
      printf("Ingresa la coordenada %d en x: ",i);
      scanf("%d",&x1);}while(x1<1 || x1>5);//si no ingresa un valor valido se sguira preguntando
      do{
      printf("Ingresa la coordenada %d en y: ",i);
      scanf(" %c",&r1);}while(r1!='A' && r1!='B' && r1!='C' && r1!='D' && r1!='E');
      y1=r1-64;
      tableroj[y1][x1]=1;//asigna el valor al tablero del jugador
    }
  printf("Segundo barco (2 cuadros)\n");//coordenadas del segundo barco
  for(int i=1;i<=2;i++)
    {
      do{
      printf("Ingresa la coordenada %d en x: ",i);
      scanf("%d",&x2);}while(x2<1 || x2>5);
      do{
      printf("Ingresa la coordenada %d en y: ",i);
      scanf(" %c",&r2);}while(r2!='A' && r2!='B' && r2!='C' && r2!='D' && r2!='E');
      y2=r2-64;
      tableroj[y2][x2]=2;//asigna valor al tablero del jugador
    }
  printf("Tercer barco (2 cuadros)\n");//coordenadas del tercer barco
  for(int i=1;i<=2;i++)
    {
      do{
      printf("Ingresa la coordenada %d en x: ",i);
      scanf("%d",&x3);}while(x3<1 || x3>5);
      do{
      printf("Ingresa la coordenada %d en y: ",i);
      scanf(" %c",&r3);}while(r3!='A' && r3!='B' && r3!='C' && r3!='D' && r3!='E');
      y3=r3-64;
      tableroj[y3][x3]=3;//asigna el valor en el tablero
    }
}

void coorc()//la compu acomoda sus barcos
{
  int x11,y11,x12,y12,x13,y13;
  int x21,y21,x22,y22;
  int x31,y31,x32,y32;
  
  x11=rand()%5+1; y11=rand()%5+1;
  x12=rand()%5+1; y12=rand()%5+1;
  x13=rand()%5+1; y13=rand()%5+1;

  x21=rand()%5+1; y21=rand()%5+1;
  x22=rand()%5+1; y22=rand()%5+1;

  x31=rand()%5+1; y31=rand()%5+1;
  x32=rand()%5+1; y32=rand()%5+1;
 
  tableroc[y11][x11]=1; tableroc[y12][x12]=1; tableroc[y13][x13]=1; 
  tableroc[y21][x21]=2; tableroc[y22][x22]=2; 
  tableroc[y31][x31]=3; tableroc[y32][x32]=3; 
}

void juego2()//segunda parte del juego para los ataques 
{
  int r1,r2;
  char l2;
  int jugador=0,compu=0;


  do{
    do{
    printf("Ingresa las coordenadas para atacar en x: ");
    scanf("%d",&r1);}while(r1<1 || r1>5);//se pide al usuario que ingrese sus coordenadas para atacar
    do{
      printf("Ingresa las coordenadas para atacar en y: ");//si no ingresa un valor valido se seguira preguntando
    scanf(" %c",&l2);}while(l2!='A' && l2!='B' && l2!='C' && l2!='D' && l2!='E');
    
    r2=l2-64;//cambia el valor de la letra por una coordenada del talero
    
    if(tablerox[r2][r1]==tableroc[r2][r1])
      tablerox[r2][r1]=8;//asigna el valor en el tablero de la compu en la pantalla
    else if(tablerox[r2][r1]!=tableroc[r2][r1])
      tablerox[r2][r1]=9;

    tableroc[r2][r1]=0;//asigna el valor en el tablero de la compu
    
    ataquec();//la compu hace coordenas para atacar

    for(int i=1;i<=5;i++)//revisa todos los valores de los tableros
      {for(int j=1;j<=5;j++)//si todos son 0 entonces se acaba el juego
	{
	  if(tableroj[i][j]==1 || tableroj[i][j]==2 || tableroj[i][j]==3)
	    jugador++;
	  if(tableroc[i][j]==1 || tableroc[i][j]==2 || tableroc[i][j]==3)
	    compu++;
	}
    }
    
    if(compu==0){//mensaje final solo si alguien ganó
    printf("\n\nFELICIDADES GANASTE!!!\n\n");
    return;}
    if(jugador==0){
    printf("\n\nHAS PERDIDO\n\n");
    return;}
    jugador-=jugador; compu-=jugador;

    printf("     Tu tablero\n\n");//imprime los tableros en cada turno
  
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(tableroj[i][j]==65 || tableroj[i][j]==66 || tableroj[i][j]==67 || tableroj[i][j]==68 || tableroj[i][j]==69)
	printf("%c |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tableroj[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tableroj[i][j],(j==5)?"\n\n":"   ");
    }
  }
  printf("Tablero de la computadora\n\n");
  
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(tablerox[i][j]==65 || tablerox[i][j]==66 || tablerox[i][j]==67 || tablerox[i][j]==68 || tablerox[i][j]==69)
	printf("%c |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else if(i==0)
	printf("%d |%s",tablerox[i][j],(j==5)?"\n\n":" ");
      else
	printf("%d%s",tablerox[i][j],(j==5)?"\n\n":"   ");
    }
  }
  }while(compu!=0 || jugador!=0);
}

void ataquec()//ataque de la compu
{
  int c1,c2;
  c1=rand()%5+1;
  c2=rand()%5+1;

  tableroj[c2][c1]=0;
}

void inst()//instructivo
{
  printf("BIENVENIDO A BATALLA NAVAL\n\n");
  printf("1)Jugarás contra la computadora\n");
  printf("2)Tendrás un tablero de 5x5 con coordenadas en X y Y\n");
  printf("3)En ese tablero deberás acomodar tres barcos de forma horizontal o vertical\n");
  printf("  Cada barco se marcara con el número que le corresponde\n  el barco 1 con el número 1\n  el barco 2 con el número 2\n  el barco 3 con el número 3\n");
  printf("4)Se te preguntarán las coordenadas en las que quieras atacar el tablero contrario\n");
  printf("  Deberás ingresar en el eje X un número del 1 al 5 y en el eje Y una letra de la A a la E\n");
  printf("5)La computadora seguirá los mismos pasos en cada turno\n");
  printf("6)Cada que aciertes en un barco enemigo o que se acierte en  uno tuyo este se volverá un 0\n");
  printf("7)En el tablero enemigo veras los tiros que has hecho si aciertas a una posicion se verá un 9 si fallas se verá un 8");
  printf("8)Gana quien logre volver el tablero del contrario en 0, osea quien hunda los 3 barcos\n\n");
  printf("\tSUERTE\n\n");
}
