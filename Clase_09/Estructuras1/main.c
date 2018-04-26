#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//usamos estructuras para dejar de usar es paralelos ya que en casos se hace muy denso el codigo.

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
}eAlumno;//prefijo e para indicar que es estructura.(eAlumno es el alias de la estructura.

//void mostrarAlumno(int legajo, char nombre[], float promedio);

void mostrarUnAlumno(eAlumno unAlumno);//a la funcion le paso la estructura de alumno

int main()
{
    eAlumno miAlumno;//={1, "Juan", 3.25};//eAlumno tipo, miAlumno variable. se pueden cargar por extensioncon ={};
    eAlumno otroAlumno;//el punto es el operador de acceso a otro campo

    otroAlumno.legajo = 2;
    strcpy(otroAlumno.nombre, "Maria");//con string copy le paso el nombre.
    otroAlumno.promedio = 6;

    //printf("%d -- %s -- %f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);
    //printf("%d -- %s -- %f\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.promedio);

    mostrarUnAlumno(miAlumno);
    mostrarUnAlumno(otroAlumno);

    //una de las propiedades que tiene una estructura y se pueden pasar de una a otra.
    //miAlumno = otroAlumno;//en este caso le paso otro alumno a mialumno
    return 0;
}


//funcion para mostrar un alumno.
void mostrarUnAlumno(eAlumno unAlumno)//las estructuras osn tipos de datos por valor.
{
    printf("%d -- %s -- %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}
