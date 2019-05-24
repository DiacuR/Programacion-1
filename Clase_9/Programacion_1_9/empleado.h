#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;
}eEmpleado;

eEmpleado* nuevoEmpleado();
int mostrarEmpleado(eEmpleado*);
eEmpleado* nuevoEmpleadoParametros(int,char*,float);
int setLegajo(eEmpleado*,int);
int getLegajo(eEmpleado*);

#endif // EMPLEADO_H_INCLUDED
