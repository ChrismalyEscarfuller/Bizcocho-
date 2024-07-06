#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;//Definición de la estructura alumno que contiene los campos matricula, nombre, carrera y promedio.

void modifica(FILE *);

void main(void)
{
FILE *ar;
if((ar=fopen("ad1.dat", "r+")) != NULL)//Apertura del archivo "ad1.dat" en modo de lectura y escritura ("r+"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
    modifica(ar);
else
    printf("El archivo no se puede abrir");//Si el archivo no puede abrirse, se imprime un mensaje de error.
fclose(ar);
}

void modifica(FILE *ap)
{
int d;
alumno alu;
printf("\nIngrese el numero de registro que desea  modificar: ");//Impresión de un mensaje solicitando al usuario que ingrese el número de registro que desea modificar.
scanf("%d", &d);

fseek(ap, (d-1)*sizeof(alumno), 0);//Posición del puntero de archivo en la posición correspondiente al registro deseado.
fread(&alu, sizeof(alumno), 1, ap);

printf("\nIngrese el promedio correcto del alumno: ");//Impresión de un mensaje solicitando al usuario que ingrese el promedio correcto del alumno.
scanf("%f", &alu.promedio);

fseek(ap, (d-1)*sizeof(alumno), 0)//Posición del puntero de archivo en la posición correspondiente al registro deseado.

fwrite(&alu, sizeof(alumno), 1, ap);//Escritura del registro modificado en el archivo.
}
