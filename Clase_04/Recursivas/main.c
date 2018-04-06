#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula un factorial
 *
 * \param int Un numero
 * \return int El factorial de el numero
 *
 */
int factorial(int);

//las funciones recursivas se llaman asi mismas, esto puede generar un bucle
int main()
{
    /*
    int numero=5;
    int i;
    int factor=1;//para guardar el factoral que se esta sacando.

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(i=numero;i>=1;i--)
    {
        factor=factor*i;
    }

    printf("El factorial es: %d", factor);
    */

    int numero = 5;
    int factor;

    factor=factorial(numero);

    printf("El factorial es: %d", factor);
    return 0;
}
//con esta forma utilizamos mucha memoria y podria causar problemas.
int factorial(int numero)
{
    int respuesta;

    if(numero==0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta=numero * factorial(numero-1);//se llama asi misma y le resta uno, entoncees le pasa el numero-1, hasta que llega a 0 y luego
    }

    return respuesta;

}
