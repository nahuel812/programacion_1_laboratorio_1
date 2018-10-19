#include <stdio.h>
#include <stdlib.h>
/**
En el stack seria donde se guarda la informacion que creo en el main.

el heap/monton seria un espacio aparte donde puedo guardar muchos mas datos

*/
int main()
{
    int* pEntero;

    malloc();//la funcion malloc se encarga de decirle SO q vaya ala mram y busuqe espacio en memoria para guardar un dato
    //Recive el tamaño que quiero en memoria. Devuelve un puntero a void, ya que puede ser cualquier tipo de dato
    //Le tengo que pasar el tamaño justo que necesito, para eso uso la funcion sizeof de lo que necesito.

    //casteo el malloc al puntero, para que asigne el tipo de dato y sea consistente para evitar errores
    pEntero = (int*)malloc(sizeof(int));//reserva el tam del sizeof de un int y lo devuelve, por eso lo asigno a un puntero.
    //Asi el pEntero que esta en el stack apunta al heap
    //el malloc si no encuentra espacio va a devolver nulo,

    //siempre verifico si el malloc devolvio nulo
    if(pEntero != NULL)
    {
        *pEntero = 9;
        printf("%d",*pEntero);
    }
    else
    {
        printf("No hay suficiente espacio en memoria.\n");
    }

    //para liberar espacio de la memoria que ya no se usa uso la funcion free
    //NO BORRA LOS DATOS, SOLO LOS LIBERA PERO LOS DATOS SIGUEN AHI, PERO PUEDEN BORRARSE ES DECIR QUE YA NO ESTAN RESERVADOS
    //esta funcion recibe un puntero a cualqueir cosa.
    free(pEntero);//libero el espacio de memoria que contiene pEntero, pq ya no lo necesito


    return 0;
}
