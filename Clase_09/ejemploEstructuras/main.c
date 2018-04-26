#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char calle[50];
    int numero;
    char localidad[50];
    int piso;
    char dpto;
    int cp;

}eDomicilio;

typedef struct//definimos nuestra estructura de esta manera.
{
    int legajo;
    char nombre[50];

    eDomicilio domicilio;//esto se llama compisicion estoy componiendo un dato apartir de otro o otros.

}eAlumno;

/*
typedef struct
{
    int legajo;

    eDomicilio domicilio

}eProfesor
*/

int main()
{
    eAlumno miAlumno;//si miAlumno es array puedo tener varios miAlumno cargados.

    miAlumno.legajo= 400;
    miAlumno.domicilio.cp=1870;

    printf("Legajo : %d -- cp: %d",miAlumno.legajo,miAlumno.domicilio.cp);

    return 0;
}
