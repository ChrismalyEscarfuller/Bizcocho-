#include <stdio.h>
#include <stdlib.h>

int cuenta(char);

void main(void)
{
int res;
char car;//Declaraci�n de variables enteras res y de tipo char car.
printf("\nIngrese el caracter que se va a buscar en el archivo: ");//Impresi�n de un mensaje solicitando al usuario que ingrese el car�cter a buscar en el archivo.
car = getchar();
res = cuenta(car);
if(res != -1)
    printf("\n\nEl carcater %c se encuentra en el archivo %d veces", car, res);
else
    printf("No se pudo abrir el archivo");//Si el resultado de la funci�n cuenta es diferente de -1 (es decir, el archivo se abri� correctamente), se imprime un mensaje indicando cu�ntas veces se encontr� el car�cter en el archivo.
}

int cuenta(char car)//Definici�n de la funci�n cuenta, que recibe un car�cter como par�metro y devuelve un entero.
{
int res, con = 0;
char p;
FILE *ar;
if((ar = fopen("arc.txt", "r")) != NULL)//Apertura del archivo "arc.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
{
    while(!feof(ar))//Inicio de un bucle while que se ejecutar� mientras no se haya alcanzado el final del archivo (!feof(ar)).

    {
        p = getc(ar);
        if(p == car)
            con++;
    }
    fclose(ar);
    res = con;
}
else
    res = -1;
return(res);//Devoluci�n del valor de res.
}

