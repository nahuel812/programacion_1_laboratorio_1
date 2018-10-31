#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombres[3][20];

    FILE* pArchivoNombres;
/*
    pArchivoNombres = fopen("nombres.txt","w");///abro

    fprintf(pArchivoNombres,"Raul\n");///modifico
    fprintf(pArchivoNombres,"Brenda\n");
    fprintf(pArchivoNombres,"Anabela\n");

    fclose(pArchivoNombres);///cierro
*/

//////////////////////////////////////////////////////////////////////

    pArchivoNombres = fopen("nombres.txt","r");///abro modo lectura

    ///tomo los nombres y los guardo en la variable
    fgets(nombres[0],20,pArchivoNombres);
    fgets(nombres[1],20,pArchivoNombres);
    fgets(nombres[2],20,pArchivoNombres);

    ///muestro
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s\n",nombres[i]);
    }


    return 0;
}
