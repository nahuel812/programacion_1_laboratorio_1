#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
//usamos estructuras para dejar de usar es paralelos ya que en casos se hace muy denso el codigo.

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
}eAlumno;//prefijo e para indicar que es estructura.(eAlumno es el alias de la estructura.

//void mostrarAlumno(int legajo, char nombre[], float promedio);

void mostrarUnAlumno(eAlumno unAlumno);//a la funcion le paso la estructura de alumno
void mostrarAlumnos(eAlumno clase[]);

int main()
{
    eAlumno clase[T];//={1, "Juan", 3.25};//eAlumno tipo, miAlumno variable. se pueden cargar por extensioncon ={};
    eAlumno miAlumno;//el punto es el operador de acceso a otro campo
    int i;

    for(i=0;i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&clase[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(clase[i].nombre);

        printf("Ingrese promedio: ");
        scanf("%f", &clase[i].promedio);
    }

    /*
    for(i=0;i<T; i++)
    {
        mostrarUnAlumno(clase[i]);

    }
    */

    mostrarAlumnos(clase[]);


    return 0;
}


//funcion para mostrar un alumno.
void mostrarUnAlumno(eAlumno unAlumno)//las estructuras osn tipos de datos por valor.
{
    printf("%d -- %s -- %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}

//funcion que muestre alumno pasandole el array
void mostrarAlumnos(eAlmuno clase[])
{
    int i;

    for(i=0;i<T; i++)
    {
        printf("%d -- %s -- %f\n",clase[i].legajo,clase[i].nombre,clase[i].promedio);

    }
}
