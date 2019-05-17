#include <stdio.h>
#include <stdlib.h>


/*
Funcion cargar enteros
Mostrar funcion
Ordenar
Calcule el max valor
Y promedio

todo con punteros
*/


void mostrarPuntero(int*, int);

int main()
{
    int variable[5] = {5,6,3,5,3};
    int* puntero;
    int i;

   mostrarPuntero(variable,5);



    //puntero = &variable;
    //puntero = variable;             //---> Se usa esta. Aunque los tres funcionan igual
    //puntero = &variable[0];

/*
    printf( "%d", puntero + 0);//variable
    printf( "%d", puntero + 1);//&variable[1]
    printf( "%d", puntero + 2);//...
    printf( "%d", puntero + 3);//..


    printf( "%d", *(puntero + 0));//variable
    printf( "%d", *(puntero + 1));//&variable[1]
    printf( "%d", *(puntero + 2));//...
    printf( "%d", *(puntero + 3));//..
*/
    return 0;
}


void mostrarPuntero(int* pArray, int tam)
{
    for(i = 0; i<5; i++)
    {
        printf("%d\n", *(pArray + i));
    }
}
