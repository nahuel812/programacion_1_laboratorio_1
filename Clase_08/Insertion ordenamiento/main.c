#include <stdio.h>
#include <stdlib.h>

int main()
{
    //MAS EFICIENTE.


    return 0;
}

//Lo que hace es pararse en el segundo elemento y comparar hacia atras, y asi todo el tiempo.
//Compara si es menor el dato de la izquierda, si es menor lo swapea y asi.
ordenacion_insercion (Dato * A, int N)
{
    int p, j;

    Dato tmp;
    for (p = 1; p < N; p++)
    {
        tmp = A[p];
        j = p - 1;
        while ((j >= 0) && (tmp < A[j]))
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = tmp;
    }
}
