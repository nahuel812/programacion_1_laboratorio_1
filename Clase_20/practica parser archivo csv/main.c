#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivoDatos;

    char id[20];
    char nombre[20];
    char apellido[20];
    int i;

    pArchivoDatos = fopen("empleados.csv","r");

    if(pArchivoDatos != NULL)
    {
        do
        {
            fscanf(pArchivoDatos,"%[^,],%[^,],%[^\n]\n", id, nombre,apellido);

        }while(!feof(pArchivoDatos));
    }
    else
    {
        printf("No se pudo abrir el archivo.\n");
    }
    fclose(pArchivoDatos);

    for(i=0;i<10;i++)
    {
        printf("%s--%s--%s\n", id[i],nombre[i],apellido[i]);

    }

    return 0;
}
