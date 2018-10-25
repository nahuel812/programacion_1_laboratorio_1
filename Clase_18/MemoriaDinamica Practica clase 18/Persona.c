#include "Persona.h"
#include <stdio.h>
#include <string.h>

ePersona* nuevaPersona()
{
    ePersona* unaPersona;

    unaPersona = (ePersona*) malloc(sizeof(ePersona));//reservo espacio en el heap para una persona nueva

    if(unaPersona!=NULL)//verifico si no retorno nulo al hacer el malloc.
    {
        ///Cargo los campos vacios.
        unaPersona->id = 0;
        strcpy(unaPersona->nombre,"Vacio");
        unaPersona->edad = 0;
    }

    return unaPersona;
}

ePersona* nuevaPersonaParametros(int id,char* nombre, int edad)
{
    ePersona* unaPersona;

    unaPersona=nuevaPersona();//le asigno un nuevo espacio en memoria con la funcion.

    if(unaPersona!=NULL)//verifico si no retorno nulo al hacer el malloc.
    {
        ///Cargo sus campos con los valores que vienen en la funcion.
        unaPersona->id = id;
        strcpy(unaPersona->nombre,nombre);
        unaPersona->edad = edad;
    }
    return unaPersona;//retorno el puntero que contiene la direc de memoria de la nueva persona.
}

int ePersona_getEdad(ePersona* unaPersona)
{
    int edad;
    edad = unaPersona->edad;

    return edad;//devuelvo la edad
}

void ePersona_setEdad(ePersona* unaPersona, int edad)
{
    unaPersona->edad = edad;
}

void ePersona_mostrar(ePersona* unaPersona)
{
    printf("%d - %s - %d\n",unaPersona->id,unaPersona->nombre,unaPersona->edad);
}




