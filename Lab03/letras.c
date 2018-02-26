/*Guillermo Ortega Romo 11/09/17*/

#include <stdio.h>

void letra(void);
int main ()
{
  letra();
  return 0;
}
void letra(void)
{

  int ee=0;
  int nol=0;
 char letra;
 char alfabeto[] = {'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z'};
 char lt[] = {164,165};
  printf("Escribe una letra \n");
  scanf("%c", &letra);
  
  if( (letra == 'a' ) || (letra == 'e') || (letra=='i') || (letra=='o') || (letra=='u') || (letra =='A' ) || (letra == 'E') || (letra=='I') || (letra=='O') || (letra=='U') )
    {
      printf("Es vocal\n");
    }
  else
    {
      for (int i=0;i<52;i++)
	{
	  if(letra==alfabeto[i])
	    {
	      nol=1;
		}
	}
      if(nol==1)
	{
	  printf("Es consonante\n");
	}
      if(nol==0)
	{
	  printf("Eso no es una letra\n");
	}
    }
}




	
    

	
	




 
