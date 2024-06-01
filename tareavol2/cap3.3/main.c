#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.

void main(void)//Se declara la función main como void, lo que significa que no devuelve un valor.
{
    float PAG, SPA;//e declaran las variables PAG y SPA como flotantes (float).
    SPA = 0;//Se inicializa la variable SPA con el valor 0.
    printf("ingrese el primer pago\t");//Se imprime el mensaje "ingrese el primer pago" seguido de un tabulador (\t).
    scanf("%f", &PAG);//Se lee una entrada flotante (%f) y se asigna a la variable PAG.
    while (PAG)//Se inicia un bucle while que se repetirá mientras PAG sea diferente de cero.
    // Observa que la condicion es verdadera mientras el pago es diferente de cero.//
    {//
    SPA = SPA + PAG;//Se suma PAG a SPA.
    printf("ingrese el siguiente pago:\t ");//Se imprime el mensaje "ingrese el siguiente pago:" seguido de un tabulador (\t).
    scanf("%f", &PAG);//Se lee una entrada flotante (%f) y se asigna a la variable PAG.
    /* Observa que la proposicion que modifica la condicion es una lectura. *///
}
    printf("\nEl total de pagos del mes es: %.2f", SPA);//Se imprime el mensaje "El total de pagos del mes es: " seguido del valor actual de SPA, con dos decimales (%.2f).

}
