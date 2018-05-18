#include <stdio.h>
#include <stdlib.h>

int main()
{
    //el archivo se abre, se usa y se cierra el archivo.

    FILE *fp;

    char buffer[100]= "Esto es un texto dentro del fichero.";
    char bufferIn[100];

    //archivos binarios capacidad de bloques de informacion.
    fp= fopen("fichero.txt", "w");//primero abrimos el archivo, le decimos o le pasamos el nombre que queremos para el archivo, si no le digo donde quiero que vaya el archivo lo guarda en la carpeta del compilador, para guardar en un lugar en especifico puedo poner " D:\\clase\\fichero.txt ", "w" para escribir.

    fprintf(fp, buffer);//esto escribe en el texto
    fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
    fprintf(fp, "\nEsto es otro texto dentro del fichero. y el buffer contiene %s",)

    fclose( fp );
    system("pause");
    system("cls");

    //si quiero leerlo
    fp = fopen("fichero.txt", "r");//para abrirlo le paso la direccion o el pat de donde se encuentra el archivo.
    if(fp == NULL)
    {
        printf("Archivo no encontrado.");
    }
    else
    {
        while(!feof(fp))//mientras NO feof(find end of FILE)
        {
            //guarda en bufferIn lo que lee de la consola
            fgets(bufferIn,100,fp);//le paso lo que tiene que leer y el tamaño de lo que tiene que leer y por ultimo el puntero al archivo. el FGETS LEE LA PRIMER LINEA NADA MAS.
            puts(bufferIn);
        }
    }
    fclose( fp );

    //remove(le paso la direccion de donde se encuentra el archivo con su nombre.);//para borrar archivo
    return 0;
}
