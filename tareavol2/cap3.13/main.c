#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca est�ndar stdlib.h para utilizar funciones est�ndar.

void main(void)//Se declara la funci�n main como void, indicando que no devuelve ning�n valor.
{
    int I, PRI = 0, SEG = 1, SIG;//Se declaran las variables I, PRI, SEG y SIG como enteros. PRI y SEG se inicializan en 0 y 1, respectivamente.
    printf("\t %d \t %d", PRI, SEG);//Se imprime el mensaje "\t %d \t %d" donde %d se reemplaza con los valores de PRI y SEG.
    for (I = 3; I<= 50; I++)//Se inicia un bucle for que se repetir� desde I igual a 3 hasta I igual a 50.
    {
        SIG = PRI + SEG;//Se calcula el t�rmino siguiente SIG como la suma de PRI y SEG.
        PRI = SEG;//Actualizaci�n de PRI: Se actualiza PRI con el valor actual de SEG.
        SEG = SIG;// de SEG: Se actualiza SEG con el valor actual de SIG.
        printf("\t %d", SIG);// Se imprime el t�rmino actual SIG con un tabulador (\t) antes.
    }
}//Se cierra el bucle for.
