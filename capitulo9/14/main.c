#include <stdio.h>
#include <stdlib.h>

void minymay(FILE *);//Declaración de la función minymay que recibe un puntero a FILE como parámetro.

void main(void)
{
char p;
FILE *ar;//Declaración de una variable p de tipo char y un puntero ar de tipo FILE.
if((ar = fopen("arc5.txt", "r")) != NULL)//Apertura del archivo "arc5.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
{
    minymay(ar);
    fclose(ar);
}
else
    printf("No se pudo abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}

void minymay(FILE *arc)
{
int min = 0, may = 0;
char p;//Declaración de variables enteras min y may para contar el número de minúsculas y mayúsculas, respectivamente, y una variable p de tipo char.
while(!feof(arc))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (!feof(arc)).
{
    p = fgetc(arc);
    if(islower(p))
        min++;
    else
        if(isupper(p))
            may++;
}
printf("\nNumero de minusculas: %d", min);//Impresión del número de minúsculas y mayúsculas encontradas en el archivo.
printf("\nNumero de mayusculas: %d", may);//Fin de la función minymay.
}
1
