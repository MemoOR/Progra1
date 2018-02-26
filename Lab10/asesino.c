//Guillermo Ortega Romo 8/11/17

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int lar,an,pal,cuadro,x,y,pos=0;
   
  do{
  printf("Ingresa el largo de la habitación: ");
  scanf("%d",&lar);
  }while(lar<=0);

  do{
    printf("\nIngresa el ancho de la habitación: ");
    scanf("%d",&an);
  }while(an<=0 || an>100);

  cuadro=lar*an;
  int cuarto[an][lar];

  for(int i=0;i<an;i++)
    {for(int j=0;j<lar;j++)
	{cuarto[i][j]=0;
	}
    }
  
  do{
    printf("\nIngresa en cuantas posiciones puede estar el alacrán: " );
    scanf("%d",&pal);
  }while(pal<0 || pal>5000 || pal>cuadro);

  if(pal==0)
    printf("Las posiciones para dormir son: %d\n",cuadro);
  else{
    
  for(int i=1;i<=pal;i++)
    {
      do{
      printf("Ingresa la posición %4d en x del alacrán: ",i);
      scanf("%d",&x);
      }while(x>an || x<=0);

      do{
      printf("Ingresa la posición %4d en y del alacrán: ",i);
      scanf("%d",&y);
      }while(y>lar || y<=0);

      x--,y--;
      
      cuarto[y][x]=1;
    }
  }

  for (int y = an - 1; y >= 0; y--) {
    for (int x = 0; x < lar; x++) {
      if (cuarto[y][x] != 1) {
	if (y > 0 && x > 0) {
	  if (cuarto[y - 1][x - 1] != 1 && cuarto[y - 1][x] != 1 && cuarto[y][x - 1] != 1) {
	    pos++;
	  }
	}
      }
    }
  }
    printf("Las posiciones de la camma pueden ser: %d\n\n",pos);
}
  
