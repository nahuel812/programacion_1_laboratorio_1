#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//prototipo de la funcion
int pedirNumeroEntero(char[]);//recibe una cadena de caracteres.

float pedirNumeroFlotante();

char pedirNumeroFlotante();

int main()
{
    int legajo,nota,edad;

    legajo = pedirNumero("Ingrese un legajo:");//llamada de la funcion.
    nota = pedirNumero("Ingrese una nota:");//Le paso el texto que quiero que mustre a la funcion.
    edad = pedirNumero("Ingrese una edad:");

    return 0;
}

//desarrollo de la funcion
//al string que recive lo puedo poner como char*, en el prototipo y en el desarrollo de la funcion, funciona igual.
int pedirNumeroEntero(char texto[])//Esta funcion me permite pedir numeros y poder modificar el texto de lo que pide.
{
    int numero;

    printf("%s",texto);//la mascara que me permite mostrar string es "%s"

    scanf("%d", &numero);

    return numero;
}
