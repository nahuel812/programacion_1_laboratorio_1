#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define TAM 5

void mostrarVector(int[5], int);

void modificarValor(int[]);
//una funcion que reciba un vector y devuelva el maximo valor.
int buscarMaximo(int[], int);//recibe un array y un entero.

int buscarValor(int[], int, int);

//funcion que devuelva cantidad de numeros pares
//funcion que devuelva cantidad de numeros positivos
//
int main()
{
    int vector[TAM];
    int i;
    int mayor;
    int indice;

    //ingreso de numeros en el vector por el usuario
    /*
    for(i=0 ; i<TAM ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
    */
    cargarVectores(vector, TAM);

    mostrarVector(vector, TAM);

    /*
    modificarValor(vector);

    mostrarVector(vector, TAM);
    */

    /*
    mayor = buscarMaximo(vector, TAM);
    printf("El maximo es %d", mayor);

    indice=buscarValor(vector, TAM, 14);
    if(indice== -1)
    {
        printf("No lo encontro!!");
    }
    else
    {
        printf("Encontro el valor");
    }
    */

    return 0;
}
//el vector se pasa por referencia y el int por copia.
void mostrarVector(int vec[5], int tamanio)//funcion para mostrar vector. Lo que guardar el int vec[5] es el espacio de memoria.
{
    int i;

    for(i=0; i<tamanio ; i++)
    {
        printf("%d -- %d \n", i, vec[i]);
    }
}

/*
void modificarValor(int vec[])
{
    vec[3]=789;
}
*/
/*
int buscarMaximo(int vec[], int tam)
{
    int maximo=0;
    int i;
    int flag=0;

    //con un for recorro el vector para buscar el maximo.
    for(i=0; i<tam ; i++)
    {
        if(flag==0 || vec[i]>maximo)
        {
            maximo=vec[i];
            flag=1;
        }
    }

    return maximo;

}
*/
