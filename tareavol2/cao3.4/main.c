#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones como scanf y printf.

int main()//Se declara la función main como int, lo que significa que devuelve un valor entero.
{//
    int NUM;//Se declara la variable NUM como entero (int).
    long CUA, SUC = 0;//Se declaran las variables CUA y SUC como enteros largos (long), y se inicializa SUC con el valor 0.
    printf("Ingrese un numero entero -0 para terminar-:\t");//Se imprime el mensaje "Ingrese un numero entero -0 para terminar:" seguido de un tabulador (\t).
    scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
    while (NUM)//Se inicia un bucle while que se repetirá mientras NUM sea diferente de cero.
        /* observa que la condicion es verdadera mientas el entero es diferente de cero. *///
    {
    CUA = pow (NUM, 2);//Se calcula el cuadrado de NUM utilizando la función pow y se asigna a la variable CUA.
    printf("%d al cubo es %ld", NUM, CUA);//Se imprime el mensaje "%d al cubo es %ld" donde %d se reemplaza con el valor actual de NUM y %ld se reemplaza con el valor actual de CUA.
    SUC = SUC + CUA;//Se suma CUA a SUC.
    printf("\nIngrese un numero entero -0 para terminar-:\t");//Se imprime el mensaje "Ingrese un numero entero -0 para terminar:" seguido de un tabulador (\t).
    scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
    }// Se cierra el bucle while.
    printf("\nLa suma de los cuadros es %ld", SUC);//: Se imprime el mensaje "La suma de los cuadros es %ld" donde %ld se reemplaza con el valor actual de SUC.
