#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca est�ndar stdlib.h para utilizar funciones est�ndar.

void main(void)//Se declara la funci�n main como void, indicando que no devuelve ning�n valor.
{
    int I = 2, CAM = 1;//
    long SSE = 0;//e inicializaci�n de variables: Se declaran las variables I y CAM como enteros, y SSE como un entero largo (long). I se inicializa en 2, CAM en 1 y SSE en 0.
    while (I <= 2500)//Se inicia un bucle while que se repetir� mientras I sea menor o igual a 2500.
    {//
        SSE = SSE + I;//Se suma el valor actual de I a SSE.
     printf("\t %d", I);//Se imprime el valor actual de I con un tabulador (\t) antes.
     if (CAM)//Se eval�a si CAM es verdadero (diferente de 0). Si es as�, se suma 5 a I y se decrementa CAM en 1.
     {
         I += 5;//
         CAM--;//
     }//
     else//Si CAM es falso (0), se suma 3 a I y se incrementa CAM en 1.
     {
         I += 3;//
         CAM++;//
     }//Se cierra el bucle while
}//
  printf("\nLa suma de la serie es: %ld", SSE);// Se imprime el mensaje "La suma de la serie es: %ld" donde %ld se reemplaza con el valor final de SSE.

