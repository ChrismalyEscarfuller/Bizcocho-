#include <stdio.h>
#include <stdlib.h>

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{//abre la funcion.
    float PRO;//declara una variable llamada PRO de tipo float, que se utiliza para almacenar el promedio.
    printf("ingrese el promedio del alumno: ");//es la funcion de entrada y salida que permite mostrar el texto.
    scanf("%f", &PRO);//lee un numero de punto flotante del usuario y lo almacena en la variable PRO.
    if (PRO >= 6.0)//inicia una instruccion if que verifica si el valor ed la variable PRO es mayor o igual que 6.0.
        printf("\nAprobado");//si la condicion if es verdadera, esta linea imprime el mensaje aprobado.
    else//esta palabra clave marca el inicio de un bloque de codigo que se ejecutara si la condicio del if es falsa.
        printf ("\nReprobado");//si la condicion del if es falsa, esta liena imprime el mensaje reprobado en la consola.
}//esta llave cierra la funcion main.

