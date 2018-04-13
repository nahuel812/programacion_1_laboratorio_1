#include <stdio.h>
#include <stdlib.h>
#include <string.h> //en esta biblioteca tenemos funciones para strings.


//tarea

// char nombre cantidad que yo quiera de caracteres,
//char apellido[?];
//char apellidoYNombre[?];
//ingresar apellido =scarafilo
//ingresar el nombre german ezequiel
//apellidoYNombre = "Scarafilo, German Ezequiel"

int main()
{
    char palabra1[15];//="hola";  al momento de declarar la variable le puedo decir que valor tomar como ahi. Siempre guardo un espacio para el "\0" para indicarle donde termina.
    char palabra2[15];
    char buffer[1024];
    int i;
    int cantidad;
    int comp;

    printf("Ingrese una palabra: ");
    //scanf("%s", palabra);//el scan f no sirve para copiar conjunto de palabras, porque interpreta el espacio como "\0".

    fflush(stdin);//fflush para vaciar el buffer.
    gets(buffer);//con gets le decimos que va a guardar una cadena y es especial para ingresar palabras.
    while(strlen(buffer)>14)
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }
    //cantidad = strlen(palabra1);//con esta funcion veo cuantos caracteres tiene el vector "palabra".

    strcpy(palabra1,buffer); //strcpy("destino", "origen"), copia una cadena en otra
    strcpy(palabra2,"Gato");

    //strupr() //convierte en mayusculas
    //strlwr() //convierte en minusculas

    //strcat() //concatena palabras.


    comp=strcmp(palabra1,palabra2);//strcmp compara las palabras, puede devolver -1, 0 y 1.
    printf("\nResultado de la comparacion: %d\n", comp);

    printf("La cantidad de caracters palabra1: %d\n", cantidad);

    printf("Palabra1: %s \nPalabra2: %s",palabra1,palabra2);

    return 0;
}
