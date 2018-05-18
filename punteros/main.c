#include <stdio.h>
#include <stdlib.h>


int cargarArray(int*,int);//recibe un puntero entero y un entero.
void mostrarArray(int*, int);

int main()
{
    int vector[3];
    /*
    int* puntero;
    int* p = NULL; //si le paso null crashea el programa

    puntero = vector;
    */


    /*
    int i;
    for(i=0;i<3;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", puntero + i);//le suma el sizeof de tipo de dato que representa el puntero. entonces, al sumarle i le suma 4 bytes
    }
    */

    if(cargarArray(vector, 3))//al if le paso 0 o 1, entonces se cumple o no. puedo poner ==1
    {
        printf("Carga exitosa!!\n");
    }
    else
    {
        printf("Error al cargar los datos.\n");
    }
    /*
    for(i=0;i<3;i++)
    {
        printf("%d\n", *(puntero+i));//con el asteristico le paso la direccion de memoria
    }
    */

    mostrarArray(vector, 3);

    return 0;
}

int cargarArray(int* array,int tam)
{
    int i;
    int retorno=0;

    if(array != NULL)//siempre verifico si es nulo, para que no crashee
    {
        retorno = 1;
        for(i=0;i<tam;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", array + i);//le suma el sizeof de tipo de dato que representa el puntero. entonces, al sumarle i le suma 4 bytes
        }
    }
    else
    {
        printf("NULO");
    }
    return retorno;
}

void mostrarArray(int* array, int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(array+i));//con el asteristico le paso la direccion de memoria
    }
}

