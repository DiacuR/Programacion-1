#include <stdio.h>
#include <stdlib.h>
#define T 5
/*
La idea es dejar los punteros en el stack apuntando a las variables con valores que estan guardadas en el Heap(monton).
*/
int main()
{
    int* x;
    int i;

    x = (int*) calloc(sizeof(int), T);     //reserva espacio en memoria en el heap(monton).
//  x = (int*) calloc(sizeof(int));     //   "      "       "   "     "  "   "      ". Y inicializa en 0 el espacio de memoria.

    if(x != NULL)
    {
        for( i = 0; i < T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", (x + i));
        }
        for( i = 0; i < T; i++)
        {
            printf("%d\n", *(x + i));
        }

        //free(x);        //libera memoria del heap(monton). Y el puntero(x) sigue apuntando al mismo lugar.

        int auxInt;

        auxInt = (int*) realloc(x,sizeof(int)* (T + 5));       //Sirbe para aumentar la cant de espacios de memoria ya reservados por malloc.
                                                                //Si hay espacio libre a continuacion lo toma. Si no busca un nuevo lugar de memoria para guardar el espacio completo.
                                                                //Si no encuentra espacio consecutivo de vuelve NULL. Y eso borraria los datos previamente guardados. Por eso es ideal usar un auxiliar para que no borre los datos iniciales.
        if( auxInt != NULL)
        {
            x = auxInt;
            for( i = T; i < T + 5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", (x + i));
            }
            for( i = 0; i < T + 5; i++)
            {
                printf("%d\n", *(x + i));
            }

            printf("Quito 4: \n");

            x = (int*) realloc(x, sizeof(int) * (T + 5 - 4));

            for( i = 0; i < T + 5; i++)
            {
                printf("%d\n", *(x + i));
            }
        }


    }
    return 0;
}
