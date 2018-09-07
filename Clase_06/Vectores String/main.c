#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Cuando creo un string de caracteres le indico cuanto es el maximo de elementos.
    //el \0 es lo que hace que la funcion lee hasta ese caracter, que es cuando apretamos ENTER.
    //lo puedo inicializar por extencion, = "juan" o ={'j','u','a','n'};
    char nombre[20];
    printf("Ingrese su nombre: ");
    /*
    PEDIR STRING CON SCANF.
    fflush(stdin);//vacio el buffer.
    scanf("%s", nombre);//al ponerle mascara de string ya sabe q es un vector. El ampersand no es necesario porque "nombre" es un vector y guarda la direccion de memoria del primer elemento.
    */
    //PEDIR STRING CON GETS.
    gets(nombre);//toma un string de la consola, solo le paso nombre.
    printf("%s", nombre);

    return 0;
}
