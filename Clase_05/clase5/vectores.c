int buscarMaximo(int vec[], int tam)
{
    int maximo=0;
    int i;
    int flag=0;

    //con un for recorro el vector para buscar el maximo.
    for(i=0; i<tam ; i++)
    {
        if(flag==0 || vec[i]>maximo)
        {
            maximo=vec[i];
            flag=1;
        }
    }

    return maximo;
}


void cargarVectores(int vec[], int tam)
{
    int i;

    for(i=0 ; i<tam ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }
}

int buscarValor(int vec[], int tam, int valor)
{
    int index=-1;//el valor a devolver
    int i;

    for(i=0;i<tam;i++)
    {
        if(valor==vec[i])
        {
            index=1;
            break;
        }
    }
    return index;
}

