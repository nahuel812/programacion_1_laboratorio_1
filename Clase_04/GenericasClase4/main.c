#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "UTN_INPUT.h"
//incluyo las bibliotecas

int main()
{
    int legajo,nota,edad;
    float sueldo;
    char sexo;

    //legajo = pedirNumeroEntero("legajo:");//llamada de la funcion.
    //nota = pedirNumeroEntero("nota:");//Le paso el texto que quiero que mustre a la funcion.
    edad = pedirNumeroEntero("edad:", 18,65);

    //sueldo = pedirNumeroFlotante("Ingrese su sueldo: ");

    //sexo = pedirChar("Ingrese su sexo : ");

    //printf("\nLegajo ingresada: %d",legajo);
    //printf("\nNota ingresada: %d",nota);
    printf("\nEdad ingresada: %d",edad);
    //printf("\nSueldo ingresada: %f",sueldo);
    //printf("\nSexo ingresada: %c",sexo);

    return 0;
}
