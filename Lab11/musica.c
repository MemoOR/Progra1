//Guillermo Ortega Romo 21/11/17
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cancion{
  char nombre[80];
  char artista[80];
  char genero[80];
  int min;
  int seg;
  int ncan;
};

void agregar();
void enlistar();
void eliminar();
void duracion();
void promedio();
void larga();

int numc;
int dur_total;
FILE *archivo;
struct cancion cancion[20];

int main()
{
  archivo=fopen("musica.txt","rb");

  if(archivo==NULL){
    archivo=fopen("musica.txt","wb");
    printf("\nCreando biblioteca\n\n");
    cancion[1].ncan=0;
  }
  else{
    fread(cancion,sizeof(cancion),1,archivo);
    printf("\tBIENVENIDO\n\n");
    printf("\n%d canciones guardadas\n\n",cancion[1].ncan);
  }

  fclose(archivo);
  
    int opcion;
  do{
  printf("¿Qué quieres hacer?\n");
  printf("1) Agregar canción\n");
  printf("2) Enlistar todas las canciones de la biblioteca\n");
  printf("3) Eliminar una canción\n");
  printf("4) Duración total de la biblioteca\n");
  printf("5) Promedio de duración de todas las canciones\n");
  printf("6) Canción mas larga\n");
  printf("Pulsa cualquier otro número para salir\n\n");

  scanf("%d",&opcion);
  getchar();
  
  switch(opcion){
  case 1: agregar(); break;
  case 2: enlistar(); break;
  case 3: eliminar(); break;
  case 4: duracion(); break;
  case 5: promedio(); break;
  case 6: larga(); break;
  default: break;
  }

  }while(opcion>0 && opcion<7);
 
  return 0;
}

void agregar()
{
  if(cancion[1].ncan>19){
    printf("Ya no puedes agregar mas canciones\n\n");
    return;
  }
  else{

        
    printf("Nombre de la canción: ");
    gets(cancion[cancion[1].ncan].nombre);

    printf("Artista: ");
    gets(cancion[cancion[1].ncan].artista);

    printf("Género: ");
    gets(cancion[cancion[1].ncan].genero);

    printf("Duración [m:s]: ");
    scanf("%d:%d",&cancion[cancion[1].ncan].min,&cancion[cancion[1].ncan].seg);
    getchar();

    cancion[1].ncan++;

    archivo=fopen("musica.txt","wb");
    fwrite(cancion,sizeof(cancion),1,archivo);
    fclose(archivo);
  }
}

void enlistar()
{
  
  int duracion;
  if(cancion[1].ncan==0){
    printf("\nNo se encontraron canciones\n\n");
  }
  else{
  
  for (int i=0; i<cancion[1].ncan; i++){

    duracion = (cancion[i].min*60) + cancion[i].seg;

    printf("\nCanción: %s\n",cancion[i].nombre);
    printf("Artista: %s\n",cancion[i].artista);
    printf("Género: %s\n",cancion[i].genero);
    printf("Duración: %d:%.2d\n\n",duracion / 60, duracion % 60);
  }

  }
}

void eliminar()
{
  int eliminar;
    printf("¿Qué canción quieres eliminar?\n");
    scanf("%d",&eliminar);

  if(eliminar>cancion[1].ncan){
    printf("No existe esa canción\n");
    return;
  }
  else{

  for(int i=eliminar;i<cancion[1].ncan;i++){
    cancion[eliminar]=cancion[eliminar+1];
  }
  
  cancion[1].ncan--;
  
  archivo=fopen("musica.txt","wb");
  fwrite(cancion,sizeof(cancion),1,archivo);
  fclose(archivo);
  }
}

void duracion()
{
  int duracion[20];

  dur_total=0;
  
  for(int i=0;i<cancion[1].ncan;i++){
    duracion[i] = 0;
      }
  for(int i=0;i<cancion[1].ncan;i++){
    duracion[i] = (cancion[i].min*60) + cancion[i].seg;

    dur_total+=duracion[i];
  }

  printf("Duración total: %d:%.2d\n\n",dur_total / 60, dur_total % 60);
}

void promedio()
{
  int promedio;

  promedio=dur_total/cancion[1].ncan;

  printf("Promedio de duración de la biblioteca: %d:%.2d\n\n",promedio / 60, promedio % 60);
}
 
void larga()
{ 
  struct cancion larga;

  int duracion[20];
  
  for(int i=0;i<cancion[1].ncan;i++){
    
    duracion[i] = (cancion[i].min*60) + cancion[i].seg;

    if(duracion[i]>duracion[i-1]){

      larga=cancion[i];
    }
  }

  printf("\nLa canción mas larga es: %s\n\n",larga.nombre);

}
