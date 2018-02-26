//Guillermo Ortega Romo 06/11/17

#include<stdio.h>

int main()
{
  FILE *fp;
  long int longitud;

  fp = fopen("archivo.txt","wt");

  fputs("Fundamentos de comunicación y diseño ",fp);

  fseek(fp,0,SEEK_END);
  longitud=ftell(fp);
  printf("la longitud del archivo es %ld\n",longitud);

  fseek(fp,11,SEEK_SET);
  fputs(" de Programación y Laboratorio",fp);

  fseek(fp,0,SEEK_END);
  longitud=ftell(fp);
  printf("la longitud del archivo es %ld\n",longitud);

  fclose(fp);

  return 0;
}
