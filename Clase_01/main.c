#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno,numeroDos,numeroTres,resultado;

    printf("Ingrese un numero: \n");//printf para que le muestre algo al usuario
    scanf("%d", &numeroUno);//escanea el valor ingresado
    printf("Ingrese un segundo numero:\n");
    scanf("%d", &numeroDos);
    printf("Ingrese un tercer numero: \n");
    scanf("%d", &numeroTres);

    if(numeroUno>numeroDos && numeroUno>numeroTres)
    {
        resultado=numeroUno;
    }
    else
    {
        if(numeroDos>numeroUno && numeroDos>numeroTres)
        {
            resultado=numeroDos;
        }
        else
        {
            resultado=numeroTres;
        }
    }

    printf("El numero mayor es: %d",resultado);


    return 0;
}
