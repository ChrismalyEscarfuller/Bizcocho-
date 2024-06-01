#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.

void main(void)//Se declara la función main como void, lo que significa que no devuelve un valor.
{//
   float PAG, SPA = 0;// Se declaran las variables PAG y SPA como flotantes (float), y se inicializa SPA con el valor 0.
    printf("ingrese el primer pago:\t");// Se imprime el mensaje "ingrese el primer pago:" seguido de un tabulador (\t).
    scanf("%f", &PAG);//Se lee una entrada flotante (%f) y se asigna a la variable PAG.
    /* observa que al utilizar la estructura do-while al menos se necesita un pago.*///
    do//Se inicia un bucle do-while que se repetirá al menos una vez.
    {
        SPA = SPA + PAG;//Se suma PAG a SPA.
        printf("ingrese el siguiente pago -0 para terminar-:\t ");//Se imprime el mensaje "ingrese el siguiente pago -0 para terminar:" seguido de un tabulador (\t).
        scanf("%f", &PAG);//Se lee una entrada flotante (%f) y se asigna a la variable PAG.
    }//Se cierra el bucle do-while.
    while (PAG);//La condición del bucle do-while es que PAG sea diferente de cero.
    printf("\nEl total de pagos del mes es: %.2f", SPA);//Se imprime el mensaje "El total de pagos del mes es: " seguido del valor actual de SPA, con dos decimales (%.2f).
}
