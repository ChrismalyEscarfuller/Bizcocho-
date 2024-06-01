#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones estándar.

void main(void)// Se declara la función main como void, indicando que no devuelve ningún valor.
{
    int I = 1, B = 0, C;// Se declaran las variables I e B como enteros, C como entero no inicializado.
    double RES;//Se declara la variable RES como un número de punto flotante (double).
    RES = 4.0 / I;//Se calcula el valor inicial de RES como 4.0 dividido por I.
    C = 1;//Se inicializa el contador C en 1.
    while ((fabs (3.1415 - RES)) > 0.0005)//Se inicia un bucle while que se repetirá mientras la diferencia absoluta entre 3.1415 y RES sea mayor que 0.0005.
    {
        I += 2 ;//Se incrementa I en 2 en cada iteración.
        if (B)//
        {
            RES += (double) (4.0 / I);//Si B es verdadero, se suma al RES el valor de 4.0 dividido por I, y se cambia el valor de B a falso.
            B = 0;//
        }
        else//
        {
            RES -= (double) (4.0 / I);//Si B es falso, se resta al RES el valor de 4.0 dividido por I, y se cambia el valor de B a verdadero.
            B = 1;//
        }
        C++;//Se incrementa el contador C en cada iteración.
    }
    printf("\nNumero de terminos:%d", C);// Se imprime el mensaje "Numero de términos: %d" donde %d se reemplaza con el valor final de C.
}
