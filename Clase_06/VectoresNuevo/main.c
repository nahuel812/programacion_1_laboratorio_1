#include <stdio.h>
#include <stdlib.h>

#define T 5

void cargarVector(int[], int);//un array de enteros
void mostrarVector(int[], int);
void mostrarParesVector(int[], int);
void ordenarVector(int[], int);
void buscarNumeroEnVector(int[],int);

int main()
{
    //variable escalar: solo puedo guardar un unico valor.
    //variable compuestas como los arrays unidimencional que son los vectores,y luego estan las matrices, que son arrays con filas y columnas
    //en los vectores, solo puedo guardar 1 tipo de dato, ej: int guardo solo int.

    //printf("%d",(sizeof(float*)));//el sizeof me duvuelve el tamaño en bytes. Los punteros valen 4bytes

    int miVector[T];//= {2,6,1,3,4}; //con los corchetes indico que la variable es un array, y le digo cuantos elementos va a contener. Son finitos, tienen inicio y fin.
    //ocupa la cantidad de espacio qe le indiquemos. Los vectores tienen subindice, con ese subindice podemos identificar una posicion en especifico.

    //Hay carga secuencial(en secuencia, por cada elemento voy cargando)
    //Carga aleatoria(Cargamos en donde quiera el programador.)
    //tambien hay carga por extencion, que son cuando hardcodeamos los valores en el vector.

    //Se puede inicializar todo en 0 poniendo despues de vector ={}; con solamente las llaves vacia completa con 0.

    //printf("%d", &miVector[2]);//si yo uso el ampersand y le indico una posicion, lo qe hace es darme esa direccion de memoria de la posicion que le indique.


    cargarVector(miVector,T);//en la llamada le paso la direccion de memoria del vector con ampersand o sin, porque guarda la direccion de memoria del primer elemento.
    mostrarVector(miVector,T);
    buscarNumeroEnVector(miVector,T);
    ordenarVector(miVector,T);
    mostrarVector(miVector,T);
    mostrarParesVector(miVector,T);


    /*
    La ARITMETICA DE PUNTEROS lo que hace el array para moverse es multiplicar el indice por el tipo de dato del que esta declarado el vector, y asi puede moverse en el vector.
    int const T=5 siemrpe vale 5
    */
    return 0;
}

void cargarVector(int vector[], int tam)//paso el vector, y el tamaño del vector por convencion.
{
    //PARA CARGAR EL VECTOR
    int i;
    for(i=0; i<tam; i++)
    {
        printf("\nIngrese un numero:");
        scanf("%d", &vector[i]);//lo guardo en la direccion de memoria del vector en cada posicion.
    }
}

void mostrarVector(int vector[], int tam)
{
    //PARA MOSTRAR EL VECTOR.
    int i;
    printf("\nMuestro todos\n");
    for(i=0; i<tam; i++)
    {
        printf("%d\n",vector[i]);
    }
}

void mostrarParesVector(int vector[], int tam)
{
    //MUESTRO LOS PARES DEL VECTOR.
    int i;
    printf("\nLos pares son:\n");
    for(i=0; i<tam; i++)
    {
        if(vector[i]%2==0)//solo mustro los pares.
        {
            printf("%d\n",vector[i]);
        }
    }
}

void buscarNumeroEnVector(int vector[],int tam)
{
    //PARA BUSCAR UN NUMERO
    int i;
    int aux;
    int flag=0;
    printf("\nIngrese un numero a buscar: ");//cuando encuentro algo en particular rompo, si no se encontro hago una bandera.
    scanf("%d",&aux);
    for(i=0; i<T; i++)
    {
        if(aux==vector[i])
        {
            printf("Posicion: %d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0)//uso la bandera para ver si encontro o no encontro el dato que buscaba
    {
        printf("\nNo se encontro el dato.\n");
    }
}

void ordenarVector(int vector[], int tam)
{
    //PARA ORDENAR ELEMENTOS EN EL ARRAY
    //BURBUJEO - SWAP
    int i;
    int j;
    int aux;

    for(i=0;i<tam-1;i++)//termina en T-1 para que no choque con el otro for
    {
        for(j=i+1;j<tam;j++)//empieza en i+1 para que cuando itere no verifique los que ya verifico, siempre empieza 1+ que el otro for.
        {
            if(vector[i]>vector[j]);//CRITERIO DE ORDENAMIENTO, condicion que se cumple para ordenar.
            {
                aux= vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
