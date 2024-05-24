#include <stdio.h>
#include <stdlib.h>

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{//abre la funcion.
    //abre la funcion.
    float PRE, NPR;//en PRE en tipo floar se utiliza para almacenar el precio original y en NPR para almacenar el nuevo precio.
    printf("ingrese el precio del producto: ");//es la funcion de entrada y salida que permite mostrar el texto.
    scanf ("%f", &PRE);//lee el numero del punto flotante del usuario y lo almacena en la variable PRE.
    if (PRE < 1500)//inicia una instruccion if que verifica si el valor de PRE es menor que 1500.
    {//esta llave abre el bloque de codigo que se ejecutara si la condicion del if es verdadera.
        NPR = PRE * 1.11;//calcula el nuevo precop del producto (NPR) multiplicado el precio original (PRE) por 1.11.
        printf("\nNuevo precio: %7.2f", NPR);//es la funcion de entrada y salida utilizada anteriormente, pero esta vez se utiliza para mostar un valor numericoformateado.
    }//cierra el bloque de codigo que se ejecuta si la condicion del if es verdadera.
}//esta llave cierra la funcion main.
