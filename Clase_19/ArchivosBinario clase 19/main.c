#include <stdio.h>
#include <stdlib.h>


int main()
{
/*
    FILE* pArchivo;

    int numero = 4;

    pArchivo = fopen("archivoBinario.dat","wb");//abro en modo escritura binaria "wb"

    fwrite(&numero,sizeof(int),1,pArchivo);///me permite escribir cualquier cosa dentro del archivo, funciona en binario y en texto.
    ///primer parametro direc de memoria o puntero al dato, segundo param es el tam del tipo de dato, tercero la cantidad de datos de ese tipo, el cuarto el puntero al archivo.

    fclose(pArchivo);///cierro el archivo.
*/

    FILE* pArchivo;
    int numero;

    pArchivo = fopen("archivoBinario.dat","rb");///abro en modo leer binario

    ///Leo el archivo
    fread(&numero,sizeof(int),1,pArchivo);

    ///Cierro el archivo
    fclose(pArchivo);

    ///Muestro el contenido que lei del archivo y lo guarde en la var numero.
    printf("El numero es:%d",numero);

    return 0;
}
