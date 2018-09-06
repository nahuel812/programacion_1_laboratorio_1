#include <stdio.h>
#include <stdlib.h>

/** \brief incrementa en 10 el pValor recibido
 *
 * \param int el pValor sobre el que voy a incrementar
 * \return int [1] si el pValor es mayor que 15 y [0] si no lo es
 *
 */

int miFuncion(int*);//el pValor que recibe tiene que ser un puntero para que pueda ser visible desde afuera y lo modifique.

int main()
{
    int miEntero = 3;
    int estado;//variable que me duvuelve el estado de la fucnion.

    int pValor;

    estado = miFuncion(&miEntero);//le paso la direccion de memoria de la variable a incrementar con la funcion.

    printf("El nuevo valor es: %d\n",miEntero);

    if(estado==1)//uso el estado que devuelve la funcion para decir si es mayor o menor.
    {
        printf("El valr es mayor a 15.\n");
    }
    else
    {
        printf("Es menor o igual a 15.\n");
    }

    return 0;
}

int miFuncion(int* pValor)//cuando lo paso como puntero la variable guarda la direccion de memoria de el puntero.
{
    int queDevuelve=0;//lo inicializo en 0 para que devuelva 0 o 1 si estra al if
    int aux;//auxiliar para no trabajar con el puntero en si.
    aux = (*pValor); //le asigno el valor al auxiliar, para nno estar trabajando con el puntero.

    aux += 10;//la variable pValor, es una variable que tiene una direccion de memoria dentro, entonces no puedo poner solamente pValor+10.
    //para eso uso el opreador de inacceso que es el * antes de la variable, con esto hago que me devuelva el pValor que tiene guardada el puntero.

    if(aux>15)
    {
        queDevuelve=1;
    }
    (*pValor) = aux;// le cambio el valor al puntero con el auxiliar nuevamente para modificar el numero guardado.
    return queDevuelve;
}
