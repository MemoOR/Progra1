#include <stdio.h>
#include <string.h>
int main()
{
  struct //estructura para guardar los datos de cada persona
   {
     char nombre [81];//81 es el valor maximo de caracteres del nombre
     char apellido[81];//81 es el valor maximo de caracteres en el apellido
     char direccion [81];//81 caracteres para ingesar la direccion
     char tlfMovil[13];//13 caracteres para ingresar el celular
     char email[51];//51 caracteres para el correo electrónico
     int diaNac, mesNac, anyoNac;//fecha de nacimiento
  } ficha [100];//el valor de 100 indica el máximo de personas que puedes almacenar

  FILE* archivo;//se declara una variable archivo para evitar escribir la direccion completa del archivo original
  int ultimaFicha = -1;//variable ultima ficha para indicar que persona se esta ingresando 
  char linea[200];//variable para una cadena
   int opcion;//opcion del menu principal
   int i;//variable para un ciclo
   archivo = fopen("agenda.txt", "rt");//se abre el archivo agenda.txt en formato de lectura de texto
   if (archivo != NULL)//en caso de que el archivo ya exista
     {
       puts("Leyendo datos...");//imprime en pantalla 
       while (! feof(archivo))//mientras que no detecte el final del archivo se seguirá ejecutando
	 {

	   fgets(linea, 80, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora 
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   if (strlen(linea) > 0)//si la longitud de linea es mayor a 0 
	     linea[strlen(linea) -1] ='\0';//en linea-1 pone un final en la cadena
	   strcpy(ficha[ultimaFicha+1].nombre, linea);//guarda el nombre

	   fgets(linea, 80, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   if (strlen(linea) > 0)
	     linea[strlen(linea) -1] ='\0';//en linea-1 pone un final en la cadena
	   strcpy(ficha[ultimaFicha+1].apellido, linea);//guarda el apellido

	   fgets(linea, 80, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   if (strlen(linea) > 0)
	     linea[strlen(linea) -1] ='\0';//en linea-1 pone un final en la cadena
	   strcpy(ficha[ultimaFicha+1].direccion, linea);//guarda la dirección

	   fgets(linea, 12, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   if (strlen(linea) > 0)
	     linea[strlen(linea) -1] ='\0';//en linea-1 pone un final en la cadena
	   strcpy(ficha[ultimaFicha+1].tlfMovil, linea);//guarda el celular

	   fgets(linea, 50, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   if (strlen(linea) > 0)
	     linea[strlen(linea) -1] ='\0';//en linea-1 pone un final en la cadena
	   strcpy(ficha[ultimaFicha+1].email, linea);//guarda el correo electrónico

	   fgets(linea, 20, archivo);//funcion fgets que permite declarar el valor maximo de caracteres que leera la computadora
	   puts(linea);
	   if (feof(archivo)) break;//si se lee el fin del archivo salir
	   sscanf(linea, "%d %d %d", &ficha[ultimaFicha+1].diaNac,//guarda el día de nacimiento
		  &ficha[ultimaFicha+1].mesNac,//guarda el mes de nacimiento
		  &ficha[ultimaFicha+1].anyoNac);//guarda el año de nacimiento


	   ultimaFicha ++;//el valor de la variable aumenta en 1
	 }
       fclose(archivo);//cierra el archivo
     }

   printf("Leidos %d datos", ultimaFicha+1);//imprime cuantos datos se guardaron en la sesion



   do//ciclo do while para repetir la accion mientras 
      {

	puts("\n\n Agenda, version 0.01\n");//imprime el menu principal
	puts("Elija una opcion");
	puts("1.- Nuevo dato");
	puts("2.- Ver datos existentes");
	puts("3.- Ver detalles de una persona");
	puts("0.- Terminar");

	scanf("%d", &opcion);//lee la opcion ingresada por el usuario
	getchar();

	switch (opcion)//condicional para la variable opcion
	  {

	  case 1:// si es opcion 1 te deja añadir una persona
	    puts ("Añadiendo datos...");
	    printf ("Introduce nombre: ");
	    gets (ficha[ultimaFicha+1].nombre);
	    printf ("Introduce apellido: ");
	    gets (ficha[ultimaFicha+1].apellido);
	    //ingresa todos los datos de la persona
	    printf ("Introduce direccion: ");
	    gets (ficha[ultimaFicha+1].direccion);

	    printf ("Introduce movil: ");
	    gets (ficha[ultimaFicha+1].tlfMovil);

	    printf ("Introduce correo electronico: ");
	    gets (ficha[ultimaFicha+1].email);

	    printf ("Introduce dia de nacimiento: ");
	    gets (linea);

	    sscanf (linea, "%d", &ficha[ultimaFicha+1].diaNac);

	    printf ("Introduce mes de nacimiento: ");
	    gets (linea);
	    sscanf (linea, "%d", &ficha[ultimaFicha+1].mesNac);

	    printf ("Introduce año de nacimiento: ");
	    gets (linea);
	    sscanf (linea, "%d", &ficha[ultimaFicha+1].anyoNac);

	    ultimaFicha ++;//la variable ultimaficha aumenta un numero
	    break;


	  case 2://si la opcion es dos imprime todos los nombres guardados
	    puts ("Fichas existentes:");
	    for (i=0; i<=ultimaFicha; i++)//ciclo para imprimir los nombres
	      puts (ficha[i].nombre);
	    break;


	  case 3://opcion para buscar una persona por su nombre
	    printf ("Nombre a buscar? ");
	    gets (linea);//obtiene el nombre de la persona

	    for (i=0; i<=ultimaFicha; i++)//ciclo para comparar el nombre buscado con los que estan guardados
				   if (strcmp (linea, ficha[i].nombre) == 0)//si los nombres son iguales imprime los datos
		{
		  puts (ficha[i].nombre);
		  puts (ficha[i].apellido);
		  puts (ficha[i].direccion);
		  puts (ficha[i].tlfMovil);
		  puts (ficha[i].email);
		  printf("%d %d %d\n", ficha[i].diaNac,
	     	 ficha[i].mesNac, ficha[i].anyoNac);
		}
	    break;


	  }

		   } while (opcion != 0);//si la opcion es 0 terminar el ciclo




	    archivo = fopen("agenda.txt", "wt");//abrir el archivo en formato de escribir texto
	    puts("Guardando datos...");//imprimir texto en pantalla

    for (i=0; i<=ultimaFicha; i++)//imprime los datos ingresados en el archivo
      {
	fprintf (archivo, "%s\n", ficha[i].nombre);
	fprintf (archivo, "%s\n", ficha[i].apellido);
	fprintf (archivo, "%s\n", ficha[i].direccion);
	fprintf (archivo, "%s\n", ficha[i].tlfMovil);
	fprintf (archivo, "%s\n", ficha[i].email);
	fprintf (archivo, "%d %d %d\n",
		 ficha[i].diaNac, ficha[i].mesNac, ficha[i].anyoNac);
      }
    fclose(archivo);//cierra el archivo

    printf("Terminado.");

    return 0;//si funciono correctamente regresa el valor 0 
}
