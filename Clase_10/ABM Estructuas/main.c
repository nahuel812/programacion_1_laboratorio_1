#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"
#include "Curso.h"

#define A 100 // CANT EMPLEADOS
//NORMALIZACION: Relacionar entidades

/**
Tarea
Alumnos que cursan PHP
Por cada curso todos los alumnos
*/
int main()
{
    /*
    Ejemplo con estructuras anidadas.
    eAlumno miAlumno={450,"Juan","xxx",7,1,10,8,1996};
    mostrarAlumno(miAlumno);
    */

    eCurso misCursos[3];
    inicializarCursos(misCursos);
    mostrarTodosLosCursos(misCursos,3);


    eAlumno listaAlumnos[A];
    inicializarAlumnos(listaAlumnos, A, VACIO);
    inicializarAlumnosConDatos(listaAlumnos, A);//HARDCODE

    int opcion;
    int i;
    int j;

    do
    {
        printf("\n====================\n");
        printf("1: CARGAR ALUMNO. \n");
        printf("2: MOSTRAR ALUMNOS. \n");
        printf("3: BORRAR ALUMNOS. \n");
        printf("4: MODIFICAR ALUMNO. \n");
        printf("5: MOSTRAR ALUMNO CON CURSO. \n");

        printf("10: SALIR. \n");
        printf("====================\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
                if (cargarAlumnoEnListado(listaAlumnos, A))
                {
                    printf("\n\nDato cargado con exito\n\n");
                }
                else
                {
                    printf("\n\nNo existe espacio disponible\n\n");
                }
            break;

        case 2:
                mostrarListado(listaAlumnos, A);
            break;

        case 3:
                if(borrarAlumno(listaAlumnos, A))
                {
                    printf("\nDato encontrado.\n");
                    printf("\nEl alumno se borro.\n");
                }
                else
                {
                    printf("\nEl alumno no se encontro.\n");
                }
                break;

         case 4:
                if(modificarAlumno(listaAlumnos, A))
                {
                    printf("\nDato encontrado.\n");
                    printf("\nEl alumno se modifico correctamente.\n");
                }
                else
                {
                    printf("\nEl alumno no se encontro.\n");
                }
                break;

         case 5:
            for(i=0;i<A;i++)
            {
                if(listaAlumnos[i].estado == OCUPADO)
                {
                    //muestro cada alumno
                    printf("\n%d--%s--%f--",listaAlumnos[i].legajo, listaAlumnos[i].nombre,listaAlumnos[i].promedio);
                    for(j=0;j<3;j++)
                    {
                        //muestro el curso del alumno, lo hago matchear con el if para que lo muestre.
                        if(listaAlumnos[i].idCurso == misCursos[j].id)//j es para recorrer array de cursos.
                        {
                            printf("%s\n", misCursos[j].nombre);
                            break;
                        }
                    }
                }
            }
            break;

        case 10:
                printf("Programa finalizado! \n");
            break;

        default:
            printf("Opcion incorrecta:!");
        }

        system("pause");
        system("cls");

    }while(opcion!=10);

    return 0;
}


/**
TP 2

C
*/
