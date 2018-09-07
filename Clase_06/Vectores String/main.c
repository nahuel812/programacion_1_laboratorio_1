#include <stdio.h>
#include <stdlib.h>
#include <string.h>//incluyo biblioteca para funciones con strings.

int main()
{
    //Cuando creo un string de caracteres le indico cuanto es el maximo de elementos.
    //el \0 es lo que hace que la funcion lee hasta ese caracter, que es cuando apretamos ENTER.
    //lo puedo inicializar por extencion, = "juan" o ={'j','u','a','n'};
    char nombre[20]="Juan";
    char otroNombre[20]="Alberto";
    int cantidad;
    int compara;
    /*
    printf("Ingrese su nombre: ");

    //PEDIR STRING CON SCANF.
    fflush(stdin);//vacio el buffer.
    scanf("%s", nombre);//al ponerle mascara de string ya sabe q es un vector. El ampersand no es necesario porque "nombre" es un vector y guarda la direccion de memoria del primer elemento.

    //PEDIR STRING CON GETS.
    gets(nombre);//toma un string de la consola, solo le paso nombre.
    printf("%s", nombre);
    */
    fgets(nombre,20,stdin);//file gets: vector, cantidad , y el buffer actual. Al final de la cadena me mete un salto de linea y puede contar como caracter.
    //puedo evitar esto y borrar el \n haciendo nombre[strlen(nombre)-1] que es la posicion donde se encuentra, lo remplazo por \0
    //con el scanf("[^\n]",nombre); puedo evitar el \n, el " ^ " sirve para excluir,cuando encuentra el valor despues del ^ excluye todo lo demas, en este caso el \n.

    //strcpy(nombre,"juan");//copia una variable a otra, recive dos cadenas. strcpy(destino,origen);

    //si uso STRICMP ignora las mayusculas.
    compara=strcmp(nombre, otroNombre);//Me permite comparar 2 cadenas de caracteres, recive 2 cadenas y devuelve 1 entero.
    //Si da 1, significa que el primero es mas grande q el segundo, en la tabla ascii y si da menor es porque es menor en la tabla ascii que el otro.
    //compara el de la izq con el de la der
    if(compara==0)
    {
        printf("Son iguales.");
    }
    else
    {
        if(compara<0)
        {
            printf("\n%s esta despues que %s", otroNombre,nombre);
        }
        else
        {
            printf("\n%s esta despues que %s", nombre,otroNombre);
        }
    }
    printf("\nCompara: %d", compara);


    strupr(otroNombre);//Pasa a mayuscula toda la cadena. No le puedo pasar un string literal, le tengo q pasar la variable vector para q lo pase a mayuscula.
    printf("\nUsando strupr: %s",otroNombre);
    strlwr(otroNombre);//Pasa a minuscula toda la cadena, es como el anterior. Si no puede convertir algun caracter lo deja pasar asi como esta.
    printf("\nUsando strlwr: %s",otroNombre);

    strcat(otroNombre," ");//Si le concateno un espacio antes de concatenar los nombres, despues quedan juntos pero con un espacio.
    strcat(otroNombre,nombre);//CONCATENA 2 VARIABLES(los une). Puede ser (variable,variable) o (variable,literal)
    printf("\nUsando strcat: %s", otroNombre);

    //puts();//Me permite mostrar alguna variable string, pero no puedo escribir otras cosas dentro como en el print.
    /*
    int i;
    for(i=0;i<strlen(nombre);i++)
    {
        if(tolower(nombre[i])=='a')//Si quiero que muestre solo las a del nombre.
        {
        }
        printf("El nombre es: %c-", nombre[i]);//puedo fraccionar la cadena y mostrar letra por letra.
    }
    */

    /*
    while(nombre[i]!= '\0')//reccore el vector hasta q se encuentre el \0
    {

        i++;
    }
    */

    cantidad = strlen(nombre);//cuenta los caracteres que tengo en la cadena.(le paso la variable q le queremos calcular las letras.)
    printf("\nCantidad de caracteres: %d",cantidad);
    return 0;
}
/**
Ejercicio:

Variables nombre,apellido y apellidoYnombre(maximos caract. 20 c/u.)
la variable apellidoynombre concatena y la puedo modificar.

Gomez, Juan, Luis
*/
