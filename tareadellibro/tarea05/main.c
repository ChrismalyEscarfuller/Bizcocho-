#include <stdio.h>
#include <stdlib.h>//una directiva del procesador que incluye el archivo de cabecera.

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{
    int OP, T;//lo que es OP ipo int para almacenar la opci�n de c�lculo por el usuario y T para almacenar el valor entero ingresado por el usuario.
float RES;
printf("Ingrese la opcion del calculo y el valor entero: ");//es una funci�n de entrada/salida que permite mostrar texto en la pantalla.
    scanf ("%d %d", &OP, &T);//Esta l�nea lee dos n�meros enteros del usuario y los almacena en las variables OP y T.
    switch(OP)//inicia una instrucci�n switch que eval�a el valor de la variable OP y ejecuta el bloque de c�digo correspondiente.
    {
    case 1: RES = T / 5;//Si el valor de OP es 1, esta l�nea calcula el resultado RES dividiendo el valor de T entre 5 y lo almacena en la variable RES.
        break;//este indica el final del caso 1 y hace que el flujo de ejecuci�n salga de la instrucci�n.
    case 2://Si el valor de OP es 2, esta l�nea inicia un nuevo bloque de c�digo para el caso 2.
        RES = pow(T,T);//Esta l�nea calcula el resultado (RES) elevando el valor de T a la potencia de T osea lo almacena en la variable RES.
    /* La funcion pow esta definada en la biblioteca math.h */
    case 3://Si el valor de OP es 3, esta l�nea inicia un nuevo bloque de c�digo para el caso 3.
    case 4://Si el valor de OP es 4, esta l�nea inicia un nuevo bloque de c�digo para el caso 4.
        RES = 6 * T/2;//Tanto para el caso 3 como para el 4, esta l�nea calcula el resultado (RES) multiplicando el valor de T por 6 y dividi�ndolo por 2, y lo almacena en la variable RES
        break;//indica el final del caso 3 o 4 y hace que el flujo de ejecuci�n salga de la instrucci�n switch.
    default://Esta palabra clave marca el bloque de c�digo que se da a establecer si el valor de OP no es ninguno de estos casos definidos anteriormente como (1, 2, 3 o 4).
        RES = 1;//esta l�nea asigna el valor 1 a la variable RES.
        break;//el final del bloque default y hace que el flujo de ejecuci�n salga de la instrucci�n switch.

    }
    printf("\nResultado:   %7.2f", RES);//Esta l�nea imprime un mensaje en la consola mostrando el "Resultado" seguido del valor de RES formateado con dos decimales.

}//esta llave cierra la funcion main.


