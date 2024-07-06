#include <stdio.h>

void main(void)
{
char p1;//Declaraci�n de una variable p1 de tipo char que se utilizar� para almacenar los caracteres le�dos.
FILE *ar;//Declaraci�n de un puntero ar de tipo FILE, que se utilizar� para manejar el archivo.
ar = fopen("arc.txt", "w");
if(ar != NULL)//Verificaci�n de que el archivo se haya abierto correctamente. Si el puntero ar no es NULL, significa que el archivo se abri� sin problemas.
{
    printf("Escriba su linea d caracteress: \n");
    while((p1=getchar()) != '\n')//Inicio de un bucle while que lee caracteres del usuario hasta que se presione la tecla Enter ('\n'). Cada car�cter le�do se almacena en la variable p1.
    {
        fputc(p1, ar);//Escritura del car�cter almacenado en p1 en el archivo apuntado por ar.
    }
    fclose(ar);//Cierre del bucle while y del archivo apuntado por ar.
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
