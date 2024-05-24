#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea declara la función principal, que es el punto de entrada del programa.
{
    int NUM;//Esta línea declara una variable denominada NUM de tipo int. \
    printf("Ingrese el numero: ");//Esta se utiliza la printffunción para imprimir un mensaje en la consola solicitando al usuario que ingrese un número.
    scanf("%d", &NUM);//scanffunción para leer un valor entero ingresado por el usuario y almacenarlo en elNUMvariable declarada anteriormente.
    if (NUM == 0)//Esta línea inicia unifdeclaración que verifica una condición.
        printf("\nNulo");//Esta línea se encuentra dentro delifbloque de código de la declaración.
    else//Esta línea marca el comienzo de la que se bloquear,que se ejecuta si la condición en elifafirmación no es cierta.
        printf("\nImpar");//Si la condiciónNUM == 0es falso (lo que significa que el número ingresado no es 0),esta línea se ejecutará.

}
