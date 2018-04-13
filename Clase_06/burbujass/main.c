#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int vector[5] = {5,2,9,6,5};//lo inicializo por extencion.

    //ejemplo de swap.
    /*
    int a = 9;
    int b = 5;
    int c;

    //swap
    c = a;
    a = b;
    b = c;

    printf("a == %d -- b == %d",a,b);
    */

    //int vector[5] = {5,2,9,6,5};//lo inicializo por extencion.
    char vector[5] = {'w','a' ,'c','z'};
    int auxiliar;
    int i;
    int j;

    for(i=0;i<4;i++)//pongo i<4 porque no puede llegar al ultimo, ya que en el ultimo esta el otro for.
    {
        for(j=i+1;j<5;j++)//j tiene que ser siempre 1+ que el i para que no se superpongan.
        {
            if(vector[i]>vector[j])//criterio de ordenamiento. Si cambio el mayor a menor los ordena al revez.
            {
                auxiliar=vector[i];
                vector[i]=vector[j];
                vector[j]=auxiliar;
            }
        }
    }

    for(i=0; i<5;i++)
    {
        printf("\n %c",vector[i]);//cambio la mascara al valor que quiero mostrar.
    }

    return 0;
}
