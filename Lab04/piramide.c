/*Guillermo Ortega Romo 18/09/17*/

#include <stdio.h>

void piramide(void);
int main ()
{
  piramide();
  return 0;
}
void piramide(void)
{
  char letra;

  printf("Escribe una letra mayúscula\n");/*se pide la letra*/
  scanf("%c", &letra);
  
  int fil, col, mfil; /*variables para las filas, columnas y el maximo de filas que puede haber*/
  
  mfil = ((letra - 'A')*2)+1;/*valor de la fila maxima*/
  
  int w = (letra - 'A');/*valor de los espacios en blanco que se deben dejar*/
  
  int a, b;
  
  int s = 65;/*valor donde inicia*/
  int st = -1;/*valor para imprimir las letras en retroceso*/

  b = 0;/*condicional para declarar que al cambiar su valor a 1 imprima en pantalla*/
  if ((letra<65)||(letra>90))
    {
      printf("Solo letras mayúsculas\n");
    }
  else
    {
  for (fil=0;fil<mfil;fil++)/*contador para indicar filas*/
    {
      for(col=0;col<(mfil-w);col++)/*contador para indicar columnas*/
	{
	  if (w>col)/*condicional para indicar que cuando los espacios en blanco sean mayores que la columna se imprima un espacio en blanco*/ 
	  
	    printf(" ");/*impresión de espacio en blanco*/
	  
	  else
	    {
	      a = (b) ? a + 1: s-(col-w);/*condicional para imprimir las letras de forma ascendente y descendente*/
	      
	      if (a=='A')/*condicional para separar la parte ascendente y descendente del renglón*/
		b=1;

	      printf("%c", a);/*impresión de la letra*/
	    }
	}
      printf("\n");/*impresión del salto de lína*/

      w += st;/*valores para indicar cuando hacer salto de línea con el condicional*/
      s -= st;

      if (w==0)/*cuando los espacios en blanco sean 0 entonces hacer salto de línea*/
	{
	  st = -st;
	}
      b= 0;
    }
    }
}




		  





