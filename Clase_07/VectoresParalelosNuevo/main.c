#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
float calcularPromedio(int, int, int);

int cargarAlumnos(char[][50], int[],int[],int[],float[], int);//le paso si o si la cant de eleemntos que puede tener nombre.

int mostrarAlumnos(char[][50], int[],int[],int[],float[], int);

int main()
{
    /*
    Vectores paralelos:Para la misma posicion del vector voy a tener los datos de distintos arrays en esa posicion.
    */
//representan   i - j
    char nombre[T][50];//para poder trabajar con vectores paralelos de char e int, necesito utilizar una matriz en nombre. para poder tener cada nombre con su respectivo espacio para el nombre.
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

    /*
    for(i=0; i<T; i++)
    {
        printf("Ingrese su nombre completo: \n");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese nota 1: \n");
        scanf("%d",&nota1[i]);

        printf("Ingrese nota 2: \n");
        scanf("%d",&nota2[i]);

        printf("Ingrese nota 3: \n");
        scanf("%d",&nota3[i]);

        /**FUNCION PROMEDIO*/
        /*
        promedio[i] = (float)(nota1[i]+nota2[i]+nota3[i])/T;//sobre T, porque es secuencial, pero si es aleatoria tendria que hacerlo con un contador.
    }
    */
    /*
    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3","Promedio"); //cabecera de las columnas de los datos a mostrar
    promedio[i]=calcularPromedio(nota1,nota2,nota3);

    for(i=0;i<T;i++)
    {
        //Para identarlo lo que hago es meter un valor entero en medio de la mascara, para que quede justificado y no desordenadas las columnas.
        printf("\n%20s %6d %6d %6d %.2f\n",nombre[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }
    */
    return 0;
}
int cargarAlumnos(char nombre[][50], int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese su nombre completo: \n");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese nota 1: \n");
        scanf("%d",&nota1[i]);

        printf("Ingrese nota 2: \n");
        scanf("%d",&nota2[i]);

        printf("Ingrese nota 3: \n");
        scanf("%d",&nota3[i]);

        promedio[i]=calcularPromedio(nota1,nota2,nota3);
    }
    return 0;
}

int mostrarAlumnos(char nombre[][50], int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3","Promedio"); //cabecera de las columnas de los datos a mostrar

    int i;
    for(i=0;i<tam;i++)
    {
        //Para identarlo lo que hago es meter un valor entero en medio de la mascara, para que quede justificado y no desordenadas las columnas.
        printf("\n%20s %6d %6d %6d %.2f\n",nombre[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }

}
float calcularPromedio(int nota1, int nota2, int nota3)
{
    float promedio;

    promedio = (float)(nota1+nota2+nota3)/3;
    return promedio;
}
