#include <stdio.h>
#include <stdlib.h>



int main()
{
    //variable escalar: solo puedo guardar un unico valor.
    //variable compuestas como los arrays unidimencional que son los vectores,y luego estan las matrices, que son arrays con filas y columnas
    //en los vectores, solo puedo guardar 1 tipo de dato, ej: int guardo solo int.

    //printf("%d",(sizeof(float*)));//el sizeof me duvuelve el tamaño en bytes. Los punteros valen 4bytes

    int miVector[5]={5,9,3,4,7};//con los corchetes indico que la variable es un array, y le digo cuantos elementos va a contener. Son finitos, tienen inicio y fin.
    //ocupa la cantidad de espacio qe le indiquemos. Los vectores tienen subindice, con ese subindice podemos identificar una posicion en especifico.

    //Hay carga secuencial(en secuencia, por cada elemento voy cargando)
    //Carga aleatoria(Cargamos en donde quiera el programador.)
    //tambien hay carga por extencion, que son cuando hardcodeamos los valores en el vector.

    //Se puede inicializar todo en 0 poniendo despues de vector ={}; con solamente las llaves vacia completa con 0.

    //printf("%d", &miVector[2]);//si yo uso el ampersand y le indico una posicion, lo qe hace es darme esa direccion de memoria de la posicion que le indique.

    int i;
    //PARA CARGAR EL VECTOR.
    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &miVector[i]);//lo guardo en la direccion de memoria del vector en cada posicion.
    }
    //PARA MOSTRAR EL VECTOR.
    for(i=0;i<5;i++)
    {
        if(miVector[i]%2==0)//solo mustro los pares.
        {
            printf("%d\n",miVector[i]);
        }
    }

    //La ARITMETICA DE PUNTEROS lo que hace el array para moverse es multiplicar el indice por el tipo de dato del que esta declarado el vector, y asi puede moverse en el vector.


    return 0;
}
