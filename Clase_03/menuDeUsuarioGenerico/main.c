#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*******MENU DE OPCIONES********/

    char opcion;
    do
    {
        printf("(A)Alta usuario\n");
        printf("(B)Baja usuario\n");
        printf("(M)Modificacion usuario\n");
        printf("(S)Salir\n");

        printf("Elija una opcion:\n");
        fflush(stdin);
        scanf("%c", &opcion);
        opcion = toupper(opcion);//convierte un caracter a mayuscula(necesita la biblioteca ctype.h). Recive un parametro y devuelve un parametro.

        switch(opcion)
        {
        case 'A':
            printf("Estoy dando de Alta de usuario.\n");
            break;
        case 'B':
            printf("Estoy dando de Baja de usuario.\n");
            break;
        case 'M':
            printf("Estoy dando de Modificacion de usuario.\n");
            break;
        }//switch
        system("pause");//el pause pausa la ejecucion.
        system("cls");//el cls limpia la consola de windows para que quede prolijo.

    }while(opcion != 'S');

    return 0;
}
