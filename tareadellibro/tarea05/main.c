#include <stdio.h>
#include <stdlib.h>//una directiva del procesador que incluye el archivo de cabecera.

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{
    int OP, T;//lo que es OP ipo int para almacenar la opción de cálculo por el usuario y T para almacenar el valor entero ingresado por el usuario.
float RES;
printf("Ingrese la opcion del calculo y el valor entero: ");//es una función de entrada/salida que permite mostrar texto en la pantalla.
    scanf ("%d %d", &OP, &T);//Esta línea lee dos números enteros del usuario y los almacena en las variables OP y T.
    switch(OP)//inicia una instrucción switch que evalúa el valor de la variable OP y ejecuta el bloque de código correspondiente.
    {
    case 1: RES = T / 5;//Si el valor de OP es 1, esta línea calcula el resultado RES dividiendo el valor de T entre 5 y lo almacena en la variable RES.
        break;//este indica el final del caso 1 y hace que el flujo de ejecución salga de la instrucción.
    case 2://Si el valor de OP es 2, esta línea inicia un nuevo bloque de código para el caso 2.
        RES = pow(T,T);//Esta línea calcula el resultado (RES) elevando el valor de T a la potencia de T osea lo almacena en la variable RES.
    /* La funcion pow esta definada en la biblioteca math.h */
    case 3://Si el valor de OP es 3, esta línea inicia un nuevo bloque de código para el caso 3.
    case 4://Si el valor de OP es 4, esta línea inicia un nuevo bloque de código para el caso 4.
        RES = 6 * T/2;//Tanto para el caso 3 como para el 4, esta línea calcula el resultado (RES) multiplicando el valor de T por 6 y dividiéndolo por 2, y lo almacena en la variable RES
        break;//indica el final del caso 3 o 4 y hace que el flujo de ejecución salga de la instrucción switch.
    default://Esta palabra clave marca el bloque de código que se da a establecer si el valor de OP no es ninguno de estos casos definidos anteriormente como (1, 2, 3 o 4).
        RES = 1;//esta línea asigna el valor 1 a la variable RES.
        break;//el final del bloque default y hace que el flujo de ejecución salga de la instrucción switch.

    }
    printf("\nResultado:   %7.2f", RES);//Esta línea imprime un mensaje en la consola mostrando el "Resultado" seguido del valor de RES formateado con dos decimales.

}//esta llave cierra la funcion main.


