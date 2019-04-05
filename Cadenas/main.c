#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int main()
{
    char nombre[6];
    char otroNombre[50] = "jose Perez";
    int largo;
    int compara;

    strupr(otroNombre);                                       //Pasa la cadena a mayuscula
    strlwr(otroNombre);                                       //  "   "    "   " minuscula

    strcat(nombre,otroNombre);                                //Sirve para concatenar variables.

    strcpy(nombre,"pepe");                                    //Agrega valores a vector en el primer campo variable en el segundo variable o constante.
    strncpy(nombre,otroNombre,5);                             //sirve para decir el maximo de caracteres que tiene que guardar para no comprometer el espacio en memoria.


    printf("Ingrese su nombre: ");

    //gets(nombre);                                           //sirve para leer cadena de caracteres
    //fgets(nombre, 50, stdin);                               //Esta funcion sirve para linux. No sirve para calcular el largo de una cadena.
    scanf("%[^\n]", nombre);                                  //Esta es otra opcion que señala que la cadena no se corta con espacios
    //scanf("%s", nombre);

    //largo = strlen("hola");                                  //Indica el largo de una cadena de caracteres.
    //printf("%d", largo);

    //compara = strcmp(nombre,"pepe");                           // Compara cadena de caracteres que si son iguuales devuelbe 0
    compara = stricmp(nombre,"Pepe");                          //Compara   "     "        "     sin importarle si es mayus o minuscula.

    printf("%d", compara);
    //printf("Su nombre es: %s", nombre);

    return 0;
}
