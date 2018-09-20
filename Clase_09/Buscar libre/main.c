#include <stdio.h>
#include <stdlib.h>

#define A 5


void inicializarVector(int[],int,int);

int buscarLibe(int[], int, int);

int main()
{
    int array[A];
    int i;
    char seguir;
    int indice;

    inicializarVector(array ,A ,-1);

    do
    {
        indice = buscarLibe(array, A, -1);
        if(indice != -1)
        {
            printf("\nIngrese un numero: ");
            scanf("%d", &array[indice]);
        }
        else
        {
            printf("\nNo hay lugar.");
            break;//para salir de do while
        }
        /*
        for(i=0;i<A;i++)
        {
            if(array[i] == -1)//pregunto si esta libre, osea -1.
            {
                printf("\nIngrese un numero: ");
                scanf("%d", &array[i]);
                break;//cuando encuentra 1 espacio libre lo carga y luego rompe para que no siga.
                //el break me saca del for.
            }
        }
        if(i == A )//Verifico si ya no hay lugar.
        {
            printf("\nNo hay lugar.");
            break;//para salir de do while
        }
        */
        printf("\nDesea ingresar otro? ");
        seguir = getche();
    }while(seguir == 's');

    return 0;
}

void inicializarVector(int vector[], int tam, int inicializacion)
{
    int i;
    //inicializo en -1 el array, que seria mi estado ilogico.
    for(i=0;i<tam;i++)
    {
        vector[i] = inicializacion;
    }
}

int buscarLibe(int vector[], int tam, int valor)
{
    int indice = -1;//inicializo con valor ilogico
    int i;

    for(i=0;i<tam;i++)
    {
        if(vector[i]== valor)
        {
            indice = i;
            break;//cuando encuentra valor corto y lo devuelve.
        }
    }

    return indice;
}
//pila -> lavar platos
//cola -> fila del banco
