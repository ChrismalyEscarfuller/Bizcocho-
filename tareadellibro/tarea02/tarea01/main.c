#include <stdio.h>

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{//abre la funcion.
    float PRO;//declara una variable llamada PRO de tipo float, que se utiliza para almacenar el promedio.
    printf("ingrese el promedio del alumno: ");//es la funcion de entrada y salida que permite mostrar el texto.
    scanf("%f", &PRO);//lee un numero de punto flotante del usuario y lo almacena en la variable PRO.
    if (PRO >= 6)//inicia una instruccion if que verifica si el valor de PRO es mayor o igual que 6.
        printf("\nAprobado");//si la condicion de if es verdadera, imprime el mensaje "aprobado" en la consola.
}//marca el final de la funcion.
