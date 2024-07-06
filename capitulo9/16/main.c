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

void sumypro(FILE *ap1)//Definici�n de la funci�n sumypro que recibe un puntero a FILE como par�metro.
{
char cad[30];//Declaraci�n de un arreglo cad de tipo char con un tama�o m�ximo de 30 caracteres, para almacenar las l�neas le�das del archivo.

int i = 0;
float sum = 0.0, r;
while(!feof(ap1))//Inicio de un bucle while que se ejecutar� mientras no se haya alcanzado el final del archivo (feof(ap1)).
{
    fgets(cad,30,ap1);//Lectura de una l�nea del archivo y almacenamiento en el arreglo cad.
    r = atof(cad);
    if(r)//Si r es diferente de 0 (es decir, si es un n�mero v�lido):
    {
        i++;
        sum += r;
    }
}
printf("\nSuma: %.2f", sum);
if(i)
    printf("\Promedio: %.2f", sum/i);
}
