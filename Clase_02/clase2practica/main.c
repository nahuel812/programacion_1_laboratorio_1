#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Al presionar el bot&oacute;n pedir  n&uacute;meros  hasta que el usuario quiera, mostar:</br>
    				1-Suma de los negativos.
    				2-Suma de los positivos.
    				3-Cantidad de positivos.
    				4-Cantidad de negativos.
    				5-Cantidad de ceros.
    				6-Cantidad de números pares.
    				7-Promedio de positivos.
    				8-Promedios de negativos.
    				9-Diferencia entre positivos y negativos, (positvos-negativos).
    */
    int numero;

    int contPositivos=0;
    int contNegativos=0;
    int acumDePositivos=0;
    int acumDeNegativos=0;
    int contCeros=0;
    int acumPares=0;
    float promedioPositivos;
    float promedioNegativos;

    int maximo;
    int minimo;
    int flag=0;

    char respuesta;

    printf("Desea comenzar?");
    scanf("%c", &respuesta);

    while(respuesta != 'n')
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);

        //sumadores de positivos y negativos.
        if(numero>0)
        {
            acumDePositivos = numero+acumDePositivos;
            //acumDePositivos+=numero;
        }
        else
        {
            acumDeNegativos = numero + acumDeNegativos;
        }

        //contadores de positivos y negativos;
        if(numero >= 0)
        {
            contPositivos++;
        }
        else if(numero<0)
        {
            contNegativos++;
        }
        if(numero == 0)
        {
            contCeros++;
        }

        //contador pares
        if(numero%2 == 0)
        {
            acumPares++;
        }

        if(flag==0)
        {
            maximo=numero;
            minimo=numero;
            flag=1;
        }

            if(numero>maximo)
            {
                maximo=numero;
            }
            if(numero<minimo)
            {
                minimo=minimo;
            }


        printf("\nDesea continuar? s/n ");
        fflush(stdin);
        //setbuf(stdin,NULL);
        scanf("%c", &respuesta);
    }//while

    //promedios
    //if(contPositivos>0)
    //{
            promedioPositivos= (float)acumDePositivos/contPositivos;//hacer un casteo conver un entero a un flotante.
    //}
    //if(contNegativos>0)
    //{
        promedioNegativos= (float)acumDeNegativos/contNegativos;
    //}

    printf("\nla suma de positivos es: %d", acumDePositivos);
    printf("\nla suma de negativos es: %d", acumDeNegativos);
    printf("\nlos positivos ingresados son: %d", contPositivos);
    printf("\nlos negativos ingresados son : %d", contNegativos);
    printf("\nlos ceros ingresados son: %d", contCeros);
    printf("\nlos numeros pares ingresados son: %d", acumPares);

    printf("\nel promedio de los positivos es: %f",promedioPositivos);
    printf("\nel promedio de los negativos es: %f",promedioNegativos);

    printf("\nel maximo es: %d",maximo);
    printf("\nel minimo es: %d",minimo);

    return 0;
}
