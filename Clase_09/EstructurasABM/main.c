#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumnos.h"

int main()
{
    eAlumno listaAlumnos[A];
    int opcion;
    int

    inicializarAlumnos(listaAlumnos, A, VACIO);
    do
    {
        printf("1.Cargar\n2.Mostrar\n3.Borrar\n10.Salir\nElija opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            if(cargarAlumnoEnListado(listaAlumnos, A))//si encontro lugar entra al if, muestra
            {
                printf("Dato cargado con exito.");
            }
            else
            {
                printf("\nNo existe espacio disponible.");
            }
            break;
        case 2:
            mostrarListado(listaAlumnos, A);
            break;
        case 3:
            if(!borrarAlumno(listaAlumnos,A))
            {
                printf("\nDato no encontrado.");
            }
        default:
            printf("\nOpcion incorrecta.");
        }
    }
    while(opcion!=10);

    return 0;
}
