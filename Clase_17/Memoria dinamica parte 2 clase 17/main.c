#include <stdio.h>
#include <stdlib.h>

#define T 5

int main()
{
    int* vector;
    int* pAuxVector;

    int i;
    vector = (int*)malloc(sizeof(int) * T);//busco espacio de int * 5
    ///calloc() RECIBE 2 TAM, el sizeof del tipo y el tamaño. PERO LO QUE HACE ES INICIALIZARLO EN 0 a diferencia del malloc.
    if(vector != NULL)
    {
        //cargo el vector con valores
        for(i=0; i<T; i++)
        {
            *(vector + i) = i+1;//al valor le sumo 1 por eso "*(vector + i)"
        }

        //los mustro
        for(i=0; i<T; i++)
        {
            printf("%d\n",*(vector+i));
        }

        ///REALLOC - RECIVE 2 PARAMETROS, 1ro puntero a void repesenta el puntero que quiero agrandar
        ///                               2do es la cantidad de elementos que quiero que tenga ahora
        ///   devuelve un puntero a void.
        ///lo que hace es fijarse si ,despues de la ultima direccion de memoria que tiene reservada por el malloc, hay mas espacio luego para la nueva cantidad que le indicamos.
        ///si no hay espacio luego de la ultima direc de memoria sigue buscando si encuentra el nuevo espacio consecutivo.
        ///si no encuentra espacio en ningun lugar devuelve nulo(NULL).
///TAMBIEN HAY QUE CASTEAR EL REALLOC
        /*
        vector = realloc(vector,sizeof(int)*(T+5));//t + (el nuevo espacio que quiero)
        //si el realloc devuelve nulo se piedern los valores que tenia antes guardados.
        */
        //al aux le hago un realloc para no perder los datos anteriores
        pAuxVector = realloc(vector,sizeof(int)*(T+5));//realoc de un int*10, para reservar espacio para 10 enteros

        if(pAuxVector != NULL)
        {
            vector = pAuxVector;
            //cargo los valores q faltan
            for(i=T ; i<T+5; i++)
            {
                *(vector + i) = i+1;
            }

            //los mustro otravez
            printf("\nACA TENGO 10\n");
            for(i=0; i<T+5; i++)
            {
                printf("%d\n",*(vector+i));
            }

            printf("\nACA TENGO 3\n");
            vector = realloc(vector,sizeof(int)*3);//realloc de int*3

            for(i=0; i<3; i++)
            {
                printf("%d\n",*(vector+i));
            }
        }
    }
    else
    {
        printf("No hay espacio en memoria para reservar.");
    }


    return 0;
}
