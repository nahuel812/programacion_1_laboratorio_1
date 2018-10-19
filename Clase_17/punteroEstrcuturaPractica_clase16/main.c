#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int edad;
    int nota;
} eAlumno;

eAlumno* funcion(void);//las fx pueden devolver punteros.

int main()
{
    eAlumno* pAlumno;

    pAlumno = funcion();
    if(pAlumno == NULL)
    {
        printf("No hay espacio");
    }
    else
    {
        printf("\nEdad:%d -- Nota:%d\n",pAlumno->edad,pAlumno->nota);
    }

    return 0;
}

eAlumno* funcion(void)//esto es un constructor- crea espacio en memoria y inicializa valores.
{
    //eAlumno miAlumno;
    eAlumno* pAlumnoAux;

    //CASTEO A TIPO ESTRUCTURA DE ALUMNO
    pAlumnoAux = (eAlumno*)malloc(sizeof(eAlumno));
    if(pAlumnoAux != NULL)
    {
        /*
        ///hardcodeo
        pAlumnoAux->edad = 18;
        pAlumnoAux->nota = 8;
        */
        printf("\nIngrese edad: ");
        fflush(stdin);
        scanf("%d", &pAlumnoAux->edad);//cuando le pido al usuario y quiero guardar lo guarda en esa direc de memoria.

        printf("\nIngrese nota: ");
        scanf("%d", &pAlumnoAux->nota);

    }

    return pAlumnoAux;
}
