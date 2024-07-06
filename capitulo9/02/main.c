#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p1;//Declaración de una variable p1 de tipo char que se utilizará para almacenar los caracteres leídos del archivo.
FILE *ar;//Declaración de un puntero ar de tipo FILE, que se utilizará para manejar el archivo.
if ((ar = fopen("arc.txt", "r")) != NULL)//Apertura del archivo "arc.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if
{
    while(!feof(ar))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (!feof(ar)).
    {
        p1 = fgetc(ar);
        putchar(p1);
    }
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
