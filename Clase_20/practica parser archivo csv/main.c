#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivoDatos;

    char id[20];
    char nombre[20];
    char apellido[20];

    pArchivoDatos = fopen("empleados.csv","r");

    if(pArchivoDatos != NULL)
    {
        while(!feof(pArchivoDatos))
        {
            fscanf(pArchivoDatos,"%[^,],%[^,],%[^\n]\n", id, nombre,apellido);///leo los datos y los guardo en las variables char
            printf("%s--%s--%s\n", id,nombre,apellido);///muestro lo que guarde en las variables
        }
    }
    else
    {
        printf("No se pudo abrir el archivo.\n");
    }
    fclose(pArchivoDatos);

    return 0;
}
