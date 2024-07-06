#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p1;//Declaración de una variable p1 de tipo char que se utilizará para almacenar los caracteres leídos del teclado
FILE *ar;//Declaración de un puntero ar de tipo FILE, que se utilizará para manejar el archivo.
ar = fopen("libro.txt", "a");//Apertura del archivo "libro.txt" en modo de anexo ("a"). Si el archivo no existe, se creará uno nuevo.
if(ar != NULL)
{
    while((p1 = getchar()) != '\n')//Inicio de un bucle while que lee caracteres del teclado hasta que se presione la tecla Enter ('\n'). Cada carácter leído se almacena en la variable p1.
        fputc(p1, ar);//Escritura del carácter almacenado en p1 en el archivo apuntado por ar.
    fclose;
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
