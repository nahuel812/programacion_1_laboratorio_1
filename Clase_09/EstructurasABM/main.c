#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

#define A 3

int main()
{
    eAlumno listaAlumnos[A];
    int opcion;

    do
    {
        printf("1.Cargar\n2.Mostrar\n10.Salir\nElija opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarListado(listaAlumnos, A);
            break;
        case 2:
            mostrarListado(listaAlumnos, A);
            break;

        default:
            printf("Opcion incorrecta.");
        }
    }
    while(opcion!=10);



    return 0;
}
