#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    int nota;
}eAlumno;

eAlumno* funcion(void);//las fx pueden devolver punteros.

int main()
{
    eAlumno* pAlumno;

    pAlumno = funcion();

    printf("\nNombre: %s \nNota:%d",pAlumno->nombre,pAlumno->nota);

    return 0;
}

//crear estructura
//crear un puntero
//funcion crear puntero a la estrctura y devolverlo

///
eAlumno* funcion(void)
{

    eAlumno miAlumno;
    eAlumno* pAlumnoAux;

    pAlumnoAux = &miAlumno;

    printf("\nIngrese nombre: ");
    fflush(stdin);
    scanf("%s",miAlumno.nombre);

    printf("\nIngrese nota: ");
    scanf("%d",miAlumno.nota);

/*
    printf("\nIngrese nombre: ");
    fflush(stdin);
    scanf("%s",pAlumnoAux->nombre);

    printf("\nIngrese nota: ");
    scanf("%d",pAlumnoAux->nota);
    */

    return pAlumnoAux;
}

/*
El heap esta hecho para guardar informacion de grandes cantidade
*/
