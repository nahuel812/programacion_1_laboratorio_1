#include <stdio.h>
#include <stdlib.h>
//prototipo 1
void sumar1(void);

void sumar2(int, int);

int sumar3();

int sumar4(int, int);

int main()
{
    //prototipo1
    //sumar1();

    //prototipo2
    //sumar2(4, 9);

    //prototipo3

    /*int resultado;
    resultado= sumar3()

    printf("La suma es de: %d", resultado)
    */

    //prototipo4

    int resultado;
    int numero1;
    int numero2;

    numero1=pedirEntero("Ingrese un numero: ", 1, 1000);

    numero2=pedirEntero("Ingrese un numero: ", 1, 1000);

    resultado= numero1+numero2;

    return 0;
}

void sumar1(void)
{
    int numero1;
    int numero2;
    int resultado;

    numero1= pedirEntero("Ingrese un numero ", 1, 1000);
    numero2=pedirEntero("Ingrese un numero ", 1 , 1000);

    resultado = numero1+numero2;

    printf("La suma es: %d", resultado);

}
//prototipo 2

void sumar2(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 + numero2;

    printf("La suma es: %d", resultado);
}

int sumar3()
{
    int numero1;
    int numero2;
    int resultado;

    numero1=pedirEntero("Ingrese un numero: ", 1, 1000);

    numero2=pedirEntero("Ingrese un numero: ", 1, 1000);
}

int sumar4(int numero1, int numero2)
{
    int resultado;

    resultado=numero1+numero2;

    return resultado;
}

