#include <stdio.h>
#include <stdlib.h>

/*
Un puntero es una variable que contiene una direccion de memoria

la memoria ram se divide en varios campos

en el stack se guardan variables locales paremotrs a funciones, llamados a funciones, y otra informacion necesaria
para la funcionalidad del programa.

*/

void cargar(int*, int);
void mostrar(int*, int);

int main()
{
    /*
    char entero;
    char* pEntero;

    printf("%d\n", sizeof(entero));
    printf("%d\n", sizeof(pEntero));//las direc de memoria seguardan como enteros, todos los punteros cualquiera sea el tipo va a guardar el sizeof de un entero.
    */

    /*
    char letra = 't';
    char* pLetra=NULL;//puedo poner el * en el nombre o en el tipo de dato, pero es preferible en el tipo de dato.

    pLetra = &letra;//le asigno al puntero la direc de memoria de letra, que va a apuntar a la letra t.

    printf("%p\n",&letra);//%p muestra en exadecimal.
    printf("%p\n",&pLetra);

    printf("%c\n",letra);
    printf("%d\n",pLetra);

    //Con el * antes de la variable pedo entrar a el contenido de la variable.
    printf("%c\n",*pLetra);//si muestro el puntero sin asignarlo a nada rompe el programa.
    //puedo verificar el puntero

    if(pLetra != NULL)
    {
        printf("%c\n",*pLetra);
    }
    printf("Hola a todos.\n");
    */

    ////////////////////////////////////////////////////////////////////////////////////////////

    /*
    char letra;
    char* pLetra= NULL;

    pLetra = &letra;//le asigno al puntero letra

    printf("\nIngrese un caracter: ");
    fflush(stdin);
    //*pLetra = getche();

    scanf("%c", pLetra);//no hace falta el ampersand porque pLetra ya tiene la direccion de memoria de letra.

    printf("\nEl caracter es: %c", *pLetra);
    */
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    /*
    La cualidad de los punteros me permite moverme en el memoria ram.
    ARITMETICA DE PUNTEROS: Sobre un puntero puedo realizar operaciones, como sumas y restas, y asi moverme en memoria..
    */
/*
    int entero;
    int* pEntero;

    pEntero = &entero;

    printf("%d\n",&entero);
    printf("%d\n",pEntero);

    printf("%d\n",pEntero+1);//si le sumo 1 muestra lo que sigue en la memoria ram, es decir le suma 4 a la direc de memoria.
*/
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int array[5];//={5,9,6,7,1};

    cargar(array, 5);//paso el array a la funcion y la funcion recibe el array como puntero.

    mostrar(array, 5);
    return 0;
}


void cargar(int* pArray, int tam)
{
    int i;
    for(i=0 ; i<tam; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",pArray+i);
    }
}

void mostrar(int* pArray, int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        /// le sumo 1 a la direc de memoria de pEntero
        printf("%d\n",*(pArray+i));//lo encierro en parentesis para darle prioridad a la operacion, entonces ahi se mueve en el puntero y luego muestra el valor.
    }
}
