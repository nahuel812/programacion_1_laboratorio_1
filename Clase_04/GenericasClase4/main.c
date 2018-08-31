#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "UTN_INPUT.h"
//incluyo las bibliotecas

int main()
{
    int edad;
    float nota;
    char sexo;

    //llamada de la funcion.

    edad = pedirNumeroEntero("edad:", 18,65);//Le paso el texto que quiero que mustre a la funcion.
    //nota = pedirNumeroFlotante("nota: ");
    //sexo = pedirChar("sexo: ");

    //MUESTRO LOS VALORES:

    printf("\nEdad ingresada: %d",edad);
    //printf("\nNota ingresada: %f",nota);
    //printf("\nSexo ingresada: %c",sexo);

    return 0;
}
