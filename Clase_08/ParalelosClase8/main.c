#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10


int main()
{
    int vectorInt[TAM]={1,2,3,4,5};
    char vectorString[TAM][30]={"Juan","Ana","Maria","Pedro","Luis"};
    float vectorFloat[TAM]={5.3,2.2,6.9,4.1,7.5};
    int auxInt;
    char auxString[30];
    float auxFloat;
    int i;
    int j;



    //muestro los valores.
    for(i=0;i<TAM;i++)
    {
        if(vectorInt[i] != 0)
           {
               printf("%d -- %s -- %f \n", vectorInt[i],vectorString[i], vectorFloat[i]);
           }
    }
    //auxInt= buscarInt(vectorInt, T, 3)

    for(i=0;i<TAM;i++)
    {

    }


    return 0;
}

//funcion ordenar por nombre y acomodar las notas para que no quede desacomodado.
/*
int ordenarNombre()
{
    int i;
    int j;

    char auxiliar[30];

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(strcmp(vectorString[i],vectorString[j])>0)//comparacion criterio de ordenamiento
            {
                strcpy //hago swap entre los vectoresString
            }
        }
    }

}
*/

//int buscarInt()
