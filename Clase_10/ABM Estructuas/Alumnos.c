#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

void inicializarAlumnos (eAlumno lista[], int tam, int estado)
{
    int i;
    for (i=0; i<tam; i++)
    {
        lista[i].estado = estado;
    }
}

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

    miAlumno.estado = 1;

    return miAlumno;
}



void mostrarAlumno (eAlumno alumnoParametro)
{
    printf("%d -- %s -- %s -- %f\n", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.promedio);
}



int cargarAlumnoEnListado(eAlumno listado[], int tam)
{
    int indice;
    int encontro = 0;

    indice = buscarEspacio(listado, tam);

    if (indice != -1) // SIGNIFICA QUE HAY ESPACIO
    {
        listado[indice] = cargarAlumno();
        encontro = 1;
    }

    return encontro;

}



void mostrarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if (listado[i].estado == 1)
        {
           mostrarAlumno(listado[i]);
        }

    }
}

int buscarEspacio (eAlumno listado[], int tam)
{
    int indice = -1;
    int i;

    for (i=0; i<tam; i++)
    {
        if (listado[i].estado == 0)
        {
            indice = i;
            break;
        }
    }


    return indice;
}

int borrarAlumno (eAlumno listado[], int tam)
{
    int legajo;
    int i;
    int encontro = 0;
    printf("Ingrese el legajo a buscar: ");
    scanf("%d", &legajo);

    for (i=0; i<tam; i++)
    {
        if (legajo == listado[i].legajo && listado[i].estado == 1)
        {
            listado[i].estado = -1;
            encontro = 1;
            break;
        }
    }
    return encontro;
}

int modificarAlumno (eAlumno listado[], int tam)
{
    int legajo;
    int i;
    int encontro = 0;
    printf("Ingrese el legajo a buscar: ");
    scanf("%d", &legajo);

    for (i=0; i<tam; i++)
    {
        if (legajo == listado[i].legajo && listado[i].estado == 1)//cuando encuentro legajo y esta ocupado entra.
        {
            //PUEDO PREGUNTAR QUE DATO QUIERO MODIFICAR CON MENU DE OPCIONES ACA.
            printf("Ingre el nuevo promedio: ");
            scanf("%f", &listado[i].promedio);

            encontro = 1;
            break;
        }
    }
    return encontro;
}

//FUNCION HARDCODE DATOS
void inicializarAlumnosConDatos(eAlumno listado[], int tam)
{
    //HAGO VECTORES DE CADA DATO.
    int legajo[5]={1,2,3,4,5};
    char nombre[5][50]={"Juan","Maria","Pedro","Susana","Luis"};
    char direccion[5][50]={"aaa","bbb","ccc","ddd","eee"};
    float promedio[5]={3,8,6,4,7};

    //los datos que tengo cargados ahi los paso a la estructura.
    int i;
    for(i=0 ; i<5 ; i++)
    {
        //CARGO DATO POR DATO CON EL FOR EN CADA CAMPO DE MI ESTRUCTURA.
        listado[i].legajo = legajo[i];//a el campo legajo le paso el legajo que tengo aca.
        strcpy(listado[i].nombre, nombre[i]);//lo mismo, copio el nombre en el campo de la estructura.
        strcpy(listado[i].direccion, direccion[i]);
        listado[i].promedio = promedio[i];
        listado[i].estado = OCUPADO;//pongo los estados en ocupado.
    }


}
