#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVector(int[5], int);

void modificarValor(int[]);

int main()
{
    int vector[TAM];
    int i;
    int edad;

    for(i=0 ; i<TAM ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    mostrarVector(vector, TAM);

    modificarValor(vector);

    mostrarVector(vector, TAM);


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

void modificarValor(int vec[])
{
    vec[3]=789;

}

