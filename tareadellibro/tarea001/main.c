#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea declara la función principal del programa.
{
    float PRO;//Declarar una variable de tipo float llamada "PRO" para almacenar el promedio del alumno.
    printf("ingrese el promedio del alumno: ");//Imprimir un mensaje solicitando al usuario que ingrese el promedio del alumno.
    scanf("%f", &PRO);//Leer el valor ingresado por el usuario y almacenarlo en la variable "PRO".
    if (PRO >= 6)//Verificar si el promedio del alumno es mayor o igual a 6.
        printf ("\nAprobado");//Si el promedio es mayor o igual a 6, imprimir el mensaje "Aprobado".
}//Esta línea cierra la instrucción condicional if.
