#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char proveedor[50];
    int idProveedor[3];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];

}eProducto;

typedef struct
{
    int id[50];
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[13];
}eProveedor;

eProducto pedirProducto(eProveedor[], int tam);

void inicializarProductos(eProducto[],int);//OK

void mostrarProducto(eProducto);

//void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int, eProveedor[], int);

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

void inicializarProveedores(eProveedor[],int);

void mostrarProveedor(eProveedor);

void mostrarArrayProductosConProveedores(eProveedor[] ,int, eProducto[], int);

void mostrarProveedorConSusProductos(eProveedor[] ,int, eProducto[], int);
