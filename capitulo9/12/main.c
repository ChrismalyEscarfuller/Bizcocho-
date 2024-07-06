#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p1;//Declaraci�n de una variable p1 de tipo char que se utilizar� para almacenar los caracteres le�dos del teclado
FILE *ar;//Declaraci�n de un puntero ar de tipo FILE, que se utilizar� para manejar el archivo.
ar = fopen("libro.txt", "a");//Apertura del archivo "libro.txt" en modo de anexo ("a"). Si el archivo no existe, se crear� uno nuevo.
if(ar != NULL)
{
    while((p1 = getchar()) != '\n')//Inicio de un bucle while que lee caracteres del teclado hasta que se presione la tecla Enter ('\n'). Cada car�cter le�do se almacena en la variable p1.
        fputc(p1, ar);//Escritura del car�cter almacenado en p1 en el archivo apuntado por ar.
    fclose;
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
