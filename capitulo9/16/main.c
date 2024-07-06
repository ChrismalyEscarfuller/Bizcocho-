#include <stdio.h>
#include <stdlib.h>

void sumypro(FILE *);

void main(void)
{
FILE *ap;
if((ap = fopen("arc2.txt", "r")) != NULL)
{
    sumypro(ap);
    fclose;
}
else
    printf("No se puede abrir el archivo");
}

void sumypro(FILE *ap1)//Definición de la función sumypro que recibe un puntero a FILE como parámetro.
{
char cad[30];//Declaración de un arreglo cad de tipo char con un tamaño máximo de 30 caracteres, para almacenar las líneas leídas del archivo.

int i = 0;
float sum = 0.0, r;
while(!feof(ap1))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (feof(ap1)).
{
    fgets(cad,30,ap1);//Lectura de una línea del archivo y almacenamiento en el arreglo cad.
    r = atof(cad);
    if(r)//Si r es diferente de 0 (es decir, si es un número válido):
    {
        i++;
        sum += r;
    }
}
printf("\nSuma: %.2f", sum);
if(i)
    printf("\Promedio: %.2f", sum/i);
}
