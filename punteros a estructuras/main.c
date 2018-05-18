#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    int a;//en memoria vale 4byte
    char b;//en memoria vale 1byte
}dato;//la estructura vale los datos que tenga definidos.

int main()
{
    /*
    dato d;
    //hardcodeo datos
    d.a = 5;
    d.b = '<';

    dato* pDato;

    pDato = &d;//la igualo a la direccion de memoria de d.
    printf("%d -- %c", pDato->a, pDato->b);//cno el & accedo ala direc de memoria del dato, con pDato, lo que contiene y con *pDato me devuelve los valores que tiene.
    //con el (*pDato) puedo acceder a la estructura.
    */

    /*
    //sizeof()//operador que me permite saber el tamaño de una variable o un tipo de dato. el tamaño que representa en memoria.
    printf("\n\nTAM: %d\n", sizeof(int));//devuelve el valor que le ingerse al sizeof

    printf("\n%d -- %c", d.a,d.b);
    */


    //ejemplo de punteros y estructuras mas complejo sin flechita.

    dato l[2]={{1,'a'},{1,'b'}};

    dato* pLista;//puntero de lista

    pLista = l;

    int i;
    for(i=0;i<2;i++)
    {
        printf("%d--%c\n", (*(pLista+i)).a,(*(pLista+i)).b);//con los asteristicos me devuelve el valor
        printf("%d--%c\n", pLista->a, pLista->b);
    }

    return 0;
}
