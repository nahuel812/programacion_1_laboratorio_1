#include <stdio.h>
#include "Curso.h"

void inicializarCursos(eCurso* cursos)
{
    int id[3]={100,101,102};
    char nombre[3][50]={"PHP","C#","VB"};
    int duracion[3]={3,5,6};
    char profesor[3][50]={"Christian","Octavio","Maxi"};

    int i;
    for(i=0;i<3;i++)
    {
        cursos[i].id = id[i];
        cursos[i].duracion = duracion[i];
        strcpy(cursos[i].nombre, nombre[i]);
        strcpy(cursos[i].profesor, profesor[i]);
    }

}

void mostrarCurso(eCurso curso)//recibe 1 curso solo, por eso no es puntero.
{
    printf("%d -- %s -- %s -- %d\n", curso.id,curso.nombre, curso.profesor, curso.duracion);
}

void mostrarTodosLosCursos(eCurso* cursos, int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarCurso(cursos[i]);
    }
}
