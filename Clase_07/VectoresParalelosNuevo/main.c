#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define T 3
int main()
{
    /*
    Vectores paralelos:Para la misma posicion del vector voy a tener los datos de distintos arrays en esa posicion.
    */
//representan   i - j
    char nombreCompleto[T][50];//para poder trabajar con vectores paralelos de char e int, necesito utilizar una matriz en nombre. para poder tener cada nombre con su respectivo espacio para el nombre.
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese su nombre completo: \n");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("Ingrese nota 1: \n");
        scanf("%d",&nota1[i]);

        printf("Ingrese nota 2: \n");
        scanf("%d",&nota2[i]);

        printf("Ingrese nota 3: \n");
        scanf("%d",&nota3[i]);

        /**FUNCION PROMEDIO*/
        promedio[i] = (float)(nota1[i]+nota2[i]+nota3[i])/T;//sobre T, porque es secuencial, pero si es aleatoria tendria que hacerlo con un contador.
    }

    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3","Promedio"); //cabecera de las columnas de los datos a mostrar
    for(i=0;i<T;i++)
    {
        //Para identarlo lo que hago es meter un valor entero en medio de la mascara, para que quede justificado y no desordenadas las columnas.
        printf("\n%20s %6d %6d %6d %.2f\n",nombreCompleto[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }

    return 0;
}
