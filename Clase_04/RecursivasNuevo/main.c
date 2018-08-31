#include <stdio.h>
#include <stdlib.h>
/** \brief calcula el factorial de un numero
 *
 * \param int el numero
 * \return int el facorial
 *
 */
int calcularFactorial(int);

int main()
{
    int numero;
    int factorial;
    //int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    //en incremento
    /*
    for(i=1; i<=numero;i++)
    {
        factorial = factorial*i;
    }
    */
    //en decremento
    /*
    for(i=numero; i>=1;i--)
    {
        factorial = factorial*i;
    }
    */
    factorial = calcularFactorial(numero);
    printf("El factorial es: %d", factorial);
    return 0;
}

//una funcion recursiva es una funcion que se llama asi misma.

int calcularFactorial(int numero)
{
    int factorial;

    if(numero==0)//cuando valga 0 pone a factorial en 1, y va devolviendo el valor multiplicandose.
    {
        factorial = 1;
    }
    else
    {
        factorial = numero * calcularFactorial(numero - 1);
    }


    return factorial;
}

