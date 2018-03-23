//se ingresan numeros(distintos de 0), no se sabe cuantos.(usar while)
//se pide mostrar
//cantidad de pares y impares
//porcentaje de numeros positivos y negativos
//maximo y minimo
//maximo numero par
//cantidad de numeros comprendidos entre 125 y 236.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    char respuesta = 's';
    int contadorPares = 0;
    int contadorImpares = 0;
    int contadorPositivos = 0;
    float porcentajePositivos = 0;
    int contadorNegativos = 0;
    float porcentajeNegativos = 0;
    int maximo;
    int minimo;

    int flag = 0;
    int flagPar = 0;
    int maximoPar;


    printf("Desea comenzar? \n");
    scanf("%c", &respuesta);

    while(respuesta!='n')
    {
        contador++;

        printf("\nIngrese un numero: ");
        scanf("%d", &numero);
        while(numero == 0)
        {
            printf("\nReingrese un numero: ");
            scanf("%d", &numero);
        }

        if(numero%2 == 0)
        {
            contadorPares++;

            if(flagPar==0 || numero>maximoPar)
            {
                maximoPar=numero;
            }
        }
        else
        {
            contadorImpares++;
        }

        if(numero>0)
        {
            contadorPositivos++;
        }
        else
        {
            contadorNegativos++;
        }

        /*if(flag==0)//en este if entra una sola vez para tener un maximo y minimo, luego pasa al else directamente y cambia los valores del maximo y minimo
        {
            maximo=numero;
            minimo=numero;

            flag = 1;
        }
        else
        {
            if(numero>maximo)
            {
                maximo=numero;
            }
            if(numero<minimo)
            {
                minimo=numero;
            }
        }*/

        if(flag==0 || numero>maximo)
        {
            maximo=numero;
        }
        if(flag==0 || numero<minimo)
        {
            minimo=numero;
            flag = 1; //el flag tiene que ir abajo, en el ultimo if donde ya no uso el flag, si lo uso arriba no entra a este if
        }




        printf("Desea seguir? ");
        respuesta=getche();
    }

    //para sacar el total en vez de hacer un contador para todo, podemos hacer el contador de positivos + el contador de negativos.

    porcentajePositivos=(float)(contadorPositivos*100)/contador;//tengo que hacer un casteo, lo que hace es convertir un tipo numerico a otro tipo numerico, en este caso convierto un entero en un flotante, esto se hace poniento (float) antes del entero. hay dos formas de casteo, explicito o implicito
    //para ahorrar memoria puedo hace porcentajeNegativos = 100 - porcentajePositivos;
    porcentajeNegativos=(contadorNegativos*100)/contador;

    printf("\nCantidad de numeros pares: %d", contadorPares);
    printf("\nCantidad de numeros inpares: %d", contadorImpares);
    printf("\nEl porcentaje de positivos es: %f", porcentajePositivos);
    printf("\nEl porcentaje de negativos es: %f", porcentajeNegativos);
    printf("\nEl maximo es: %d", maximo);
    printf("\nEl minimo es: %d", minimo);
    printf("\nEl maximo PAR es: %d", maximoPar);


    return 0;
}
