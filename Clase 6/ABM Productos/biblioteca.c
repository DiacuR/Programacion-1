#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "biblioteca.h"


eProducto pedirProducto(eProveedor listadoProveedores[], int tam)
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Proveedores:\n");
    int i;
    for(i= 0; i < tam; i++)
    {
        printf("%4d %15s\n", listadoProveedores[i].id, listadoProveedores[i].duenio);

    }

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


/*void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}
*/

void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int tamProd,eProveedor listadoProveedores[], int tamProv)
{
    int indice;
    indice= dameLugarLibre(listado, tamProd);
    if(indice != -1)
    {
        listado[indice]= pedirProducto(listadoProveedores,3);
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existeProducto(eProducto unProducto,eProducto lista[])
{

}


int borrarProducto(eProducto lista[], int tam)
{


    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo)==0)
        {
            lista[i].estado = LIBRE;
            loEncontro = 1;
            break;
        }

    }

    if(loEncontro==0)
    {
        printf("Codigo inexistente!!");
    }

    return 0;
}

void inicializarProductos(eProducto listaProductos[],int tam)
{

    float precio[3]= {50, 42.95,9.52};
    char nombre[3][50]= {"Agua 2Lt","Cap. Espacio","Turron"};
    char proveedor[3][50]= {"Coca-Cola","Bagley","Arcor"};
    int idProveedor[3] = {1,2,3};
    char codigoDeBarra[3][13]= {"77951234","77959876","70"};

    char fechaDeVencimiento[3][50]= {"22/10/2020","10/05/2019","15/12/2008"};

    int i;

    for(i=0; i<3; i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }



}

int editarProducto(eProducto lista[], int tam)
{
    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo)==0)
        {
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[i].precio);
            loEncontro = 1;
            break;
        }

    }

    if(loEncontro==0)
    {
        printf("Codigo inexistente!!");
    }

    return 0;
}



void inicializarProveedores(eProveedor listaProveedores[],int tam)
{
    int id[3]= {1, 2, 3};
    char descripcion[3][50]= {"bebidas","galletitas","dulces"};
    char localidad[3][50]= {"Avellaneda","Bahia Blanca","Rio Negro"};

    char cuit[3][13]= {"444","555","666"};

    char duenio[3][50]= {"Coca-Cola","Bagley","Arcor"};

    int i;

    for(i=0; i<tam; i++)
    {
        strcpy(listaProveedores[i].id,id[i]);
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad, localidad[i]);
        strcpy(listaProveedores[i].cuit, cuit[i]);
        strcpy(listaProveedores[i].duenio, duenio[i]);
    }

}

void mostrarArrayProductosConProveedores(eProveedor listaProveedor[],int tamProv, eProducto listaProductos[], int tamProd)
{
    int i, j;

    for(i = 0; i < tamProv; i++)
    {
        mostrarProveedor(listaProveedor[i]);

        for(j = 0; j < tamProd; j++)
        {

            if(listaProductos[i].idProveedor == listaProveedor[j].id )
            {
                mostrarProducto(listaProductos[j]);
            }
        }

    }
}
void mostrarProveedor(eProveedor unProveedor)
{
    printf("%15d %15s %10s %10s %10s \n", unProveedor.cuit, unProveedor.descripcion, unProveedor.duenio, unProveedor.id, unProveedor.localidad);
}
