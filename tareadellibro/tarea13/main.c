#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta l�nea declara la funci�n principal, que es el punto de entrada del programa.
{
    float X;//Esta l�nea declara una variable denominada Xde tipo float. Esta variable se utilizar� para almacenar el valor calculado en funci�n del valor de entrada Y.
    int Y;// una variable denominada Yde tipo int. Esta variable se utilizar� para almacenar el valor entero ingresado por el usuario.
    printf("ingrese el valor de Y: ");//el printff unci�n para imprimir un mensaje en la consola solicitando al usuario que ingrese un valor entero paraY.
    scanf("%d", &Y);//el scanf funci�n para leer un valor entero ingresado por el usuario y almacenarlo en elYvariable declarada anteriormente.
    if (Y < 0 || Y > 50)//inicia unifdeclaraci�n que verifica una condici�n usando el||operador (OR l�gico).
        X + 0;//Si cual quiera de las condiciones en el if la afirmaci�n es verdadera (es decir Yes menor que 0 o mayor que 50),esta l�nea se ejecutar�.
    else//el comienzo de laelsebloquear,que se ejecuta si se cumplen las condiciones de la primeraifambas afirmaciones no son ciertas.
        if (Y <= 10)//Esta l�nea inicia un if declaraci�n que verifica una condici�n, Y <= 10 Esta condici�n verifica si el valor de Yes menor o igual a 10.
        X = 4 / Y - Y;//Si la condici�n Y <= 10 es verdad (es decir Yes 10 o menos),esta l�nea se ejecutar�.
    else//comienzo de laelsebloquear,que se ejecuta si la condici�n en el segundoifafirmaci�n no es cierta.
     if (Y <= 25)//Y <= 25 Esta condici�n verifica si el valor deYes menor o igual a 25.
        X = pow(Y, 3) - 12;//Si la condici�n Y <= 25 es verdad (es decirYtiene 25 a�os o menos),esta l�nea se ejecutar�.
                else//la else bloquear,que se ejecuta si la condici�n en el tercerifafirmaci�n no es cierta.
                    X = pow(Y, 2) + pow(Y, 3) - 18;//Si la condici�nY <= 25 no es cierto (es decir Yes mayor que 25),esta l�nea se ejecutar�.
    printf("\n\nY = %d\tX = %8.2f", Y, X);//Si la condici�n Y <= 25 no es verdadera.

}
