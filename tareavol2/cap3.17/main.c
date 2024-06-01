#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca est�ndar stdlib.h para utilizar funciones est�ndar.

void main(void)//Se declara la funci�n main como void, indicando que no devuelve ning�n valor.
{
    int I, J, NUM, SUM, C = 0;// Se declaran las variables I, J, NUM, SUM y C como enteros. C se inicializa en 0.
    printf("\nIngrese el numero limite: ");//Se imprime el mensaje "Ingrese el n�mero limite: ".
    scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
    for (I = 1; I <= NUM; I++)//Se inicia un bucle for que se repetir� desde I igual a 1 hasta I igual a NUM.
    {
        SUM = 0;// Se inicializa SUM en 0.
        for (J = 1; J <= (I / 2); J++)//Se inicia un bucle for que se repetir� desde J igual a 1 hasta J igual a la mitad de I.
            if ((I % J) == 0)//Si I es divisible por J, se suma J a SUM.
            SUM += J;//
        if (SUM == I)//Si SUM es igual a I, se imprime el mensaje "%d es un n�mero perfecto" donde %d se reemplaza con el valor de I, y se incrementa C en 1.
        {
            printf("\n%d es un numero perfecto", I);//
            C++;//
        }//Se cierra el bucle for.
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);//Se imprime el mensaje "Entre 1 y %d hay %d n�meros perfectos" donde %d se reemplaza con el valor de NUM y %d se reemplaza con el valor de C.
}
