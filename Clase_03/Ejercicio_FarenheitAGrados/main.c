#include <stdio.h>
#include <stdlib.h>


/*Declaracion de la funcion o prototipo de la funcion*/
/*El tipo de dato devuelto, identificador(parametros de entrada(opcionales en algunos casos))*/
/*Primero tener en cuneta el tipo de dato que va a devolver, podemos tener un int, float, char, void, double, long, etc.*/
/*Para el nombre de la funcion trato de poner algun verbo, como mostrar_...(verbo+objeto)*/
/*declaro una variable por cada parametro(Mismas reglas de declaracion: */
/*recibe ---------- muestra()*/

void mostrarMensaje(int);//(firma de la funcion)si no pongo nada en los parentesis, devuelve entero, aunque el void devuelva vacio.


int main()//desde el main generalmente llamo a la funcion que desarrolle abajo, Aunque se puede llamar a una funcion desde otra funcion, no necesariamente desde el main.
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    //llamada a la funcion, paso un valor
    mostrarMensaje(numero);//este se denomina parametro actual.

    return 0;
}
//la implementacion o desarrolo de la funcion siempre abajo del main.
void mostrarMensaje(int numero)//aca si es importante asignarle en nombre ala variable. Recibe el nombre de parametro formal.
{
    printf("El numero ingresao es: %d", numero);
}
