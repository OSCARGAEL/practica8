#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define MAX 255
void capturarDatosDeAlumnos (FILE * fp)
{
  
struct alumno alumnos;
char matricula[MAX];

while (1)
    {
      
printf("Ingrese la matricula del alumno (dejar en blanco para terminar): ");
fgets (matricula, MAX, stdin);
      
if (matricula[0] == '\n')
	{
	  
break;
	
    }
      
alumnos.matricula = atoi (matricula);
      
 
printf ("Ingrese el nombre del alumno: ");
      
fgets (alumnos.nombre, MAX, stdin);
      
 
printf ("Ingrese la direccion del alumno: ");
      
fgets (alumnos.direccion, MAX, stdin);
      
 
fwrite (&alumnos, sizeof (struct alumno), 1, fp);

    } 
} 
