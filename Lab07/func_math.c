//Guillermo Ortega Romo 16/10/17

#include<stdio.h>
#include<math.h>

double raiz(float num, int ind);
double ec2();
double sen();
double rad();

int main()
{
  int opcion;

  printf("Escoge una opcion\n1)Raíz cuadrada de un número\n2)Ecuación ax² + bx + c = 0\n3)seno de ángulos principales\n");
  scanf("%d", &opcion);

  if (opcion<1 || opcion>3)
    {
      printf("Esa no es una opción");
      return 1;
    }
  else if (opcion==1)
    {
       double num;
       double ind;
  
       printf("Introduce el número del que quieres saber la raíz\n");
       scanf("%lf", &num);

       printf("Introduce el índice de la raíz\n");
       scanf("%lf", &ind);

       printf("El resultado es: %.3lf\n", raiz (num,ind));
	 
      return 0;  
    }
  
  else if (opcion==2)
    {
      ec2();
      return 0;
    }
  else if (opcion==3)
    {
      sen();
      return 0;
    }
}


double raiz(float num, int ind)
{
  double exp=(1./ind);
  double rest;

  rest = pow(num,exp);
  
  return rest;
}

double ec2()
{

  double a, b, c, disc;
  double r1,r2;
  
  printf("Escribe el valor de a: ");
  scanf("%lf",&a);
  printf("\nEscribe el valor de b: ");
  scanf("%lf",&b);
  printf("\nEscribe el valor de c: ");
  scanf("%lf",&c);

  disc=pow(b,2.0)-4*a*c;
 
  if(disc>0)
    {
      printf("Las dos raíces son reales\n");
      r1=((-b+sqrt(disc))/(2.0*a));
      r2=((-b-sqrt(disc))/(2.0*a));
      printf("x1=%.2lf   x2=%.2lf\n",r1,r2);
    }
  else if(disc==0)
    {
      r1=(-b)/(2.0*a);
      printf("La ecuación solo tiene una raíz: %.2lf\n",r1);
    }
  else
    {
      r1=(-b/(2.0*a));
      r2=(sqrt(-disc)/(2.0*a));
      printf("La raíz real es: %.2lf\n",r1);
      printf("La raíz imaginaria es: %.2lfi\n",r2);
    }
}


double radgrad(double grad)
{
  return (grad*(3.1416/180));
}

double sen()
{

  printf("|Grados|Seno|\n");
  printf("|  %d  |%.2f|\n",30,sin(radgrad(30)));
  printf("|  %d  |%.2f|\n",45,sin(radgrad(45)));
  printf("|  %d  |%.2f|\n",60,sin(radgrad(60)));
  printf("|  %d  |%.2f|\n",90,sin(radgrad(90)));
}
  
	
      
