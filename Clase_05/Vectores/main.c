#include <stdio.h>
#include <stdlib.h>
#define TAM 5 //DIRECTIVA del precompilador,lo que hace es cuando encuentra TAM en el codigo fuente lo remplaza por 5
//un vector es un conjunto de elementos del mismo tipo. con un vector podemos guardar varios datos.
//lo que hace es guardar memoria para se ocupada por un int, float, etc.
int main()
{
    //los vectores se pueden cargar por extension
    //los vectores se guardar por referencia, guardan unicamente direcion de memoria
    int vector[TAM]; //= {9, -3, 5, 14, -4};//al poner corchetes le decimos que es un vector, y tiene un array, que es el tamaño que le doy en [] - 1.
    //int vector[5] = {0} //todos los valores del vector van a ser 0.
    int i;

    //printf("Vector %d \n", vector); esto muestra la direccion de memoria del primer elemento del vector.

    //con esta estructura lo que hacemos es cargar el vector en 0
    for(i=0; i<TAM ; i++)
    {
        vector[i] = 0;
    }

    /*carga secuencial(se utiliza for, va guardando en orden valores.)*/

    for(i=0; i<TAM ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);//le tengo que indicar con el & la direccion de memoria en la que se guarda.
    }



    /*carga aleatoria*/



    /**mostrar el vector*/
    //usamos for para hacer un bucle
    for(i=0;i<TAM;i++)//siepre se inicia en 0, por que ese es el subindice del vector, y siempre tenemos un limite que asignarle.
    {
        printf("El vector contiene: %d -- %d \n",i ,vector[i]);// el vector va sin el ampersand, ya que si lo ponemos nos muestra la direccion de memoria.
    }

    return 0;
}
