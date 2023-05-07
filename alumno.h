#include <stdio.h>
#define MAX 255
struct alumno
{
  
int matricula;
char nombre[MAX];
char direccion[MAX];
 
};

 
void capturarDatosDeAlumnos (FILE * fp);
void desplegarDatosDeAlumnos (FILE * fp);

