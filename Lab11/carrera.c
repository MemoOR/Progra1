//Guillermo Ortega Romo 13/11/17

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int pista[2][70];


void valores()
{
  for(int i=1;i<=70;i++){
    pista[0][i]=95;
  }
  for(int i=1;i<=70;i++){
    pista[1][i]=i;
  }
}

void carrera();

int main()
{
  srand(time(0));
  valores();

  int T=1,L=1;

  pista[0][1]='B';
  pista[0][2]='A';
  pista[0][3]='N';
  pista[0][4]='G';
  pista[0][5]='!';
  pista[0][6]='!';
  pista[0][7]='!';

   for(int j=1;j<=70;j++){
	printf(" %c%s",pista[0][j],(j==70)?"\n":"");
    }
    for(int j=1;j<=70;j++){
	printf("%2d%s",pista[1][j],(j==70)?"\n":"");
    }
    
    usleep(1000000);
    system("clear");
    
  while(T<70 || L<70){
    
    carrera(&T,&L);
    
    if(T!=L){
     pista[0][T]='T';
     pista[0][L]='L';
    }
     else if(T==L){
      pista[0][T]='O';
      pista[0][T+1]='U';
      pista[0][T+2]='C';
      pista[0][T+3]='H';
      pista[0][T+4]='!';
      pista[0][T+5]='!';
      pista[0][T+6]='!';
     }
 
      
    for(int j=1;j<=70;j++){
	printf(" %c%s",pista[0][j],(j==70)?"\n":"");
    }
    for(int j=1;j<=70;j++){
	printf("%2d%s",pista[1][j],(j==70)?"\n":"");
    }


    if(T>=70){
      printf("GANÓ LA TORTUGA\n\n");
      return 0;
    }
    if(L>=70){
      printf("GANÓ LA LIEBRE\n\n");
      return 0;
    }
    
    usleep(1000000);
    system("clear");
  }
  return 0; 
}


void carrera(int *T,int*L)
{
  int pt,pl;
  
  for(int i=1;i<=70;i++){
    pista[0][i]=95;
  }

  do{
    pt=rand()%100+1;
    pl=rand()%100+1;

    if(pt>=1 && pt<=50){
      *T+=3;}
    else if(pt>50 && pt<=70){
      *T-=6;}
    else if(pt>70 && pt<=100){
      *T+=1;}
  }while(*T<1);


  do{
     pt=rand()%100+1;
     pl=rand()%100+1;
     
     if(pl>=1 && pl<=20){
      *L=*L;}
    else if(pl>20 && pl<=40){
      *L+=9;}
    else if(pl>40 && pl<=50){
      *L-=12;}
    else if(pl>50 && pl<=80){
      *L+=1;}
    else if(pl>80 && pl<=100){
      *L-=2;
    }   
  }while(*L<1);
}

    
