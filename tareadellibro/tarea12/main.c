#include <stdio.h>
#include <stdlib.h>

void main(void)//Esta línea declara la función principal, que es el punto de entrada del programa.
{
    int T, P, N;//T y Pson de tipo inty se utilizarán para almacenar los valores ingresados ​​por el usuario y N También es de tipo int
    printf("Ingrese los valores de T, P Y N: ");//Esta línea usa la función para imprimir un mensaje en la consola solicitando al usuario que printfingrese tres valores separados por espacios: , y . T P N.
    scanf("%d %d %d", &T, &P, &N);//Esta línea utiliza elscanffunción para leer tres valores enteros ingresados ​​por el usuario y almacenarlos en las variables declaradas anteriormente: T, P,yN.
    if (P != 0)//Esta línea inicia un if declaración que verifica una condición. P != 0: Esta condición verifica si el valor almacenado en P no es igual a 0.
    {
        if (pow(T / P, N) ==  (pow(T, N) / pow(P, N))//Esta línea se encuentra dentro de la primeraifbloque de código de la declaración.
            printf("\nSe comprueba la igualdad");//Esta línea se encuentra dentro del segundoifbloque de código de la declaración.
                else//Esta línea marca el comienzo de la el se bloquear,que se ejecuta si el segundoifLa condición de la declaración no es verdadera.
                    printf("\nNo se comprueba la igualdad");//Esta línea se encuentra dentro delelsebloquear.
        }
else//Esta línea marca el comienzo de laelsebloquear por primera vezifdeclaración,que se ejecuta si el inicialifLa condición de la declaración no es verdadera.
    printf("\nP tiene que ser diferente de cero");//Esta línea se encuentra dentro de la primera el se bloquear, si la inicialifLa condición de la declaración no es verdadera (es decir, el valor dePes 0),esta línea se ejecutará.
}
