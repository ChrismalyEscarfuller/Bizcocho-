#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca est�ndar stdlib.h para utilizar funciones est�ndar.

void main(void)//Se declara la funci�n main como void, indicando que no devuelve ning�n valor.
{//
    int NUM;//Se declara la variable NUM como entero (int).
    printf("ingresa el numero para calcular la serie: ");//Se imprime el mensaje "ingresa el n�mero para calcular la serie: ".
    scanf("%d", &NUM);//Se lee una entrada entera (%d) y se asigna a la variable NUM.
    if (NUM > 0)//Se eval�a si NUM es mayor que 0.
    {
        printf("\nSerie de uLAM\n");//Se imprime el t�tulo "Serie de uLAM".
        printf("%d \t", NUM);//Se imprime el primer t�rmino de la serie, que es NUM.
        while (NUM != 1)// Se inicia un bucle while que se repetir� mientras NUM sea diferente de 1.
        {
            if (pow(-1, NUM) > 0)//Se eval�a si el resultado de pow(-1, NUM) es mayor que 0. Si es as�, se divide NUM entre 2.
                NUM = NUM / 2;//
            else//
                NUM = NUM * 3 + 1;//Si pow(-1, NUM) es menor o igual a 0, se multiplica NUM por 3 y se suma 1.
            printf("%d \t", NUM);//Se imprime el t�rmino actual de la serie.
        }//Se cierra el bucle while.
    }
    else//
        printf("\n NUM debe ser un entero positivo");//Si NUM no es mayor que 0, se imprime el mensaje "NUM debe ser un entero positivo".
}
