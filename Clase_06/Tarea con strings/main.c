#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[50];//41 seria el espacio justo, y lo inicializo con comillas para que no tenga basura a la hora de concatenar.
    char buffer[200];//mi auxiliar para guardar cualquier cadena.

    /**FUNCION PEDIR NOMBRE*/
    puts("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);
    /************************/
    //creo un auxiliar para validar lo que ingreso el usuario.
    /**VALIDACION*/
    while(strlen(buffer)>19)
    {
        puts("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre,buffer);//luego copio lo que esta en el buffer que ya esta validada y luego se la paso a nombre.

    puts("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>19)
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(apellido,buffer);//luego copio lo que esta en el buffer que ya esta validada y luego se la paso a nombre.

    strcpy(nombreCompleto, apellido);//copio en la variable el apellido,
    strcat(nombreCompleto, ", ");//le agrego , y espacio
    strcat(nombreCompleto, nombre);//le concateno el nombre

    //Bajo todo a minuscula para que despues pueda poder poner mayusuclas las primeras.
    strlwr(nombreCompleto);

    //primer letra MAYUSCULA
    nombreCompleto[0]= toupper(nombreCompleto[0]);//le asigno a nombrecompleto la mayuscula.

    int i;
    for(i=0;i<strlen(nombreCompleto);i++)//le hago q llegue a el ultimo caracter util con strlen.
    {
        /*
        if(i==0)//primer letra MAYUSCULA
        {
            nombreCompleto[i]= toupper(nombreCompleto[i]);//le asigno a nombrecompleto la mayuscula.
        }*/
        //primer letra segundo nombre MAYUSCULA.
        //Tambien se puede poner isspace(); que lo que hace es ver si es esapcio, devuelve 0 si no lo es y 8 si es space.
        if(isspace(nombreCompleto[i])!= 0)//nombreCompleto[i] == ' ') le digo que si es igual al caracter "espacio", pase el siguiente caracter a Mayus.
        {
            nombreCompleto[i+1]= toupper(nombreCompleto[i+1]);//le asigno a nombrecompleto la mayuscula.
        }
    }

    printf("\n%d\n", isalpha('j'));//devuelve si es una letra
    //isdigit();//me devuelve si es un digito lo que le estoy pasando.
    atoi();//recive una cadena y la convierte a numero si puede. es como el parseint del javascript

    puts(nombreCompleto);
    return 0;
}
