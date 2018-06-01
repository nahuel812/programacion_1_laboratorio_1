#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int* pVector;
    int i;
    int* aux;

    pVector = (int*)malloc(sizeof(int)*TAM);

    if(pVector != NULL)//Verifico que no sea nulo
    {
        for(i=0;i<TAM;i++)
        {
            *(pVector+i) = i+1;//le sumo y le asigno el lugar de memoria donde lo guarda
        }

        for(i=0;i<TAM;i++)
        {
            printf("%d\n", *(pVector+i));
        }

        aux = (int*)realloc(pVector, sizeof(int)*(TAM*2));//realloc reasigna espacio en memoria, y le digo la memoria que necesito, si encuentra seguido de dodne guarda lo pone abajo de ese, sino buesca otro lugar donde se puedan guardar todos juntos
        //puede ser que encuentre lugar, que no encuentre y reasigna, y no encuentra y devuelve null.

        if(aux != NULL)
        {
            pVector = aux;
            free(aux);//lo que hace es liberar el espacio de memoria que tiene guardado, tener cuidado con esto porque si hacemos eso tambien liberamos el pVector y perdemos la memoria.
            for(i=TAM;i<TAM*2;i++)
            {
                *(pVector+i) = i+1;
            }

            printf("Luego del REALLOC");
            for(i=0;i<TAM*2;i++)
            {
            printf("%d\n", *(pVector+1));
            }

        }
    }
    return 0;
}
