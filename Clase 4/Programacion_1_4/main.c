#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define cantAlumnos 3

void listar(char *nombres, char *apellido, int notas[], int edades[], int tamanio);
void getString(char mensaje[], char input[]);
int getStringLetras(char mensaje[], char input[]);
int getStrinNumeros(char mensaje[], char input[]);

void ordenarAlumnos(char [][50], char[][50], int[], int[], int);
void mostrarAlumnos(char [][50], char[][50], int[], int[], int);

int main()
{
    char nombre[cantAlumnos][50] = {"julian","roberto","esteban"};
    char apellido[cantAlumnos][50] = {"perez", "ortiz", "maidana"};
    int edad[cantAlumnos] = {23, 53, 18};
    int nota[cantAlumnos] = {2,7,10};
    char main[][30];

    int i;


    mostrarAlumnos(nombre, apellido, nota, edad, cantAlumnos);
    ordenarAlumnos(nombre, apellido, nota, edad, cantAlumnos);
/*
    for(i = 0; i < cantAlumnos; i++)
    {
        getString("\nIngrese un nombre: ", nombre[i]);
    }
    printf("%s\t %s\t %d\t %d\t \n", "Nombre", "Apellido", "Nota", "Edad");
    for(i = 0; i < cantAlumnos; i++)
    {
        if(nombre[i] != -1)
        {
            printf("%s %s %s %s\n", nombre[i], apellido[i],nota[i], edad[i]);
        }
*/
    }
    return 0;
}

void mostrarAlumnos(char nombre [][50], char apellido[][50], int nota[], int edad[], int tamanio)
{
    int i;

    printf("%s\t %s\t %s\t %s\t \n", "Nombre", "Apellido", "Nota", "Edad");
    for(i = 0; i < cantAlumnos; i++)
    {
        if(nombre[i] != -1)
        {
            printf("%s %s %s %s\n", nombre[i], apellido[i],nota[i], edad[i]);
        }

    }
}


void ordenarAlumnos(char nombre [][50], char apellido[][50], int nota[], int edad[], int tamanio)
{
    int i, j;
    char auxCadena[50];
    int auxEntero;

    for(i = 0; i < cantAlumnos -1; i++)
    {
        for(j = i + 1; j < cantAlumnos; j++)
        {
            if(strcmp(nombre[i],nombre[j]) > 0)
            {
                strcpy(auxCadena, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxCadena);

                strcpy(auxCadena, apellido[i]);
                strcpy(apellido[i], apellido[j]);
                strcpy(apellido[j], auxCadena);

                auxEntero = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEntero;

                auxEntero = nota[i];
                nota[i] = nota[j];
                nota[j] = auxEntero;
            }
        }
    }
}













int getStringLetras(char mensaje[], char input[])
{
    int i;
    char aux[50];
    getString("", aux);

    esSoloLetra(aux);
}


void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", input);
}


int esSoloLetra(char palabra[])
{
    int i = 0;
    while(palabra[i] != '\0')
    {
        if(palabra[i] != " ")
        {
            if(palabra[i] < 'a' || palabra[i] > 'z')
            {
                if(palabra[i] < 'A' || palabra[i] > 'Z')
                {
                    return 0;
                }
            }
        }


       i++;
    }
    return 1;
}

