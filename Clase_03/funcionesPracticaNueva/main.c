#include <stdio.h>
#include <stdlib.h>

//las funciones pueden deovlver y/o recibir valores, o no.
//tienen 3
//prototipo firma o delcaracion de la funcion.

//void sumar(void);  //PRIMER PROTOTIPO  Con el prototipo verifica los valoes que se van a recibir y devolver para que sea consistente.
/***************************************************************************/
//void sumar(int, int); //SEGUNDO PROTOTIPO. NO DEVUELVE PERO RECIBE VALORES.
/***************************************************************************/
//int sumar(void); //TERCER PROTOTIPO. DEVUELVE VALOR, PERO NO RECIBE VALORES.
/*************************************************************************/
int sumar(int,int);

int main()
{
    // PRIMER PROTOTIPO sumar();//llamada de la funcion.
    /*
    //SEGUNDO PROTOTIPO :
    int numeroUno,numeroDos;
    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un otro numero: ");
    scanf("%d", &numeroDos);

    sumar(numeroUno,numeroDos);//ESTOS SON PARAMETROS ACTUALES, SON LOS QUE LE ENVIO A LA FUNCION.
    */
    /*
    //TERCER PROTOTIPO
    int suma;

    suma = sumar();//llamo a la funcion y le doy el valor a suma y despues lo muestra.
    printf("El resutado es: %d",suma);
    */

    //CUARTO PROTOTIPO
    int numeroUno,numeroDos, suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un otro numero: ");
    scanf("%d", &numeroDos);
    suma = sumar(numeroUno, numeroDos);
    printf("El resultado de la suma es: %d", suma);

    return 0;
}
//CUARTO PROTOTIPO: DEVUELVE Y RECIBE VALORES.
int sumar(int n1,int n2)
{
    int suma;
    suma = n1+n2;

    return suma;//el return devuelve el valor al main donde fue llamada la funcion.
}
/*************************/
/*
//TERCER PROTOTIPO: DEVOLVER PERO NO RECIBIR VALORES
int sumar(void)
{
    int numeroUno,numeroDos, suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un otro numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno+numeroDos;

    return suma;//el return devuelve el valor al main donde fue llamada la funcion.
}
*/
/**************************/
/*
SEGUNDO PROTOTIPO: NO DEVOLVER, PERO SI RECIBIR VALORES.
void sumar(int n1, int n2)//ESTOS SON PARAMETROS FORMALES DE LA FUNCION.
{
    //el scope es todo lo que esta en las llaves, este es el scope de la funcion.
    //las variables locales estan dentro de las funciones.
    int suma;

    suma = n1+n2;

    printf("El resultado de la suma es: %d",suma);
}
*/
/**********************/
/*
  PRIMER PROTOTIPO NO RECIBE NI DEVUELVE.
//desarrolo el algoritmo(codigo) que va a ejecutar la funcion
//encabezado de la funcion
void sumar(void)//funcion NULA, no se utiliza.
{
    //las llaves definen el alcanc
    int numeroUno,numeroDos, suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un otro numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno+numeroDos;
    printf("El resultado de la suma es: %d",suma);

}
*/
