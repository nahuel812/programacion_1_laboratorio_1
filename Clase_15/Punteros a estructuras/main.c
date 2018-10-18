#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int entero;
    char caracter;
}eDato;


int main()
{
    /*
    eDato miDato = {1 , 'B'};
    eDato* pDato;

    pDato = &miDato;

    printf("%d -- %c", (*pDato).entero, (*pDato).caracter);//(*pDato) me entra a la estructura, es decir accedo al dato completo, luego elijo el campo que necesito.
    */

    /*
    eDato miDato[] ={{1 , 'B'},{1 , 'C'}};
    eDato* pDato;
    int i;

    pDato = miDato;

    for(i=0;i<2;i++)
    {
        printf("%d -- %c\n", (*(pDato+i)).entero,(*(pDato+i)).caracter  );
    }
    */

    /**PARA PUNTEROS CON ESTRUCTAR Y OPERADOR FLECHA*/

    eDato miDato[] ={{1 , 'B'},{1 , 'C'}};
    eDato* pDato;
    int i;

    pDato = miDato;

    for(i=0;i<2;i++)
    {
        ///CON (pDato+i) ingreso a la direc de memoria de pdato + i que al principio seria 0 entonces ahi ingreso al campo entero.
        printf("%d -- %c\n", (pDato+i)->entero, (pDato+i)->caracter );//el operador flecha de una forma de abstraer el punto y el asteristico
    }
    return 0;
}


