#include <stdio.h>
#include <stdlib.h>

int monstrarEincrementar();

int main()
{
    int numero;
    int incremento;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    incremento = mostrarEincrementar(numero);//aca llamo la funcion y le entrego "numero", que es el numero que ingreso.

    printf("El numero incrementado es: %d", incremento);

    return 0;
}

//las funciones pueden retornar y recibir. Puede hacer 1 de las 2 o las 2 o ninguna. Si no hace ninguna es una funcion NULA.

int mostrarEincrementar(int numero)//hay distintos tipos de pasaje de parametros, POR VALOR(es una copia del valor original), POR REFERENCIA.
{
    int retorno;

    printf("El numero ingresado es: %d \n", numero);

    retorno=numero + 10;

    return retorno;//le aclaro que quiero que devuelva al main.
}
