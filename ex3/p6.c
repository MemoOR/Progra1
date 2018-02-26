//Guillermo Ortega Romo 29/11/17

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXPERSONAS 10//maximo de personas adimitidas

void orden();//bubblesort

struct{//estructura para cada persona
  char nombre[80];
  char apellido[80];
  int numpersonas;
}persona[MAXPERSONAS];

int main()
{
  char nombres[80] = "personas.txt";//nombre del archivo
  
  FILE *archivo;

  archivo=fopen(nombres,"rt");//se abre el archivo en modo lectura de texto

  if(archivo==NULL){//si no existe el archivo se crea uno
    archivo=fopen(nombres,"wt");
    persona[1].numpersonas=0;
    printf("\nCreando una base de datos\n\n");
  }
  else{
    fread(persona,sizeof(persona),1,archivo);//si existe el archivo se leen los datos
    printf("\n%d personas guardadas\n\n",persona[1].numpersonas);

    orden();
    
    for(int i=0;i<persona[1].numpersonas;i++){
      printf("Persona %d: %s %s\n",i+1,persona[i].apellido,persona[i].nombre);
    }
  }

  fclose(archivo);

  if(persona[1].numpersonas>=MAXPERSONAS){
    printf("No se pueden agregar mas nombres\n\n");
    return 0;
  }
  else{

    do{//se piden los nombres y apellidos hasta que el nombre ingresado sea fin
      
      printf("Ingresa el nombre: ");
      gets(persona[persona[1].numpersonas].nombre);
     

      if(strcmp(persona[persona[1].numpersonas].nombre,"fin")!=0){
      printf("Ingresa el apellido: ");
      gets(persona[persona[1].numpersonas].apellido);

      persona[1].numpersonas++;
      }
  
  }while(strcmp(persona[persona[1].numpersonas].nombre,"fin")!=0);

    strcpy(persona[persona[1].numpersonas].nombre,"");
    
    archivo=fopen(nombres,"wt");//guarda los nombres en el archivo
    fwrite(persona,sizeof(persona),1,archivo);
    fclose(archivo);
  }

  return 0;
}

void orden(){

  char tmp[80];//temporal para apellidos
  char ntmp[80];//temporal para nombres

  for(int i=0;i<persona[1].numpersonas;i++){
    for(int i=0;i<persona[1].numpersonas;i++){

      if(persona[i].apellido[0]>persona[i+1].apellido[0]){
	
	strcpy(tmp,persona[i+1].apellido);
	strcpy(ntmp,persona[i+1].nombre);
	
	strcpy(persona[i+1].apellido,persona[i].apellido);
	strcpy(persona[i+1].nombre,persona[i].nombre);

	strcpy(persona[i].apellido,tmp);
	strcpy(persona[i].nombre,ntmp);
      }
    }
  }

  for(int i=0;i<=persona[1].numpersonas;i++){//elimina fin
    strcpy(persona[i].nombre,persona[i+1].nombre);
    strcpy(persona[i].apellido,persona[i+1].apellido);
  }
}

