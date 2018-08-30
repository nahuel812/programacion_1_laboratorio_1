#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//prototipo de la funcion
int pedirNumeroEntero(char[]);//recibe una cadena de caracteres.

float pedirNumeroFlotante(char[]);

char pedirChar(char[]);

int main()
{
    int legajo,nota,edad;
    float sueldo;
    char letraInicialDelNombre;

    legajo = pedirNumeroEntero("Ingrese un legajo:");//llamada de la funcion.
    nota = pedirNumeroEntero("Ingrese una nota:");//Le paso el texto que quiero que mustre a la funcion.
    edad = pedirNumeroEntero("Ingrese una edad:");

    sueldo = pedirNumeroFlotante("Ingrese su sueldo: ");

    letraInicialDelNombre = pedirChar("Ingrese la primera letra de su nombre: ");

    printf("\nlegajo: %d",legajo);
    printf("\nnota: %d",nota);
    printf("\nedad: %d",edad);
    printf("\nsueldo: %f",sueldo);
    //printf("letra inicial del nombre: %c",letraInicialDelNombre);

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

float pedirNumeroFlotante(char texto[])//Esta funcion me permite pedir numeros y poder modificar el texto de lo que pide.
{
    float numero;

    printf("%s",texto);//la mascara que me permite mostrar string es "%s"

    scanf("%f", &numero);

    return numero;
}

char pedirChar(char texto[])
{
    char letra;

    fflush(stdin);
    printf("%s",texto);//la mascara que me permite mostrar string es "%s"

    scanf("%c", letra);

    return letra;
}
