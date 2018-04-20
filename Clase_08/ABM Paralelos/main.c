#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]={1,2,3};//HARDCODEAR.
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo, nombre,nota1,nota2,promedio, tam);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:

            mostrarAlumnos(/*??*/);


            break;

        case 3:
            break;
        case 4:
            break;
        case 5:
            break;



        break;
        }

    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int TAM)
{
    int index=-1;
    int i;

    for(i=0;i<TAM;i++)
    {

    }



    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                //Pedir datos
                cargarDatos(legajos, nombres,nota1,nota2,promedio,tam)

            }
            return index;
}

int cargarDatos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{


}
float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
