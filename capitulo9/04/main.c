#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char cad[50];//Declaración de un arreglo cad de tipo char con un tamaño máximo de 50 caracteres, para almacenar las líneas leídas del archivo.
FILE *ap;
if((ap=fopen ("arc.txt", "r")) != NULL)//Apertura del archivo "arc.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ap no es NULL), se entra al bloque if.
{
    while(!feof(ap))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (feof(ap)).
    {
        fgets(cad, 50, ap);//Lectura de una línea del archivo y almacenamiento en el arreglo cad.

        puts(cad);
    }
    fclose(ap);
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ap es NULL), se imprime un mensaje de error.
}
