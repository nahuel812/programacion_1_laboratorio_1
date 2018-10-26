#include <stdio.h>
#include <stdlib.h>

///Archivos
/* Puedo leer y escribir en el txt, hay archivos de texto y binarios.
    el txt siempre se ve como texto.
    el binario lo puede adaptarse a cualuier tipo, biario o texto.

    Para poder trabajar sobre un arcgivo con la estructura definida FILE
    que es un puntero al archivo

    La gestion del archivo tiene 3 pasos:

    -Lo abro
    -Lo uso
    -Lo cierro
*/

int main()
{
    FILE* pArchivo;//declaro un puntero a file

    pArchivo = fopen("texto.txt","w");//fopen uso para inicializar el puntero, va al arcivo que indique y lo abre, devuelve la direc de memoria del archivo.
    ///el primer parametro se denomina "path" donde se encuentra el archivo, el segundo "modo" es el modo en que voy a abrir el archivo, para escritura o lectura.
    ///si le digo "texto.txt" eso hace que ese archivo se quiera leer o escribir en el directorio del proyecto.
    ///con "w" hacemos que ponga el modo escritura, "a" es para agregar cosas sin que sobreescriba el anterior, "wb" es escritura en binario, "r"para leer
    ///Si no existe archivo lo crea, si existe lo sobreescribe, ya que lo abro en modo escritura "w".
    ///si no encontro el direcctorio que le pase va a devolver nulo, entonces lo verifico.


    ///Para escribir en el archivo puedo usar la funcion fprintf();
    fprintf(pArchivo,"Hola");//Escribo en el archivo hola.
    ///PARAMETROS: Siempre recive el puntero al archivo, luego lo que quiero escribir,

    ///Luego cierro el archivo.
    fclose(pArchivo);

    return 0;
}
