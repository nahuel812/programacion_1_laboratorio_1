#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nombre[50];

}ePersona;

//Getters/Setters(ENCAPSULAMIENTO)
//seter para el id
int setId(ePersona*, int);//recibe el puntero a persona y el valor.
int setNombre(ePersona*, char*);

//geters funciones que permiten mostrar datos
int getId(ePersona*);
char* getNombre(ePersona);//devuelve un puntero a char porque es un string, osea devuelve la direccion de memoria donde lo guarda.

int main()
{
    /*
    hay dos espacios el stack y el heap, que son segmentos distintos donde puedo almacenar datos.

    El heap se caracteriza por ser dinamico, puedo cargarlo con memoria segun lo necesite, es decir le pido memoria.
    En el stack/Pila voy a tener los punteros y en el stack los datos.
    */

    ePersona* pPersona;//un puntero guarda una direccion de memoria.
    //malloc memory alocation.
    //printf("%p \n",pPersona);

    pPersona =(ePersona*)malloc(sizeof(ePersona));// el size me representa la cantidad de memoria que necesito. entonces le paso la estructura y me da la memoria que necesito para le estructura, pero la memoria tiene que ser seguida en la pila, no por separado.
    //tengo que castear a malloc a la estructura. Como que le digo que tiene que devolverme, ya que la funcion malloc devuelve voidlo puedo convertir a cualqueir valor.
    //entonces ala funcion malloc le asigno el puntero persona asi guarda la memoria en la que se encuentra guardado.
    //printf("%p \n",pPersona);

    if(pPersona != NULL)
    {
        if(setId(pPersona, 45)== -1);//LLAMO A LA funcion que apunta a persona y le paso el id 45.
        {
            printf("Id incorrecto!!");
        }
        else
        {
            //pPersona->id = 45;
            //strcpy(pPersona->nombre, "Juan");//copio el nombre en el campo del a estructura.
            //printf("%d--%s", pPersona->id, pPersona->nombre);
            if(setNombre(pPersona, nombre )==-1)
            {
                printf("Nombre incorrecto.");
            }
            else
            {

            }

        }

    }

    return 0;
}
int setId(ePersona* this, int id)//a el this se le asigna el puntero
{
    int ret=-1;
    if(this != NULL && id>0)//valodacion cuando le asigno el id para que sea mayor a 0.
    {
        ret = 1
        this->id = id;//le asigno el di a this
    }
    return ret;
}

int setNombre(ePersona* this, char* nombre)
{
    int ret=-1;
    if(this != NULL && nombre != NULL && (strlen(nombre))>3)//valodacion cuando le asigno el id para que sea mayor a 0.
    {
        ret = 1
        strcpy(this->nombre = nombre);//le asigno el di a this
    }
    return ret;
}
int getId(ePersona*)
{
    int ret=-1;

    if(id != NULL )
    {
        ret= this->id;
    }
    return ret;
}

char* getNombre(ePersona* this)
{
    char* ret = NULL;
    if(this != NULL)//VERIFICO
    {
        ret= this->nombre;//porque el this->nombre me devuelve una direccion de memoria.
    }
    return ret;
}
