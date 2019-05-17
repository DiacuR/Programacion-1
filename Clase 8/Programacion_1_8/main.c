#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** \brief Permite cargar un caracter
 *
 * \param char* El char a cargar
 * \return int [0] -> Si no se pudo cargar el caracter. [1] -> Si pudo cargar el caracter
 *
 */
int getCaracter(char*,char* mensaje, char* msjError, char* min, char* max);
void mostrarLetra(char*);

int main()
{
    /*
    char hola;
    char* pHola = NULL;

    puntero = &hola;
    printf("Ingerese char: ");
    fflush(stdin);
    scanf("%c",pHola);

    printf("Valor: %c", hola);
*/

    char letra;
    int estado = getCaracter(&letra);

    if(estado == 1)
    {
        printf("Dato cargado econ exito");
        mostrarLetra(&letra);
    }
    else
    {
        printf("El dato no fue cargado");
    }



        return 0;
}

void mostrarLetra(char* pLetra)
{
    if(pLetra != NULL)
    {
        printf("%c", *pLetra);
    }

}

int getCaracter(char* pLetra)
{
    int cargo = 0;
    if(pLetra != NULL)
    {
        printf("Ingrese una letra: ");
        fflush(stdin);
        scanf("%c",pLetra);
        cargo = 1:
    }
    return cargo;
}
