#include <stdio.h>

int main(int argc,char *argv[]){

  int i=0;

  printf("\nmi_programa argc es = %d",argc);

  //El primer argumento es el nombre del ejecutable
  printf("\nexe name=%s",argv[0]);

  for(i=1;i<argc;i++){
    printf("\narg%d=%s",i,argv[i]);
  }

  printf("\n");
  return 0;
}
