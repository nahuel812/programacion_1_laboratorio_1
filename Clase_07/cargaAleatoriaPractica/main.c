#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

#define T 3

/*
A- Cargar los datos.(carga aleatoria)
B- Modificar: Se ingresa el legajo, lo busca y si lo encuentra modifica la nota 1.

C- INFORMES
1- alumnos con promedio 6 o mas.
2- el o los alumnos con maximo promedio.
3- La/s alumna/s con minimo promedio.
4- cantidad de alumnos desaprobados.(se aprueba con 6 o mas en el promedio)
5- cantidad de alumnos aprobados
6- procentaje de arpobados y desaprobados.
7- mostrar los alumnos que se llamen "Juan"
8- ordenar los datos alfabeticamente por nombre
9- ordenar por nombre y ante igualdad de nombre por promedio.
10- mostrar los alumnos cuyo nombre comience con P
11- ordenar alumnos por sexo
12-Realizar un grafico que mustre
    alumnos entre 15-18 (inclusive)
                    19-25(inclusive)
                    26 o mas
*/

int main()
{
    char nombre[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    int edad[T];
    int legajo[T];
    char sexo[T];
    float promedio[T];
    int i;

    cargarAlumnos(nombre,nota1,nota2,nota3,promedio, T);
    mostrarAlumnos(nombre,nota1,nota2,nota3,promedio, T);

    return 0;
}


