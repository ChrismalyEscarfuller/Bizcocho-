#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.

void main(void)//Se declara la función main como void, lo que significa que no devuelve un valor.
{
    int I = 0;// Se declara la variable I como entero (int) y se inicializa con el valor 0.
    float SAL, PRO, NOM = 0;//Se declaran las variables SAL, PRO y NOM como flotantes (float), y se inicializa NOM con el valor 0.
    printf("ingrese el salario del profesor:\t");//Se imprime el mensaje "ingrese el salario del profesor:" seguido de un tabulador (\t).
    /* observa que al menos se necesita ingresar el salario de un profesor para que no ocurra un error de ejecucion del programa. */
    scanf("%f", &SAL);//Se lee una entrada flotante (%f) y se asigna a la variable SAL.
    do//Se inicia un bucle do-while que se repetirá al menos una vez.
    {
        NOM = NOM + SAL;// Se suma SAL a NOM.
        I = I + 1;//Se incrementa el valor de I en 1.
        printf("ingrese el salario del profesor -0 para terminar- :\t");//Se imprime el mensaje "ingrese el salario del profesor -0 para terminar-:" seguido de un tabulador (\t).
        scanf("%f", &SAL);//Se lee una entrada flotante (%f) y se asigna a la variable SAL.
    }//Se cierra el bucle do-while.
    while (SAL);// La condición del bucle do-while es que SAL sea diferente de cero.
    PRO = NOM / I;//Se calcula el promedio de salarios dividiendo NOM entre I y se asigna a la variable PRO.
    printf("\nNomina: %.2f \t promedio de salarios: %.2f", NOM, PRO);// Se imprime el mensaje "Nomina: %.2f \t promedio de salarios: %.2f" donde %.2f se reemplaza con los valores actuales de NOM y PRO, respectivamente.
}
