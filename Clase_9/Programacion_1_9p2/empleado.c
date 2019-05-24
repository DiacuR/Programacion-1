#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include <string.h>

eEmpleado* nuevoEmpleado()
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado = (eEmpleado*) calloc(sizeof(eEmpleado),1);

    return retornoEmpleado;
}

int mostrarEmpleado(eEmpleado* unEmpleado)
{
    int retorno = 0;
    if(unEmpleado != NULL)
    {
        printf("%d \t %s %2.f", unEmpleado->legajo,unEmpleado->nombre, unEmpleado->sueldo);
        retorno = 1;
    }
    return retorno;
}


eEmpleado* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado = nuevoEmpleado();

    if(retornoEmpleado != NULL)
    {
        setLegajo(retornoEmpleado,legajo);
        strcpy(retornoEmpleado->nombre,nombre);
        retornoEmpleado ->sueldo = sueldo;
    }
}

int setLegajo(eEmpleado* pEmpleado, int legajo)
{
    int esCorrecto = 0;

    if(pEmpleado != NULL && legajo >= 1000)
    {
        pEmpleado->legajo = legajo;
        esCorrecto = 1;
    }
    return esCorrecto;
}

int getLegajo(eEmpleado* pEmpleado)
{
    int retornoLegajo = 0;

    if(pEmpleado != NULL)
    {
        retornoLegajo = pEmpleado->legajo;
    }
    return retornoLegajo;
}


void destructorEmpleado(eEmpleado* pEmpleado)
{
    if(pEmpleado != NULL)
    {
        free(pEmpleado);
    }
}
