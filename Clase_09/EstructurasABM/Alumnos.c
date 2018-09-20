#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "Alumnos.h"

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese su direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

    printf("Ingrese el promedio: ");
    scanf("%f", &miAlumno.promedio);

    return miAlumno;

}

void mostrarAlumno(eAlumno alumnoParametro)
{
    printf("%12d -- %10s -- %10s -- %f\n", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.promedio);
}

//CARGA SECUENCIAL.
void cargarListado(eAlumno listado[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        listado[i] = cargarAlumno();
    }
}

//CARGA ALEATORIA.
void altaAlumno(eAlumno listado[], int tam)
{
    int indice;

    indice = buscarEspacio(listado,tam);
    if(indice != -1)
    {
            listado[indice] = cargarAlumno();
            listado[indice].estado = OCUPADO;
    }
    else
    {
        printf("\nNo hay espacio disponible.");
    }
}

void mostrarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estado == OCUPADO)//SI HAY ALGO LO MUESTRO
        {
            mostrarAlumno(listado[i]);
        }

    }
}

void inicializarAlumnos(eAlumno lista[], int tam, int estado)
{
    int i;
    //inicializo en -1 el array, que seria mi estado ilogico.
    for(i=0;i<tam;i++)
    {
        lista[i].estado = estado;//el estado del alumno lo cambio a el valor que le pasa la funcion.
    }
}


int buscarEspacio(eAlumno listado[],int tam)
{
    int indice = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(listado[i].estado == VACIO)
        {
            indice = i;
            break;
        }
    }

    return indice;//retorno el indice, que es el lugar donde voy a guardar el alumno.
}

int cargarAlumnoEnListado(eAlumno listado[], int tam)
{
    int indice;
    int encontro = 0;

    indice = buscarEspacio(listado,tam);
    if(indice != -1)
    {
            listado[indice] = cargarAlumno();
            listado[indice].estado = OCUPADO;
            encontro = 1;
    }
    return encontro;
}


//BAJA LOGICA.
int borrarAlumno(eAlumno listado[],int tam)
{
    //1 PIDO LEGAJO
    //2 BUSCO LEGAJO EN ARRAY---> SI NO EXISTE MUESTRO NO ESXISTE
    //                       ---> SI ESXISTE CAMBIO ESTADO DE ES EELEMENTO.
    int legajo;
    int i;
    int encontro=0;

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0;i<tam;i++)
    {
        if(legajo == listado[i].legajo && listado[i].estado == OCUPADO)//PREGUNTO SI COINCIDE EL LEGAJO Y SI ESTA OCUPADO.
        {
            listado[i].estado = ELIMINADO;
            encontro = 1;
            break;
        }
    }
    return encontro;
}
