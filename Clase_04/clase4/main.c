#include <stdio.h>
#include <stdlib.h>
#include "funciones.h" //al .h lo agrego al los dos c

//funciones genericas:
int pedirEntero(char[], int, int);
//float pedirFlotante(char[], float, float);
//char pedirChar(char[], char, char);

int main()
{
    int edad;
    int legajo;

    edad = pedirEntero("Ingrese edad: ", 18, 60);

    legajo = pedirEntero("Ingrese el legajo: ", 0, 2000);


    return 0;
}
/*para crear un header primero creo un un empty file, y le asigno un nombre con .h al final y lo mismo pero con uno .c
int pedirEntero(char mensaje[], int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);

    while(numero<min || numero>max)
    {
        printf("Error!! %s", mensaje);
        scanf("%d", &numero);
    }

    return numero;
}
*/
