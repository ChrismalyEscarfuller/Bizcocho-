#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.

void main(void)//Se declara la función main como void, lo que significa que no devuelve un valor.
{//
    int I, N, NUM, SUM;// Se declaran las variables I, N, NUM, y SUM como enteros (int).
    SUM = 0;// Se inicializa la variable SUM con el valor 0.
    printf("ingrese el numero de datos\t");//Se imprime el mensaje "ingrese el numero de datos" seguido de un tabulador (\t).
    scanf("%d", &N);//se lee una entrada entera (%d) y se asigna a la variable N.
    for (I=1;  I<=N; I++)//Se inicia un bucle for que se repetirá N veces, con I inicializado en 1 y que aumentará hasta N.
    {//
        printf("ingrese el dato numero %d:\t", I);//Se imprime el mensaje "ingrese el dato numero %d:" seguido de un tabulador (\t), donde %d se reemplaza con el valor actual de I.
        scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
        if (NUM > 0)//Se evalúa si NUM es mayor que 0. Si es verdadero, se suma NUM a SUM.
            SUM = SUM + NUM;//
    }//
    printf("\nLa suma de los numeros positivos es: %d", SUM);//Se imprime el mensaje "La suma de los numeros positivos es: " seguido del valor actual de SUM.

}
