#include <stdio.h>
#include <stdlib.h>

void main(void)//esta línea declara la función principal,que es el punto de entrada del programa.
{
    float RES;//Esta línea declara una variable llamada RES de tipo float.
    int R, T, Q;//Esta línea declara tres variables enteras: R, T,yQ.Estas variables se utilizarán para almacenar los valores ingresados ​​por el usuario.
    printf("Ingrese los valores R, T, Q: ");//Esta línea utiliza el printf Función para imprimir un mensaje en la consola solicitando al usuario que ingrese tres valores separados por espacios: R, T,y Q.
    scanf("%d %d %d", &R, &T, &Q);//Esta línea utiliza el scanf función para leer tres valores enteros ingresados ​​por el usuario y almacenarlos en las variables declaradas anteriormente.
    RES = pow(R, 4) - pow(T, 3) * 4 * pow(Q, 2);//pow(R, 4)Esto calcula Relevado a la potencia de 4, asi con el 3, 4 * pow(Q, 2)Esto calcula 4 multiplicado por Q al cuadrado.
    if (RES < 820)//Esta línea inicia unifdeclaración que verifica una condición.
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);//Esta línea se encuentra dentro delifbloque de código de la declaración.

}
