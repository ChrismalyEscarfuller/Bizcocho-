#include <stdio.h>
#include <stdlib.h>//una directiva del procesador que incluye el archivo de cabecera.

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{//abre la funcion.
    float PRE, NPR;//declara dos tipos de variables "PRE" para almacenar el precio original mientras que el "NPR" es tipo almacenar nuevo precio del producto.
    printf("ingrese el precio del producto: ");////es la funcion de entrada y salida que permite mostrar el texto.
    scanf ("%f", &PRE);//lee un numero de punto flotante del usuario y lo almacena en la variable PRE.
    if (PRE < 1500)//esta linea inicia una instuccion if que verifica si el valor de PRE es menor que 1500.
        NPR = PRE * 1.11;//la operacion PRE * 1.11 multiplica el presio original por 1.11 (que es equivalente al 111%).
    else//palabra clave marca el inicio de un bloque de codigo que se ejecutara si mla condicion del if es falsa
        NPR = PRE * 1.08;//;a operacion PRE * 1.08 MULTIPLICA EL PRECIO ORIGINAL POR 1.08 (que es equivalente al 8%).
    printf("\nNuevo promedio del producto: %8.2f", NPR);//es un espicificador de formato que indica un valor que debe imprimirse como un numero de punto flotante con un ancho total de 8 caracteres y 2 decimales.
}//esta llave cierra la funcion main.

