#include <stdio.h>
#include <stdlib.h>

void calcular(int*);


int main()
{
    int x=5;
    calcular(&x);//le paso la direccion de memoria de x, para que se guarde en p
    printf("X=%d",x);

    return 0;
}

void calcular(int* p)
{
    *p=10;//tengo que acceder al valor que apunta x, para eso utilizo el operador de inacceso o indireccion que es el *, el ampersand es el operador de dirrecion.
    //el asteristico se pone a la izquierda, eso hace que se meta en la direccion de memora de x, entonces le pasa el valor por referencia.
}
