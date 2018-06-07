#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int largo;
    int i;
    Employee* auxEmpleado;

    //arralist representa lista de cosas
    ArrayList* lista;

    //para que apunte a una direccion de memoria le hago u malloc
    lista = al_newArrayList();//le pido memoria al SO con la funcion(la funcion hace un malloc)

    //despues creo un empleado
    Employee* e1;

    //Cargo el empleado.
    e1 = (Employee*)malloc(sizeof(Employee));
    e1->id = 666;
    strcpy(e1->name, "Juan");
    strcpy(e1->lastName, "Gomez");
    e1->isEmpty = 1;

    al_add(lista, e1);//con esta funcion lo que hacemos es referencia la lista al dato en este caso el empleado

    //imprime los elementos de lista
    largo = al_len(lista);
    printf("el tamaño de la lista es:%d\n", largo);

    //imprimo en la consola el empleado con sus datos.
    /*
    auxEmpleado = (Employee*)al_get(lista,0);
    employee_print(auxEmpleado);
    */
    //creo un segundo empleado
    Employee* e2;

    e2 = (Employee*)malloc(sizeof(Employee));
    e2->id = 777;
    strcpy(e2->name, "Carlos");
    strcpy(e2->lastName, "Tgffs");
    e2->isEmpty = 2;

    al_add(lista, e2);

    for(i=0;i<2;i++)
    {
        auxEmpleado = (Employee*)al_get(lista,i);
        employee_print(auxEmpleado);
    }

    al_sort(list, ,)

    return 0;
}
