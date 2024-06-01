#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones estándar.

void main(void)// Se declara la función main como void, indicando que no devuelve ningún valor.
{
    int I, NUM;//
    long FAC;//Se declaran las variables I y NUM como enteros y FAC como un entero largo (long).
    printf("\nIngrese el numero: ");//Se imprime el mensaje "Ingrese el numero: ".
    scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
    if(NUM >= 0)//Se evalúa si NUM es mayor o igual a 0.
    {
        FAC = 1;//Se inicializa la variable FAC en 1.
        for (I=1; I <= NUM; I++)//Se inicia un bucle for que se repetirá NUM veces. En cada iteración, se multiplica FAC por I.
            FAC *= I;//Se multiplica FAC por I.
        printf("\el factorial de %d es: %ld", NUM, FAC);//Se imprime el mensaje "el factorial de %d es: %ld" donde %d se reemplaza con el valor de NUM y %ld se reemplaza con el valor de FAC.
    }//Se cierra la condición if.
    else//Se evalúa si NUM es menor que 0.
        printf("\nError en el dato ingresado");//Se imprime el mensaje "Error en el dato ingresado".
}//
