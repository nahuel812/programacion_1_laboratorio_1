#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{
    ePersona* miPersona;
    char nombreAux[20];

    miPersona = nuevaPersonaParametros(1,"Roberto",20);

    if(miPersona != NULL)
    {
        ePersona_mostrar(miPersona);

        ///seteo nueva edad
        ePersona_setEdad(miPersona, 32);
        printf("\nEdad seteada.");

        ///seteo nuevo nombre
        printf("\nIngrese el nuevo nombre: ");
        fflush(stdin);
        scanf("%s",nombreAux);
        ePersona_setNombre(miPersona,nombreAux);
        printf("\nNombre seteado.");

        system("pause");

        ///muestro los nuevos parametros.
        printf("\nLa nueva edad es: %d",ePersona_getEdad(miPersona));//llamo al getter de edad y le paso mipersona, para que devuelva la edad de esa persona.

        strcpy(nombreAux,ePersona_getNombre(miPersona));
        printf("\nEl nuevo nombre es: %s",nombreAux);
    }

    return 0;
}
