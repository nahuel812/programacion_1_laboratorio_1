#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ESTRUCTURAS DE DATOS: cuando creamos estructuras creamos un tipo de dato nuevo, como int float char etc.

//van en el .h
typedef struct//variable tipo structura
{
    //estos son campos o atributos.
    int legajo;
    char nombre[50];
    float promedio;
    char direccion[50];
}eAlumno;//no guarda datos, es como un "prototipo",

//funcion muestra una estructura alumno
void mostrarAlumno(eAlumno alumnoParametro);

//creo una funcion que devuelve un alumno.
eAlumno cargarAlumno(void);

int main()
{
    //eAlumno miAlumno;//declaro una variable de tipo "eAlumno", que va acontener las variables que tiene la estructura
    //la estructura ocupa el espacio de las variables que tiene dentro.
    //eAlumno miAlumno={14,"pepe",3.45};//Se puede inicializar por extencion, harcodear la estructura.

    //eAlumno miAlumno;
    eAlumno otroAlumno;
    /*//POR igualacion entro al campo y lo asigno a algo.
    miAlumno.legajo = 159;
    strcpy(miAlumno.nombre, "Juan");
    miAlumno.promedio = 4.47;
    */
    //otroAlumno = miAlumno; //COPIA TODOS LOS VALORES DE LA ESTRUCTURA ALUMNO A OTROALUMNO. Ya que tiene la propiedad de igualacion.

    otroAlumno = cargarAlumno();
    //printf("%d--%s--%f", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio);//Con el "." puedo entrar en los campos de la estructura.
    mostrarAlumno(otroAlumno);//A la funcion le paso miAlumno, le paso toda la estructura.

    return 0;
}
/*
Las estructuras siempre se pasan por valor.
-Tienen la propiedad de copiarse entre si, de la asignacion, se pueden igualar entre si si son iguales sus variables.
-No se pueden comparar con algo.
*/

/******FUNCION MOSTRAR ALUMNO******/
void mostrarAlumno(eAlumno alumnoParametro)//se copia la estructura miAlumno a alumno parametro.
{
     printf("%d--%s--%f--%s", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.promedio, alumnoParametro.direccion);
}

/****FUNCION CARGAR ALUMNOS******/
eAlumno cargarAlumno()//DEVUELVE UNA ESTRUCTURA DE TIPO eAlumno
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Promedio: ");
    scanf("%f", &miAlumno.promedio);

    printf("Ingrese direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

    return miAlumno;
}
