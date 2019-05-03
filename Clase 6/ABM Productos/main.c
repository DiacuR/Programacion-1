#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"
/*
Todos los productos con su proveedor
Por c/proveedor sus productos
Por c/ proveedor la cant de porductos
La precio promedio de los productos de c/proveedor
El/los Proveedor/es que `provee mas productos
*/
int main()
{
    //definir array.
    //cargar array.
    //mostrar array.

    int opcion;

    eProducto unProducto;
    eProducto listadoProductos[T];

    eProveedor unProveedor;
    eProveedor listadoProveedores[3];

    //construirArrayProveedor(listadoProveedores,3);
    construirArray(listadoProductos,T);

    inicializarProveedores(listadoProveedores, 3);
    inicializarProductos(listadoProductos,T);
    //mostrarArray(listadoProductos,T);

    mostrarArrayProductosConProveedores(listadoProveedores,3,listadoProductos,T);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, T, listadoProveedores,3);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                mostrarArray(listadoProductos,T);
                break;
        }
    }while(opcion!=10);







    return 0;
}
