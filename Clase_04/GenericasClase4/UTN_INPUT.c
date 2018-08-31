#include "UTN_INPUT.h"
//EDITOR(TEXTO), OCMPILADOR(COMPILA TODO), ENLAZADOR(BUSCA FUNCIONES)
//EN EL .c PONGO LA IMPLEMENTACION DE ESAS FUNCIONES.

//desarrollo de la funcion

//al string que recive lo puedo poner como char*, en el prototipo y en el desarrollo de la funcion, funciona igual.
int pedirNumeroEntero(char texto[], int min, int max)//Esta funcion me permite pedir numeros y poder modificar el texto de lo que pide.
{// le paso el mensaje y los valores min y max de la edades que puede ingresar.
    int numero;

    printf("Ingrese %s",texto);//la mascara que me permite mostrar string es "%s"

    scanf("%d", &numero);

    //VALIDACION:
    numero = validarEntero(numero, texto, min,max);

    return numero;
}

int validarEntero(int numero,char texto[], int min, int max)
{
    while(numero<min || numero>max)//valido entre los valores que le pase.
    {
        printf("Reingrese %s ",texto);
        scanf("%d", &numero);
    }
    return numero;//retorno el numero ya validado.
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

/*
El pasaje por valor es cuando pasamos una variable del main a una funcion, la variable que esta en la funcion
no modifica la variable original que esta en el main,


Las variables locales se declaran dentro de una funcion y solo se pueden ver alli.
las globales se declaran fuera de cualquier funcion y tienen mucha visivilidad, se pueden ver desde cualquier scope.
Pero tiene prioridad la variable local si se definio en la funcion con el mismo nombre.

Un puntero es una variable que guarda una direccion de memoria de otra variable.

El pasaje por referencia es pasarle la direccion de memoria, para que se modifique el valor.
*/

