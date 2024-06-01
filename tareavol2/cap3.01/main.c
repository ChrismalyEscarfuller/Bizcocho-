#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.


void main(void)//Se declara la función main como void, lo que significa que no devuelve un valor.
{
    int I;
    float SAL, NOM;//declara dos variables de punto flotante llamadas "SAL" y "NOM". "SAL" se utilizará para almacenar el salario de cada profesor, mientras que "NOM" se utilizará para acumular el total de los salarios.
    NOM = 0;//inicializa la variable "NOM" con el valor 0, preparándola para acumular los salarios.
    for (I=1; I<=5; I++)//Este es el inicio de un bucle for que se ejecutará 5 veces (de I=1 a I=5). En cada iteración, se incrementará el valor de "I" en 1.
    {
       printf("\Ingrese el salario del profesor%d:\t", I);//muestra un mensaje en la pantalla solicitando al usuario que ingrese el salario del profesor número "I".
       scanf("%f", &SAL);//lee el salario ingresado por el usuario y lo almacena en la variable "SAL".
       NOM = NOM + SAL;//Esta línea agrega el salario actual a la variable "NOM", acumulando el total de los salarios.
    }
    printf("\nEl total de la nomina es: %.2f, NOM");//muestra el total de la nómina, que se encuentra almacenado en la variable "NOM". El formato "%.2f" especifica que se mostrarán dos decimales.
}
