#include <stdio.h>
#include <stdlib.h>
// al ejecutar el programa se crea un archivo extencion .o es nuestro codigo  en lenguaje maquina.
// en la carpeta bin se encuentra el ejecutable.
//el limpiador establece una conexion con el ejecutable con las "Hojas" en las que esta escrito el codigo por nosotros.
// Si el programa no esta compilado no se crea el archivo .o.
//Error en tiempo de ejecucion: error cometido por nosostros o en  la logica del codigo.
//Error en tiempo de compilacion: Error en la sintaxis del programa escrito.


int main()
{
    //system("pause");                                              //Sirve para crear una pausa en la consola D.O.S. Sirbe para generar una pausa en caso de ejecutar el programa fuera de la IDE.

    char letra;
    int numero;
    char palabra[10];


    printf("Escriba un numero: ");
    scanf("%d", &numero);

    printf("Escriba una letra: ");
    fflush(stdin);                                                  //En linux setbuf(stdin, null); . Sirbe para borrar el buffer.
    scanf("%c", &letra);                                            //La mascara "%c" sirbe para escribir o leer una variable que contenga un caracter.

    printf("Ingrese una palabra: ");
    //fflush(stdin);
    scanf("%s", &palabra);                                           //la mascara "%s" sirbe para escribir o leer una cadena de caracteres(char[]).



    printf("El numero es: %d\nLa letra es: %c", numero, letra);
    printf("La palabra es: %s\n", palabra);











    return 0;
}
