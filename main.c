https://github.com/OSCARGAEL/practica8#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

int main ()
{
FILE * fp;
fp = fopen ("registros.dat", "ab");
 
if (fp == NULL)
    {
printf ("Error al abrir el archivo.");
exit (1);
    }
  
capturarDatosDeAlumnos (fp);

fclose (fp);
fp = fopen ("registros.dat", "rb");
  
if (fp == NULL)
    {
printf ("Error al abrir el archivo.");
exit (1);
    }
 
desplegarDatosDeAlumnos (fp);

fclose (fp);
  
return 0;
}
