#include <stdio.h>
#include <stdlib.h>
int contarPares(int[], int);


/** \brief Determina si un caracter esta o no esta dentro del array
 *
 * \param char[] coleccion de caracteres en el vector.
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del del valor encontrado
 *
 */
int buscarChar(char[], int, char);

int main()
{
    int vector[5] = {5,2,9,6,5};//lo inicializo por extencion.

    char letras[5] = {'f','g','a','m','q'};
    int indexLetra;

    int cantidad;

    cantidad=contarPares(vector, 5);
    printf("La cantidad de pares: %d\n",cantidad);

    indexLetra=buscarChar(letras, 5, 'a');//le paso la letra que quiero buscar
    if(indexLetra==-1)
    {
        printf("No se encuentra el caracter. \n");
    }
    else
    {
        printf("El caracter se encuentra en el array. \n");
    }
    //printf("Index= %d \n", indexLetra);

    return 0;
}
//funcion contar pares
int contarPares(int array[], int cantidad)//parametros formales, el array se pasa por referencia, y el cantidad por copia.
{
    int contadorPares = 0;
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]%2==0)
        {
            contadorPares++;
        }
    }
    return contadorPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index = -1;
    int i;

    for(i=0;i<cantidad;i++)
    {
        if(array[i]==caracter)
        {
            index = i;
            break;//con el break termino la iteracion, para que no siga buscando.
        }
    }
    return index;
}
