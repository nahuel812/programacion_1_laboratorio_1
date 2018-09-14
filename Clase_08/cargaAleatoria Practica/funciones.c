#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int nota1, int nota2, int nota3)
{
    float promedio;

    promedio = (float)(nota1+nota2+nota3)/3;
    return promedio;
}

int cargarAlumnos(char nombre[][50], int edad[],char sexo[],int legajo[],int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    int i;
    i = legajo+1
    printf("Ingrese un legajo: ");
    scanf("%d", legajo[i]);

    i = legajo+1

        printf("Ingrese su nombre completo: \n");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese su edad:");
        scanf("%d", &edad[i]);

        printf("Ingrese su sexo:");
        scanf("%c", &sexo[i]);

        printf("Ingrese nota 1: \n");
        scanf("%d",&nota1[i]);

        printf("Ingrese nota 2: \n");
        scanf("%d",&nota2[i]);

        printf("Ingrese nota 3: \n");
        scanf("%d",&nota3[i]);

        promedio[i]=calcularPromedio(nota1[i],nota2[i],nota3[i]);//le paso el valor que tiene i en este momento.

    return 0;
}

int mostrarAlumnos(char nombre[][50], int edad[],char sexo[],int legajo[], int nota1[],int nota2[],int nota3[],float promedio[], int tam)
{
    printf("%20s %6s %6s %6s %8s\n", "Nombre", "Nota 1", "Nota 2", "Nota 3","Promedio");
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\n%20s %6d %6d %6d %f\n",nombre[i],nota1[i],nota2[i],nota3[i],promedio[i]);
    }
}
