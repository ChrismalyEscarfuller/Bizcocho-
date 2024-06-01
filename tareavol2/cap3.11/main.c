#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones estándar.

void main(void)//Se declara la función main como void, indicando que no devuelve ningún valor.
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;//Se declaran las variables R1, R2, R3, R4 y R5 como enteros y se inicializan en 0.
    float CAL;//Se declara la variable CAL como flotante (float).
    printf("Ingresa la calificacion del alumno: ");//Se imprime el mensaje "Ingresa la calificación del alumno: ".
    scanf("%f", &CAL);//Se lee una entrada flotante (%f) y se asigna a la variable CAL.
    while (CAL != -1)//Se inicia un bucle while que se repetirá mientras CAL sea diferente de -1.
    {
        if (CAL < 4)//Se evalúa si CAL es menor que 4. Si es así, se incrementa R1 en 1.
            R1++;//
        else//
            if (CAL < 6)//Se evalúa si CAL es menor que 6. Si es así, se incrementa R2 en 1.
            R2++;//
        else//
            if (CAL < 8)//Se evalúa si CAL es menor que 8. Si es así, se incrementa R3 en 1.
            R3++;//
        else//
            if (CAL < 9)//Se evalúa si CAL es menor que 9. Si es así, se incrementa R4 en 1.
            R4++;//
        else//
            R5++;//Se evalúa si CAL es mayor o igual a 9. Si es así, se incrementa R5 en 1.
     printf("Ingresa la calificacion del alumno: ");//Se imprime el mensaje "Ingresa la calificación del alumno: ".
     scanf("%f", &CAL);//Se lee una entrada flotante (%f) y se asigna a la variable CAL.
    }//Se cierra el bucle while.
      printf("\n0..3.99 = %d", R1);//Se imprime el mensaje "0..3.99 = %d" donde %d se reemplaza con el valor de R1.
      printf("\n0..5.99 = %d", R2);//Se imprime el mensaje "0..5.99 = %d" donde %d se reemplaza con el valor de R2.
      printf("\n0..7.99 = %d", R3);//Se imprime el mensaje "0..7.99 = %d" donde %d se reemplaza con el valor de R3.
      printf("\n0..8.99 = %d", R4);//Se imprime el mensaje "0..8.99 = %d" donde %d se reemplaza con el valor de R4.
      printf("\n0..10   = %d", R5);//Se imprime el mensaje "0..10 = %d" donde %d se reemplaza con el valor de R5.
}
