#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea declara la función principal, que es el punto de entrada del programa.
{
    float X;//Esta línea declara una variable denominada Xde tipo float. Esta variable se utilizará para almacenar el valor calculado en función del valor de entrada Y.
    int Y;// una variable denominada Yde tipo int. Esta variable se utilizará para almacenar el valor entero ingresado por el usuario.
    printf("ingrese el valor de Y: ");//el printff unción para imprimir un mensaje en la consola solicitando al usuario que ingrese un valor entero paraY.
    scanf("%d", &Y);//el scanf función para leer un valor entero ingresado por el usuario y almacenarlo en elYvariable declarada anteriormente.
    if (Y < 0 || Y > 50)//inicia unifdeclaración que verifica una condición usando el||operador (OR lógico).
        X + 0;//Si cual quiera de las condiciones en el if la afirmación es verdadera (es decir Yes menor que 0 o mayor que 50),esta línea se ejecutará.
    else//el comienzo de laelsebloquear,que se ejecuta si se cumplen las condiciones de la primeraifambas afirmaciones no son ciertas.
        if (Y <= 10)//Esta línea inicia un if declaración que verifica una condición, Y <= 10 Esta condición verifica si el valor de Yes menor o igual a 10.
        X = 4 / Y - Y;//Si la condición Y <= 10 es verdad (es decir Yes 10 o menos),esta línea se ejecutará.
    else//comienzo de laelsebloquear,que se ejecuta si la condición en el segundoifafirmación no es cierta.
     if (Y <= 25)//Y <= 25 Esta condición verifica si el valor deYes menor o igual a 25.
        X = pow(Y, 3) - 12;//Si la condición Y <= 25 es verdad (es decirYtiene 25 años o menos),esta línea se ejecutará.
                else//la else bloquear,que se ejecuta si la condición en el tercerifafirmación no es cierta.
                    X = pow(Y, 2) + pow(Y, 3) - 18;//Si la condiciónY <= 25 no es cierto (es decir Yes mayor que 25),esta línea se ejecutará.
    printf("\n\nY = %d\tX = %8.2f", Y, X);//Si la condición Y <= 25 no es verdadera.

}
