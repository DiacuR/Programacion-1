#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include <string.h>

#define T 5

int main()
{
    eEmpleado* unEmpleado;

    unEmpleado = nuevoEmpleadoParametros(100,"pedro",10000);


    if(!mostrarEmpleado(unEmpleado))
    {
        printf("Error al Mostrar empleado");
    }

    if(getLegajo(unEmpleado) == 1001)
    {
        mostrarEmpleado(unEmpleado);
    }

    return 0;
}


eEmpleado* fantasma(int legajo, char* nombre, float sueldo)
{
    eEmpleado empleado;
    empleado.legajo = legajo;
    strcpy(empleado->nombre,nombre);
    empleado ->sueldo = sueldo;

    return &empleado;       //No devuele por que esta en el stack y se desapila del heap
}

