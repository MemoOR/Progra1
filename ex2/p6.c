//Guillermo Ortega Romo 25/10/17

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void letras();
void arreglo();
void orden();
void orden2(int *a, int *b);

char l1,l2,l3,l4,l5;
char letra[5];

int main()
{
  letras();
  return 0;
}

void letras()
{
  
  printf("Ingresa la primera letra: ");
  scanf(" %c", &l1);
  
   printf("Ingresa la segunda letra: ");
  scanf(" %c", &l2);
  
   printf("Ingresa la tercera letra: ");
  scanf(" %c", &l3);
  
   printf("Ingresa la cuarta letra: ");
  scanf(" %c", &l4);
  
   printf("Ingresa la quinta letra: ");
  scanf(" %c", &l5);

  arreglo();
  
}
  
void arreglo()
{
  
  letra[0]=l1;
  letra[1]=l2;
  letra[2]=l3;
  letra[3]=l4;
  letra[4]=l5;

  orden();
}

void orden()
{
  int cambio;
  

  while(cambio == 1)
    {
      cambio == 0;

	for(int i=1;i<=5;i++)
	  {
	    if(letra[i]<letra[i-1])
	      {
		orden2(&letra[i], &letra[i-1]);
		cambio=1;
	      }
	  }
    }

  for (int j=1;j<=5;j++)
    {
  printf("%c ", l[j]);
    }
}

void orden2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


	    
        
	      
 


  
