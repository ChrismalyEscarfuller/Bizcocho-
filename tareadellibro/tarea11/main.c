#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea declara la función principal, que es el punto de entrada del programa.
{
    int DIS, TIE;//DIS es de tipo int y se utilizará para almacenar la distancia entre las dos ciudades y TIE también es de tipo int y se utilizará para almacenar el tiempo de estancia en la ciudad de destino.
    float BIL;//declara una variable llamadaBILde tipofloat.Esta variable se utilizará para almacenar el monto de la factura calculado.
    printf("Ingrse la distancia entre ciudades y el tiempo de estancia: ");// utiliza elprintfFunción para imprimir un mensaje en la consola solicitando al usuario que ingrese dos valores separados por un espacio
    scanf("%d %d", &DIS, &TIE);//Esta línea utiliza elscanffunción para leer dos valores enteros ingresados ​​por el usuario y almacenarlos en las variables declaradas anteriormente
    if ((DIS*2 > 500) && (TIE > 10))//Esta línea inicia unifdeclaración que verifica dos condiciones usando el&&operador (Y lógico)
        BIL = DIS * 2 * 0.19 * 0.8;//Esta línea se encuentra dentro delifbloque de código de la declaración.
    else//Esta línea marca el comienzo de laelsebloquear,que se ejecuta si se cumplen las condiciones delifambas afirmaciones no son ciertas.
        BIL = DIS * 2 * 0.19;//Si las condiciones en elifambas afirmaciones no son verdaderas (lo que significa que la distancia es 500 o menos o el tiempo de estadía es 10 o menos),esta línea se ejecutará.
    printf("\n\nCosto del billete: %7.2f", BIL);//el printf función para imprimir un mensaje formateado en la consola que muestra el monto de la factura calculado.

}
