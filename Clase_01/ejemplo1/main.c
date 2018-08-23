#include <stdio.h>
#include <stdlib.h>

int main()//punto de entrada al programa
{
    //IDE: entorno desarrollo integrado

    //editor de texto
    //enlazador enlazar funciones predeterminadas como el printf, para que funcionen.
    //compilador

    //tipo de dato primitivo enteros(INT) mascara: %d %i, reales(FLOAT) mascara: %f y los caracteres(CHAR) mascara :%c

    /*
    int numero = 5;
    int numero2 = 8;
    float numeroFloat = 4.36;
    char caracter = 'a';

    //mascara
    printf("El numero es: %d y el otro: %d\n", numero, numero2);

    //con flotantes
    printf("El numero es: %d y el otro: %f\n", numero, numeroFloat);

    //con caracter
    printf("El caracter es: %c", caracter);
    */

    int nuevoNumero;
    float nuevoFloat;
    char nuevoChar;

    printf("Ingrese un numero: ");
    //scanf("mascara de entrada", & direccion de memoria de la variable); el ampersand me permite obtener la direc. de memoria de la variable.
    scanf("%d",&nuevoNumero);

    printf("\nIngrese un flotante: ");
    scanf("%f", &nuevoFloat);

    //El buffer se cargar y descarga con caracteres, entonces puedo descargarlo con el fflush, o solo poniendo un espacio antes del " %c", pero es mejor con el fflush.
    printf("Ingrese un caracter: ");
    fflush(stdin);//el stdin indica que es el buffer de entrada.
    scanf("%c", &nuevoChar);


    printf("\nEl numero ingresado es: %d", nuevoNumero);
    printf("\nEl float ingresado es: %f", nuevoFloat);
    printf("\nEl char ingresado es: %c",nuevoChar);

    return 0;
}
