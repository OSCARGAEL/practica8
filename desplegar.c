#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

void desplegarDatosDeAlumnos (FILE * fp)
{
  
struct alumno alumnos;
  
while (fread (&alumnos, sizeof (struct alumno), 1, fp) == 1)
    {
      
printf ("Matricula: %d\n", alumnos.matricula);
      
printf ("Nombre: %s", alumnos.nombre);
      
printf ("Direccion: %s\n", alumnos.direccion);

} 
} 
