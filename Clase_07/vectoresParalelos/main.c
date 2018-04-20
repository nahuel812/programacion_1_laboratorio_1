#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//funcion que reciba vector de legajos y que reciba un numero de legajo. va a devolver el indice del legajo o va a devolver -1

float calcularPromedio(int,int);
void mostrarAlumnos(int*, char[][30], int*, int*, float*);//al tipo char le indico tambien que tiene un array de 30 bits.
int buscarLegajo(int , int*);

int main()
{
    int legajos[TAM];// todos los vectores tienen que tener la misma capacidad para poder almacenar datos en cada uno
    char nombres[TAM][30];//pongo una segunda dimension que indique cuantos caracteres limites pueden tener. ahi puedo ingresar 3 nombres con un limite de 29 caracteres.
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int i;
    int alumno;

    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un legajo: ");
        scanf("%d", &legajos[i]);

        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);//le paso i asi se guarda en ese espacio del vector.

        printf("\nIngrese nota 1: ");
        scanf("%d", &nota1[i]);

        printf("\nIngrese nota 2: ");
        scanf("%d", &nota2[i]);


        promedio[i]=calcularPromedio(nota1[i],nota2[i]);
        printf("\nEl promedio es de: %2.f \n",promedio[i]);

    }

    mostrarAlumnos(legajos,nombres,nota1,nota2,promedio);//le paso los valores a la funcion para que los muestre.
    /*
    for(i=0;i<3;i++)
    {
        printf("Legajo:%d\n Nombre:%s\n Nota1:%d\n Nota2:%d\n Pormedio:%.2f\n", legajos[i],nombres[i],nota1[i],nota2[i],promedio[i]);
    }
    */

    printf("\nBuscar alumno por legajo: ");
    scanf("%d", &alumno);
    printf("Legajo encontrado indice, no encontrado -1: %d", buscarLegajo(alumno, legajos));

    return 0;
}

//funcion calcular promedio:

float calcularPromedio(int nota1, int nota2)
{
    //no usar for porque no le paso los vectores, le paso los valores directamente y lo calcula en el for del main.
    float promedio;

    promedio=(float)(nota1+nota2)/2;//casteamos la sumatoria de nota1 y nota2.

    return promedio;
}

//funcion mostrarAlumnos:

void mostrarAlumnos(int* legajos,char nombres[TAM][30], int* nota1, int* nota2, float* promedio)// la funcion tiene que mostrar los valores del vector, entonces se lo tengo que pasar.
{
    int i;

    for(i=0;i<TAM;i++)//hago que recorra el vector para mostrar los valores.
    {
        printf("Legajo:%d \n Nombre:%s \n Nota1:%d \n Nota2:%d \n Pormedio:%.2f \n", legajos[i],nombres[i],nota1[i],nota2[i],promedio[i]);
    }

}
/*ejemplo de buscar legajo
int buscarInt(int enteros[], int tam, int cual)
{
    indice = -1;
    int i;
    for(i=0;i<TAM;i++)
    {
        if(enteros[i]==cual)
        {
            indice = i;
            break;//este break rompe el for y retorna al main.
        }

    }
    return indice;
}
*/
int buscarLegajo(int alumno, int* legajos)
{
    int i;
    int index = -1;

    for(i=0;i<TAM;i++)
    {
        if(legajos[i] == alumno)
        {
            index = i;//le paso i porque es el indice donde se encuentra el valor.
            break;
        }
    }
    return index;
}

