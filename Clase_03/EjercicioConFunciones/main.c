#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int, int);
int validarEntero(int, int, int, char[]);


int main()
{
    int edad;//18-60
    int legajo;//1-1000
    int nota;//1-10


    edad=pedirEntero("Ingrese edad: ", 18, 60);

    legajo=pedirEntero("Ingrese legajo: ", 1, 1000);

    nota=pedirEntero("Ingrese nota: ", 1, 10);

    printf("La edad ingresada es: %d y el legajo es: %d La nota es: %d", edad, legajo, nota);

    return 0;
}
//las funciones genericas se pueden adaptar a cualquier caso.
int pedirEntero(char mensaje[], int min, int max)//siempre que tienen corchetes espues de la variable es un vector, una cadena de caracteres en este caso.
{
    int numero;

    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, min, max, mensaje);

    return numero;
}

int validarEntero(int dato, int min, int max, char mensaje[])
{
     while(dato < min || dato > max)//se valida siempre con while, y cuando se valida en los parentesis ponemos lo que no queremos que ocurra.
    {
        printf("Error, reingrese %s", mensaje);
        scanf("%d", &dato);
    }
    return dato;
}
