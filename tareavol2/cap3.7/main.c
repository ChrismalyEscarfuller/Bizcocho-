#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca est�ndar stdlib.h para utilizar funciones est�ndar.

void main(void)// Se declara la funci�n main como void, indicando que no devuelve ning�n valor.
{//
    int I, N;//Se declaran las variables I e N como enteros y LAN, SLA como flotantes. SLA se inicializa en 0.
    float LAN, SLA = 0;//Se solicita al usuario ingresar el n�mero de lanzamientos hasta que N sea mayor o igual a 1 y menor o igual a 11.
    do//Se inicia un bucle do-while que se repetir� al menos una vez.
    {
       printf("ingrese el numero de lanzamientos:\t");//
       scanf("%d", &N);//
    }//
    while (N < 1 || N > 11);//
    /* se utiliza la estructura do-while para verificar que el valr de N sea correcto. */
    for (I=1; I<=N; I++)//Se inicia un bucle for que se repetir� N veces. En cada iteraci�n, se solicita al usuario ingresar el valor de un lanzamiento, se suma al total SLA.
    {
        printf("\nIngrese el lanzamiento %d: ", I);//
        scanf("%f", &LAN);//
        SLA = SLA + LAN;//
    }
    SLA = SLA / N;//Se calcula el promedio de los lanzamientos dividiendo la suma total SLA entre el n�mero de lanzamientos N.
    printf("\nEl promedio de lanzamiento es: %.2f", SLA);//Se imprime el mensaje "El promedio de lanzamiento es: " seguido del valor del promedio con dos decimales (%.2f).
}
