#include <stdio.h>
#include <stdlib.h>
#include "array.h"//incluyo la biblioteca

#define T 5

int main()
{
    int miVector[T];//en el vector puedo guardar un valor ilogico, que me indique que esta vacio.
    int opcion;
    int suma;

    do
    {
        printf("1.CARGAR \n2.MOSTRAR \n3.SUMAR\n4.Salir\nElija una opcion.");
        scanf("%d", &opcion);

        inicializarVector(miVector,T);//inicializo el vector en -1

        switch(opcion)
        {
        case 1:
            cargarVector(miVector, T);
            break;
        case 2:
            mostrarVector(miVector, T);
            break;
        case 3:
            suma = sumarValores(miVector,T);
            printf("La suma es: %d",suma);
            break;
        case 4:
            opcion = 4;
            break;
        default:
            printf("Opcion no valida.");
        }
        system("cls");
    }while(opcion != '4');

    return 0;
}
