#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{
    ePersona* miPersona;

    miPersona = nuevaPersonaParametros(1,"Roberto",20);

    if(miPersona != NULL)
    {
        ePersona_mostrar(miPersona);

        ePersona_setEdad(miPersona, 21);

        printf("\nLa nueva edad es: %d",ePersona_getEdad(miPersona));//llamo al getter de edad y le paso mipersona, para que devuelva la edad de esa persona.

    }

    return 0;
}
