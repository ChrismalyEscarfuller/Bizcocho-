#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nombre[20];
    int carerra;
    float promedio;
}alumno;//Se define una estructura llamada alumno que contiene cuatro campos: matricula (de tipo int), nombre (un arreglo de char de tamaño 20), carerra (de tipo int) y promedio (de tipo float).

void lee(FILE *);//Se declara una función llamada lee que recibe un puntero a FILE como parámetro.

void main(void)
{
FILE *ar;
if((ar = fopen("ad1.dat", "r")) != NULL)//Apertura del archivo "ad1.dat" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ar no es NULL), se llama a la función lee pasando ar como argumento.
    lee(ar);
else
    printf("\nEl archivo no se puede abrir");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
fclose(ar);
}

void lee(FILE *ap)
{
alumno alu;
fread(&alu, sizeof(alumno), 1, ap);//Lectura de un registro de tipo alumno del archivo apuntado por ap y almacenamiento en la variable alu.

while(!feof(ap))//Lectura del siguiente registro de tipo alumno del archivo apuntado por ap y almacenamiento en la variable alu.
{
    printf("\nMatricula: %d", alu.matricula);
    printf("\tCarerra: %d", alu.carerra);
    printf("\tPromedio: %f\t ", alu.promedio);
    puts(alu.nombre);
    fread(&alu, sizeof(alumno), 1, ap);
}
}
