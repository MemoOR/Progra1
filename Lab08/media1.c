//GUillermo Ortega Romo 23/10/17

#include<stdio.h>
#include<string.h>

void media(void);

int main()
{
  media();
  return 0;
}

void media (void)
{
  
  int a[3], x=0, suma=0, prom;
 
for(x=0;x<4;x++)
  {
    printf("numero %d:",x);
    scanf("%d",&a[x]);
    suma = suma + a[x];
  }
 
 prom = suma/4;
printf("promedio : %d\n",prom);
}
