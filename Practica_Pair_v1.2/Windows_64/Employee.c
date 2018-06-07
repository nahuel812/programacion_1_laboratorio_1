#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    Employee* e1;
    Employee* e2;

    e1 = (Employee*)pEmployeeA;
    e2 = (Employee*)pEmployeeB;

    //defino lo que quiero comparar.
    if(strcmp(pEmployeeA->name, pEmployeeB->name)>0)
    {

    }

    return 0;
}


void employee_print(Employee* this)
{
    printf("id:%d, name:%s, lastName:%s , isEmpty: %d\n", this->id, this->name, this->lastName, this->isEmpty);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


