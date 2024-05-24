#include <stdio.h>
#include <stdlib.h>

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{
    float P, S, R;//Se declaran tres variables llamadas P, S y R de tipo float para almacenar las ventas de los tres vendedores.
    printf("\nIngrese las ventas de los tres vendedores: ");//Se utiliza la función printf para mostrar un mensaje en la pantalla que solicita al usuario que ingrese las ventas de los tres vendedores.
    scanf("%f %f %f", &P, &S, &R);//Se utiliza la función scanf para leer tres valores float del usuario y almacenarlos en las variables P, S y R, respectivamente.
    if (P > S)//Se inicia una sentencia if que verifica si la venta de P es mayor que la venta de S.
        if (P > R)//Si la condición anterior es cierta, se inicia otra sentencia if que verifica si la venta de P es mayor que la venta de R.
            if (S > R)//Si las dos condiciones anteriores son ciertas, significa que el orden de las ventas es P, S y R. Se utiliza la función printf para mostrar un mensaje en la pantalla con las ventas en orden.
              printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);//Si la condición S > R es falsa, significa que el orden de las ventas es P, R y S. Se utiliza la función printf para mostrar un mensaje en la pantalla con las ventas en orden.
            else//Si la condición P > R es falsa, significa que el orden de las ventas es R, P y S.
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);//
        else//Si la condición P > S es falsa, significa que la venta de S es mayor o igual que la venta de P. Se inicia otra sentencia if para verificar si la venta de S es mayor que la venta de R.
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);//
    else//
    if (S > R)//Si la condición P > R es cierta, significa que el orden de las ventas es S, P y R. Se utiliza la función printf para mostrar un mensaje en la pantalla con las ventas en orden.
        if (P > R)//
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);//
        else//Si la condición P > R es falsa, significa que el orden de las ventas es S, R y P. Se utiliza la función printf para mostrar un mensaje en la pantalla con las ventas en orden.
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);//
    else//
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);//
}
