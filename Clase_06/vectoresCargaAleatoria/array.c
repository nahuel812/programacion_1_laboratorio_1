#include <stdio.h>
#include "array.h"//incluyo la biblioteca

//CARGA ALEATORIA
void cargarVector(int vector[],int tam)
{
    char seguir;
    int posicion;
    do
    {
        //para la carga "aleatoria", primero pregunto en que posicion quiere guardar el elemento.
        printf("\nIngrese posicion: ");
        scanf("%d",&posicion);

        printf("\nIngrese un valor: ");
        scanf("%d", &vector[posicion-1]);//utilizo posicion como la variable de control del for, para pararme en la posicion que quiere, y paraque no desborde le resto 1.
        //en la validacion puedo usar el tam, para que no se pase del tam del vector.

        printf("\nDesea seguir? s/n ");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir =='s');

}

void mostrarVector(int vector[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector[i]!= -1)//valido que muestre los que son distintos a -1
        {
            printf("%d\n",vector[i]);
        }
    }
}

void inicializarVector(int vector[],int tam)
{
    int i;
    for(i=0;i<tam;i++)//cargo el vector en -1.
    {
        vector[i] = -1;
    }
}

int sumarValores(int vector[],int tam)
{
    int acumulador=0;
    int i;

    for(i=0;i<tam;i++)
    {
        if(vector[i]!= -1)//para evitar que sume el -1
        {
            acumulador = vector[i] + acumulador;
        }
    }
    return acumulador;
}
