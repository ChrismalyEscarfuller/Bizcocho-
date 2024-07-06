#include <stdio.h>
#include <stdlib.h>

int cuenta(char);

void main(void)
{
int res;
char car;//Declaración de variables enteras res y de tipo char car.
printf("\nIngrese el caracter que se va a buscar en el archivo: ");//Impresión de un mensaje solicitando al usuario que ingrese el carácter a buscar en el archivo.
car = getchar();
res = cuenta(car);
if(res != -1)
    printf("\n\nEl carcater %c se encuentra en el archivo %d veces", car, res);
else
    printf("No se pudo abrir el archivo");//Si el resultado de la función cuenta es diferente de -1 (es decir, el archivo se abrió correctamente), se imprime un mensaje indicando cuántas veces se encontró el carácter en el archivo.
}

int cuenta(char car)//Definición de la función cuenta, que recibe un carácter como parámetro y devuelve un entero.
{
int res, con = 0;
char p;
FILE *ar;
if((ar = fopen("arc.txt", "r")) != NULL)//Apertura del archivo "arc.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
{
    while(!feof(ar))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (!feof(ar)).

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
return(res);//Devolución del valor de res.
}

