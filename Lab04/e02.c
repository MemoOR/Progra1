/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void numeros(void);
int main ()
{
  numeros();
  return 0;
}
void numeros(void)
{
  int num1;
  int num2;
  int num3;

  printf("Escribe el primer número\n");
  scanf("%d",&num1);
  printf("Escribe el segundo número\n");
  scanf("%d",&num2);
  printf("Escribe el tercer número\n");
  scanf("%d",&num3);

  if ((num1>num2)&&(num1>num3)&&(num2>num3))
    {
      printf("\n%d\n%d\n%d\n",num1,num2,num3);
    }
  else if ((num1>num2)&&(num1>num3)&&(num3>num2))
    {
      printf("\n%d\n%d\n%d\n",num1,num3,num2);
    }

   
  else if ((num2>num1)&&(num2>num3)&&(num1>num3))
    {
      printf("\n%d\n%d\n%d\n",num2,num1,num3);
    }
  else if ((num2>num1)&&(num2>num3)&&(num3>num1))
    {
      printf("\n%d\n%d\n%d\n",num2,num3,num1);
    }

    
  else  if ((num3>num1)&&(num3>num2)&&(num2>num1))
    {
      printf("\n%d\n%d\n%d\n",num3,num2,num1);
    }
  else  if ((num3>num1)&&(num3>num2)&&(num1>num2))
    {
      printf("\n%d\n%d\n%d\n",num3,num1,num2);
    }
  /*si son iguales*/
  
   else  if ((num1>num2)&&(num2==num3))
    {
      printf("\n%d\n %d, %d\n",num1,num2,num3);
    }
    else  if ((num1<num2)&&(num2==num3))
    {
      printf("\n%d, %d\n%d\n",num3,num2,num1);
    }


    else  if ((num2>num1)&&(num1==num3))
    {
      printf("\n%d\n%d, %d\n",num2,num1,num3);
    }
    else  if ((num2<num1)&&(num1==num3))
    {
      printf("\n%d, %d\n%d\n",num1,num2,num3);
    }

  
    else  if ((num3>num2)&&(num2==num1))
    {
      printf("\n%d\n%d, %d\n",num3,num2,num1);
    }
    else  if ((num3<num2)&&(num2==num1))
    {
      printf("\n%d, %d\n%d\n",num3,num2,num1);
    }

  
    else  if ((num1==num2)&&(num2==num3))
    {
      printf("\n%d, %d, %d\n",num1,num2,num3);
    }
}

  
    
