#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    FILE* pArchivo;

    pArchivo = fopen("texto.txt","w");

    fprintf(pArchivo,"Hola\n");
    fprintf(pArchivo,"chau");

    fclose(pArchivo);
*/

    FILE* pArchivo;
    char p1[20];
    char p2[20];

    pArchivo = fopen("texto.txt","r");///abro modo lectura

    fgets(p1,20,pArchivo);///copio el contenido de pArchivo en p1.
    ///fgets solo lee una linea de texto.
    puts(p1);///imprimo en consola lo que tiene p1.

    fgets(p2,20,pArchivo);
    puts(p2);

    ///EOF(end of file) ->

    /*
    matriz de char almacenar nombres

    guardarlo en archivo y poder leerlos.
    */
    return 0;
}
