//Guillermo Ortega Romo 16/10/17

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

void menu();//jugador inicial
void menu2();//que dados tirar
void menuco();//compu
void print1();//imprimir dados jugador
int comparacion();//comparacion de jugador
int comparacion2();//comparacion de compu
int despcomp1();//puntos de jugador
int despcomp2();//puntos de compu
int puntaje();//resultado
char dado();//random

int ciclo1();//dados jugador
//impresion jugador
int ciclo2();//impresion de dados compu

int da1, da2, da3, da4, da5;
int dac1, dac2, dac3, dac4, dac5;
int x1=1,x2=1,x3=1,x4=1,x5=1;
int turnojugador=1;
int turnocompu=1;
int comp=0;
int compc=0;
int opcion;
int p1=0, p2=0;

int main()
{
  srand(time(0));
  
  printf("Juego de cubilete\n\n");
    
  while (turnojugador<=5)
  {
    menu();
    if(turnojugador>=1 && turnojugador<5)
      {
	menu2();
      }
    turnojugador++;
    menuco();
    turnocompu++;
  }
    puntaje();
  return 0;
}


//menu del jugador
void menu()
{
 
  printf("¿Qué quieres hacer?\n1)Jugar\n2)Salir\n");
  scanf("%d",&opcion);

  switch (opcion)
    {
    case 1:
      ciclo1();
      print1();
      break;

    case 2:
      turnojugador=5;
      break;

    default:
      printf("Esa no es una opción, intenta de nuevo\n");
      turnojugador-=1;
      break;
    }
}

//segundo menu para dados
void menu2()
{
  char d1,d2,d3,d4,d5;
     
  printf("¿Quieres volver a tirar el dado 1? [si=s no=n]\n");
  scanf(" %c", &d1);
  printf("¿Quieres volver a tirar el dado 2? [si=s no=n]\n");
  scanf(" %c", &d2);
  printf("¿Quieres volver a tirar el dado 3? [si=s no=n]\n");
  scanf(" %c", &d3);
  printf("¿Quieres volver a tirar el dado 4? [si=s no=n]\n");
  scanf(" %c", &d4);
  printf("¿Quieres volver a tirar el dado 5? [si=s no=n]\n");
  scanf(" %c", &d5);


  if (d1=='s')
    {
      x1=1;
    }
  else if(d1=='n')
    {
      x1=0;
    }
  
  if (d2=='s')
    {
      x2=1;
    }
  else if(d2=='n')
    {
      x2=0;
    }
  if (d3=='s')
    {
      x3=1;
    }
  else if(d3=='n')
    {
      x3=0;
    }
  if (d4=='s')
    {
      x4=1;
    }
  else if(d4=='n')
    {
      x4=0;
    }
  if (d5=='s')
    {
      x5=1;
    }
  else if(d5=='n')
    {
      x5=0;
    }
  ciclo1();
  comparacion();
}
 

//menu compu
void menuco()
{
  if (opcion==1)
    {
      if(turnocompu<=5)
	{
      ciclo2();
	}
      else
	{
	  return;
	 }
    }
  else
    {
      return;
    }
}
      
  
//else if cañones del jugador :V
int comparacion()
{
  
/*5 iguales*/
  if (da1==da2 && da1==da3 && da1==da4 && da1==da5)
    {
      comp=1;
      despcomp1();
    }
/*5 iguales*/

/*4 iguales*/
  else if(da1!=da2 && da1==da3 && da1==da4 && da1==da5)
    {
      comp=2;
      despcomp1();
    }
  else if(da1==da2 && da1!=da3 && da1==da4 && da1==da5)
    {
      comp=2;
      despcomp1();
    }
  else if (da1==da2 && da1==da3 && da1!=da4 && da1==da5)
    {
      comp=2;
      despcomp1();
    }
  else if(da1==da2 && da1==da3 && da1==da4 && da1!=da5)
    {
      comp=2;
      despcomp1();
    }
/*4 iguales*/

/*3 iguales y dos iguales*/
  //si el par esta junto
  else if (da1==da2 && da1==da3 && da1!=da4 && da1!=da5 && da4==da5)
    {
      comp=3;
      despcomp1();
    }
  else if (da1==da2 && da1!=da3 && da1!=da4 && da1==da5 && da3==da4)
    {
      comp=3;
      despcomp1();
    }
  else if (da1!=da2 && da1!=da3 && da1==da4 && da1==da5 && da2==da3)
    {
      comp=3;
      despcomp1();
    }
  else if (da3==da4 && da3==da5 && da3!=da1 && da3!=da2 && da1==da2)
    {
      comp=3;
      despcomp1();
    }
  //Si el par esta junto
  
  //Si el par esta separado con uno en la primera posicion
  else if (da2==da3 && da2==da4 && da2!=da1 && da2!=da5 && da1==da5)
    {
      comp=3;
      despcomp1();
    }
  else if (da2==da4 && da2==da5 && da2!=da1 && da2!=da3 && da1==da3)
    {
      comp=3;
      despcomp1();
    }
  else if (da2==da3 && da2==da5 && da2!=da1 && da2!=da4 && da1==da4)
    {
      comp=3;
      despcomp1();
    }
   //Si el par esta separado con uno en la primera posicion
  
   //Si el par esta separado con uno en la segunda posicion
  else if (da1==da3 && da1==da5 && da1!=da2 && da1!=da4 && da2==da4)
    {
      comp=3;
      despcomp1();
    }
  else if (da1==da3 && da1==da4 && da1!=da2 && da1!=da5 && da2==da5)
    {
      comp=3;
      despcomp1();
    }
   //Si el par esta separado con uno en la segunda posicion

   //Si el par esta separado con uno en la tercera posicion
   else if (da1==da2 && da1==da4 && da1!=da3 && da1!=da5 && da3==da5)
    {
      comp=3;
      despcomp1();
    }
   //Si el par esta separado con uno en la tercera posicion
  
/*3 iguales y dos iguales*/

/*3 iguales y dos desiguales*/
    //si el par esta junto
  else if (da1==da2 && da1==da3 && da1!=da4 && da1!=da5 && da4!=da5)
    {
      comp=4;
      despcomp1();
    }
  else if (da1==da2 && da1!=da3 && da1!=da4 && da1==da5 && da3!=da4)
    {
      comp=4;
      despcomp1();
    }
  else if (da1!=da2 && da1!=da3 && da1==da4 && da1==da5 && da2!=da3)
    {
      comp=4;
      despcomp1();
    }
  else if (da3==da4 && da3==da5 && da3!=da1 && da3!=da2 && da1!=da2)
    {
      comp=4;
      despcomp1();
    }
  //Si el par esta junto
  
  //Si el par esta separado con uno en la primera posicion
  else if (da2==da3 && da2==da4 && da2!=da1 && da2!=da5 && da1!=da5)
    {
      comp=4;
      despcomp1();
    }
  else if (da2==da4 && da2==da5 && da2!=da1 && da2!=da3 && da1!=da3)
    {
      comp=4;
      despcomp1();
    }
  else if (da2==da3 && da2==da5 && da2!=da1 && da2!=da4 && da1!=da4)
    {
      comp=4;
      despcomp1();
    }
   //Si el par esta separado con uno en la primera posicion
  
   //Si el par esta separado con uno en la segunda posicion
  else if (da1==da3 && da1==da5 && da1!=da2 && da1!=da4 && da2!=da4)
    {
      comp=4;
      despcomp1();
    }
  else if (da1==da3 && da1==da4 && da1!=da2 && da1!=da5 && da2!=da5)
    {
      comp=4;
      despcomp1();
    }
   //Si el par esta separado con uno en la segunda posicion

   //Si el par esta separado con uno en la tercera posicion
   else if (da1==da2 && da1==da4 && da1!=da3 && da1!=da5 && da3!=da5)
    {
      comp=4;
      despcomp1();
    }
   //Si el par esta separado con uno en la tercera posicion

/*3 iguales con 2 desiguales*/

/*dos pares*/
  else if (da1==da2 && da3==da4 && da1!=da5 && da3!=da5 && da1!=da3)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da3 && da2==da4 && da1!=da5 && da2!=da5 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da4 && da2==da3 && da1!=da5 && da2!=da5 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da2 && da3==da5 && da1!=da4 && da3!=da4 && da1!=da3)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da3 && da2==da5 && da1!=da4 && da2!=da4 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da5 && da2==da3 && da1!=da4 && da2!=da4 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da2 && da4==da5 && da1!=da3 && da4!=da3 && da1!=da4)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da4 && da2==da5 && da1!=da3 && da2!=da3 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da5 && da2==da4 && da1!=da3 && da2!=da3 && da1!=da2)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da3 && da4==da5 && da1!=da2 && da4!=da2 && da1!=da4)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da4 && da3==da5 && da1!=da2 && da3!=da2 && da1!=da3)
    {
      comp=5;
      despcomp1();
    }
  else if (da1==da5 && da3==da4 && da1!=da2 && da3!=da2 && da1!=da3)
    {
      comp=5;
      despcomp1();
    }
  else if (da2==da3 && da4==da5 && da2!=da1 && da4!=da1 && da2!=da4)
    {
      comp=5;
      despcomp1();
    }
  else if (da2==da4 && da3==da5 && da2!=da1 && da3!=da1 && da2!=da3)
    {
      comp=5;
      despcomp1();
    }
  else if (da2==da5 && da3==da4 && da2!=da1 && da3!=da1 && da2!=da3)
    {
      comp=5;
      despcomp1();
    }
/*Dos pares*/
 
/*dos iguales*/
  else if(da1==da2 && da1!=da3 && da1!=da4 && da1!=da5 && da3!=da4 && da3!=da5 && da4!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da1==da3 && da1!=da2 && da1!=da4 && da1!=da5 && da2!=da4 && da2!=da5 && da4!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da1==da4 && da1!=da2 && da1!=da3 && da1!=da5 && da2!=da3 && da2!=da5 && da3!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da1==da5 && da1!=da2 && da1!=da3 && da1!=da4 && da2!=da3 && da2!=da4 && da3!=da4)
    {
      comp=6;
      despcomp1();
    }
  else if(da2==da3 && da1!=da2 && da2!=da4 && da2!=da5 && da1!=da4 && da1!=da5 && da4!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da2==da4 && da1!=da2 && da2!=da3 && da2!=da5 && da1!=da3 && da1!=da5 && da3!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da2==da5 && da1!=da2 && da2!=da3 && da2!=da4 && da1!=da3 && da1!=da4 && da3!=da4)
    {
      comp=6;
      despcomp1();
    }
  else if(da3==da4 && da1!=da3 && da2!=da3 && da3!=da5 && da1!=da2 && da1!=da5 && da2!=da5)
    {
      comp=6;
      despcomp1();
    }
  else if(da3==da5 && da1!=da3 && da2!=da3 && da3!=da4 && da1!=da2 && da1!=da5 && da2!=da4)
    {
      comp=6;
      despcomp1();
    }
  else if(da4==da5 && da1!=da4 && da2!=da4 && da3!=da4 && da1!=da3 && da1!=da2 && da2!=da3)
    {
      comp=6;
      despcomp1();
    }
/*Dos iguales*/
  
/*Todos desiguales*/

  else if(da1!=da2 && da1!=da3 && da1!=da4 && da1!=da5 && da2!=da3 && da2!=da4 && da2!=da5 && da3!=da4 && da3!=da5 && da4!=da5)
    {
      comp=6;
      despcomp1();
    }
/*Todos desiguales*/
}

//puntaje compu
int comparacion2()
{
/*5 iguales*/
  if (dac1==dac2 && dac1==dac3 && dac1==dac4 && dac1==dac5)
    {
      compc=1;
      despcomp2();
    }
/*5 iguales*/

/*4 iguales*/
  else if(dac1!=dac2 && dac1==dac3 && dac1==dac4 && dac1==dac5)
    {
      compc=2;
      despcomp2();
    }
  else if(dac1==dac2 && dac1!=dac3 && dac1==dac4 && dac1==dac5)
    {
      compc=2;
      despcomp2();
    }
  else if (dac1==dac2 && dac1==dac3 && dac1!=dac4 && dac1==dac5)
    {
      compc=2;
      despcomp2();
    }
  else if(dac1==dac2 && dac1==dac3 && dac1==dac4 && dac1!=dac5)
    {
      compc=2;
      despcomp2();
    }
/*4 iguales*/

/*3 iguales y dos iguales*/
  //si el par esta junto
  else if (dac1==dac2 && dac1==dac3 && dac1!=dac4 && dac1!=dac5 && dac4==dac5)
    {
      compc=3;
      despcomp2();
    }
  else if (dac1==dac2 && dac1!=dac3 && dac1!=dac4 && dac1==dac5 && dac3==dac4)
    {
      compc=3;
      despcomp2();
    }
  else if (dac1!=dac2 && dac1!=dac3 && dac1==dac4 && dac1==dac5 && dac2==dac3)
    {
      compc=3;
      despcomp2();
    }
  else if (dac3==dac4 && dac3==dac5 && dac3!=dac1 && dac3!=dac2 && dac1==dac2)
    {
      compc=3;
      despcomp2();
    }
  //Si el par esta junto
  
  //Si el par esta separado con uno en la primera posicion
  else if (dac2==dac3 && dac2==dac4 && dac2!=dac1 && dac2!=dac5 && dac1==dac5)
    {
      compc=3;
      despcomp2();
    }
  else if (dac2==dac4 && dac2==dac5 && dac2!=dac1 && dac2!=dac3 && dac1==dac3)
    {
      compc=3;
      despcomp2();
    }
  else if (dac2==dac3 && dac2==dac5 && dac2!=dac1 && dac2!=dac4 && dac1==dac4)
    {
      compc=3;
      despcomp2();
    }
   //Si el par esta separado con uno en la primera posicion
  
   //Si el par esta separado con uno en la segunda posicion
  else if (dac1==dac3 && dac1==dac5 && dac1!=dac2 && dac1!=dac4 && dac2==dac4)
    {
      compc=3;
      despcomp2();
    }
  else if (dac1==dac3 && dac1==dac4 && dac1!=dac2 && dac1!=dac5 && dac2==dac5)
    {
      compc=3;
      despcomp2();
    }
   //Si el par esta separado con uno en la segunda posicion

   //Si el par esta separado con uno en la tercera posicion
   else if (dac1==dac2 && dac1==dac4 && dac1!=dac3 && dac1!=dac5 && dac3==dac5)
    {
      compc=3;
      despcomp2();
    }
   //Si el par esta separado con uno en la tercera posicion

/*3 iguales y dos iguales*/

/*3 iguales y dos desiguales*/
    //si el par esta junto
  else if (dac1==dac2 && dac1==dac3 && dac1!=dac4 && dac1!=dac5 && dac4!=dac5)
    {
      compc=4;
      despcomp2();
    }
  else if (dac1==dac2 && dac1!=dac3 && dac1!=dac4 && dac1==dac5 && dac3!=dac4)
    {
      compc=4;
      despcomp2();
    }
  else if (dac1!=dac2 && dac1!=dac3 && dac1==dac4 && dac1==dac5 && dac2!=dac3)
    {
      compc=4;
      despcomp2();
    }
  else if (dac3==dac4 && dac3==dac5 && dac3!=dac1 && dac3!=dac2 && dac1!=dac2)
    {
      compc=4;
      despcomp2();
    }
  //Si el par esta junto
  
  //Si el par esta separado con uno en la primera posicion
  else if (dac2==dac3 && dac2==dac4 && dac2!=dac1 && dac2!=dac5 && dac1!=dac5)
    {
      compc=4;
      despcomp2();
    }
  else if (dac2==dac4 && dac2==dac5 && dac2!=dac1 && dac2!=dac3 && dac1!=dac3)
    {
      compc=4;
      despcomp2();
    }
  else if (dac2==dac3 && dac2==dac5 && dac2!=dac1 && dac2!=dac4 && dac1!=dac4)
    {
      compc=4;
      despcomp2();
    }
   //Si el par esta separado con uno en la primera posicion
  
   //Si el par esta separado con uno en la segunda posicion
  else if (dac1==dac3 && dac1==dac5 && dac1!=dac2 && dac1!=dac4 && dac2!=dac4)
    {
      compc=4;
      despcomp2();
    }
  else if (dac1==dac3 && dac1==dac4 && dac1!=dac2 && dac1!=dac5 && dac2!=dac5)
    {
      compc=4;
      despcomp2();
    }
   //Si el par esta separado con uno en la segunda posicion

   //Si el par esta separado con uno en la tercera posicion
   else if (dac1==dac2 && dac1==dac4 && dac1!=dac3 && dac1!=dac5 && dac3!=dac5)
    {
      compc=4;
      despcomp2();
    }
   //Si el par esta separado con uno en la tercera posicion
/*3 iguales con 2 desiguales*/

/*dos pares*/
  else if (dac1==dac2 && dac3==dac4 && dac1!=dac5 && dac3!=dac5 && dac1!=dac3)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac3 && dac2==dac4 && dac1!=dac5 && dac2!=dac5 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac4 && dac2==dac3 && dac1!=dac5 && dac2!=dac5 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac2 && dac3==dac5 && dac1!=dac4 && dac3!=dac4 && dac1!=dac3)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac3 && dac2==dac5 && dac1!=dac4 && dac2!=dac4 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac5 && dac2==dac3 && dac1!=dac4 && dac2!=dac4 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac2 && dac4==dac5 && dac1!=dac3 && dac4!=dac3 && dac1!=dac4)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac4 && dac2==dac5 && dac1!=dac3 && dac2!=dac3 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac5 && dac2==dac4 && dac1!=dac3 && dac2!=dac3 && dac1!=dac2)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac3 && dac4==dac5 && dac1!=dac2 && dac4!=dac2 && dac1!=dac4)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac4 && dac3==dac5 && dac1!=dac2 && dac3!=dac2 && dac1!=dac3)
    {
      compc=5;
      despcomp2();
    }
  else if (dac1==dac5 && dac3==dac4 && dac1!=dac2 && dac3!=dac2 && dac1!=dac3)
    {
      compc=5;
      despcomp2();
    }
  else if (dac2==dac3 && dac4==dac5 && dac2!=dac1 && dac4!=dac1 && dac2!=dac4)
    {
      compc=5;
      despcomp2();
    }
  else if (dac2==dac4 && dac3==dac5 && dac2!=dac1 && dac3!=dac1 && dac2!=dac3)
    {
      compc=5;
      despcomp2();
    }
  else if (dac2==dac5 && dac3==dac4 && dac2!=dac1 && dac3!=dac1 && dac2!=dac3)
    {
      compc=5;
      despcomp2();
    }
/*dos pares*/

/*un par*/
  else if(dac1==dac2 && dac1!=dac3 && dac1!=dac4 && dac1!=dac5 && dac3!=dac4 && dac3!=dac5 && dac4!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac1==dac3 && dac1!=dac2 && dac1!=dac4 && dac1!=dac5 && dac2!=dac4 && dac2!=dac5 && dac4!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac1==dac4 && dac1!=dac2 && dac1!=dac3 && dac1!=dac5 && dac2!=dac3 && dac2!=dac5 && dac3!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac1==dac5 && dac1!=dac2 && dac1!=dac3 && dac1!=dac4 && dac2!=dac3 && dac2!=dac4 && dac3!=dac4)
    {
      compc=6;
      despcomp2();
    }
  else if(dac2==dac3 && dac1!=dac2 && dac2!=dac4 && dac2!=dac5 && dac1!=dac4 && dac1!=dac5 && dac4!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac2==dac4 && dac1!=dac2 && dac2!=dac3 && dac2!=dac5 && dac1!=dac3 && dac1!=dac5 && dac3!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac2==dac5 && dac1!=dac2 && dac2!=dac3 && dac2!=dac4 && dac1!=dac3 && dac1!=dac4 && dac3!=dac4)
    {
      compc=6;
      despcomp2();
    }
  else if(dac3==dac4 && dac1!=dac3 && dac2!=dac3 && dac3!=dac5 && dac1!=dac2 && dac1!=dac5 && dac2!=dac5)
    {
      compc=6;
      despcomp2();
    }
  else if(dac3==dac5 && dac1!=dac3 && dac2!=dac3 && dac3!=dac4 && dac1!=dac2 && dac1!=dac5 && dac2!=dac4)
    {
      compc=6;
      despcomp2();
    }
  else if(dac4==dac5 && dac1!=dac4 && dac2!=dac4 && dac3!=dac4 && dac1!=dac3 && dac1!=dac2 && dac2!=dac3)
    {
      compc=6;
      despcomp2();
    }
/*un par*/
 
/*Todos desiguales*/
  else if(dac1!=dac2 && dac1!=dac3 && dac1!=dac4 && dac1!=dac5 && dac2!=dac3 && dac2!=dac4 && dac2!=dac5 && dac3!=dac4 && dac3!=dac5 && dac4!=dac5)
    {
      compc=6;
      despcomp2();
    }
/*Todos desiguales*/
}
//putaje compu


//suma de puntaje jugador
int despcomp1()
{
  switch (comp)
    {
    case 1: /*5 iguales*/
	p1+=6;
      break;

    case 2:/*1 diferente*/
      p1+=5;
      break;

    case 3:/*dos iguales y tres iguales*/
      p1+=4;
      break;

    case 4:/*tres iguales*/
      p1+=3;
      break;

    case 5:/*dos pares*/
      p1+=2;
      break;

    case 6:/*un par*/
      p1+=1;
      break;

    default: /*todos diferentes*/
      break;
    }
}

//suma de puntaje compu
int despcomp2()
{
  switch (compc)
    {
    case 1: /*5 iguales*/
	p2+=6;
	turnocompu=5;
      break;

    case 2:/*1 diferente*/
      p2+=5;
      turnocompu=5;
      break;

    case 3:/*dos iguales y tres iguales*/
      p2+=4;
      turnocompu=5;
      break;

    case 4:/*tres iguales*/
      p2+=3;
      break;

    case 5:/*dos pares*/
      p2+=2;
      turnocompu=5;
      break;

    case 6://un par
      p2+=1;
      break;
      
    default: /*todos diferentes*/
      break;
    }
}

//Resultado
int puntaje()
{
  if(p1>p2)
    {
      printf("GANASTE!!\n");
    }
  else if (p1<p2)
    {
      printf("PERDISTE\n");
    }
  else if (p1==p2)
    {
      printf("EMPATE\n");
    }
  printf("\nJugador 1: %d puntos |  Jugador 2: %d puntos\n",p1,p2);
}

//Dado random
char dado()
{
  srand(time(0));
  int dado=rand() %6+1;
  int equi;
  switch(dado)
    {
    case 1:
      equi='9';
      break;
    case 2:
      equi='0';
      break;
    case 3:
      equi='J';
      break;
    case 4:
      equi='Q';
      break;
    case 5:
      equi='R';
      break;
    case 6:
      equi='A';
      break;
    }
  return equi;
}

//ciclo jugador
int ciclo1()
{
  if(x1==1)
    {
      da1=dado();
      usleep(500000);
    }
  else if(x1==0)
    {
      da1=da1;
    }
  
  if(x2==1)
    {
      da2=dado();
      usleep(500000);
    }
  else if(x2==0)
    {
      da2=da2;
    }

  if(x3==1)
    {
      da3=dado();
      usleep(500000);
    }
  else if(x3==0)
    {
      da3=da3;
    }

  if(x4==1)
    {
      da4=dado();
      usleep(500000);
    }
  else if(x4==0)
    {
      da4=da4;
    }
  
  if(x5==1)
    {
      da5=dado();
      usleep(500000);
    }
  else if(x5==0)
    {
      da5=da5;
    }
}

void print1()
{
  printf("|N°Dado| Jugador 1 |\n");
      printf("|   %d  |    %c      |\n",1,da1);
      printf("|   %d  |    %c      |\n",2,da2);
      printf("|   %d  |    %c      |\n",3,da3);
      printf("|   %d  |    %c      |\n",4,da4);
      printf("|   %d  |    %c      |\n",5,da5);   
}

//ciclo compu
int ciclo2()
{

  printf("|N°Dado| Jugador 2 |\n");

    
  for(int i=1;i<=5;i++)
    {
      switch(i)
	{
	case 1:
	  dac1=dado();
	  usleep(500000);
	  break;
	case 2:
	  dac2=dado();
	  usleep(500000);
	  break;
	case 3:
	  dac3=dado();
	  usleep(500000);
	  break;
	case 4:
	  dac4=dado();
	  usleep(500000);
	  break;
	case 5:
	  dac5=dado();
	  usleep(500000);
	  break;
	default:
	  break;
	}
    }
      printf("|   %d  |    %c      |\n",1,dac1);
      printf("|   %d  |    %c      |\n",2,dac2);
      printf("|   %d  |    %c      |\n",3,dac3);
      printf("|   %d  |    %c      |\n",4,dac4);
      printf("|   %d  |    %c      |\n",5,dac5);   

      comparacion2();
}



	
  

  


 
      
      
  
