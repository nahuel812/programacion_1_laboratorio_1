#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    FILE* pArchivo;
    char palabra[20]="hola";

    pArchivo = fopen("texto","w");//creo un txt y abro en modo escritura.

    ///  puedo ponerle mascaras al fprintf y mostrar variables, como con el printf comun.
    fprintf(pArchivo,"%s, como estan?",palabra);//escribo en el puntero al txt el str palabra

    fclose(pArchivo);//cierro el archivo.
*/


    ///PARA ABRIR MODO LECTURA.

    char palabra[20];
    FILE* pArchivo;

    pArchivo = fopen("texto","r");//abro el archivo, si no existe devuelve nulo
    ///Si existe el archivo con "r" lo lee, si no existe el archivo con "r" devuelve nulo.

    ///fgets  sirve para leer una linea y pasarla a la variable palabra.
    fgets(palabra,20,pArchivo);
    ///le paso donde quiero guardar el string, el tamaño, y luego el puntero al archivo donde tiene que leer.

    ///cierro el archivo
    fclose(pArchivo);

    ///para que mustre lo que le pase a la var palabra con el fgets
    puts(palabra);//puts solo muestra 1 variable.


    return 0;
}
