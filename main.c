#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 5                                          //No consume recursos  de memoria pero no alcanza a funciones que estan fuera de donde se declara
//

int const LARGO = 10;

int main()
{
    int indice;
    int miArray[TAM];

    //printf("%d--%d", miArray, &miArray);
    mostrarArray(miArray, TAM);
    cargarArray(miArray,TAM);


    indice = buscarValor(miArray, TAM, 5);

    if(indice != -1)
    {
        printf("el indice es: %d", indice);

    }
    else
    {
        printf("\n valor inexisenete!!");
    }


    return 0;
}

void mostrarArray(int array[], int tamanio)
{
    int i;

    for(i = 0; i<tamanio; i++)
    {
        printf("%d\n", array[i]);
    }

}


void cargarArray(int array[], int tamanio)
{
    int i;

    for(i = 0; i<tamanio; i++)
    {
        printf("Ingrese un numero; ");
        scanf("%d", &array[i]);
    }

}


int buscarValor(int array[], int tamanio, int valor)
{
    int indice;
    int i;

    for(i = 0; i<tamanio; i++)
    {
        if(valor == array[i])
        {
            indice = i;
            break;
        }
        else
        {
            indice = -1;
        }
    }
    return indice;
}
