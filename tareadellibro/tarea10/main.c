#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta l�nea declara la funci�n principal, que es el punto de entrada del programa.
{
    int NUM;//Esta l�nea declara una variable denominada NUM de tipo int. \
    printf("Ingrese el numero: ");//Esta se utiliza la printffunci�n para imprimir un mensaje en la consola solicitando al usuario que ingrese un n�mero.
    scanf("%d", &NUM);//scanffunci�n para leer un valor entero ingresado por el usuario y almacenarlo en elNUMvariable declarada anteriormente.
    if (NUM == 0)//Esta l�nea inicia unifdeclaraci�n que verifica una condici�n.
        printf("\nNulo");//Esta l�nea se encuentra dentro delifbloque de c�digo de la declaraci�n.
    else//Esta l�nea marca el comienzo de la que se bloquear,que se ejecuta si la condici�n en elifafirmaci�n no es cierta.
        printf("\nImpar");//Si la condici�nNUM == 0es falso (lo que significa que el n�mero ingresado no es 0),esta l�nea se ejecutar�.

}
