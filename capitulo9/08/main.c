#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;//Se define una estructura llamada alumno que contiene los campos matricula, nombre, carrera y promedio.

void escribe(FILE *);

void main(void)
{
FILE *ar;
if((ar = fopen("ad1.dat", "w")) != NULL)
    escribe(ar);
else
    printf("\nEl archivo no se puede abrir");//Apertura del archivo "ad1.dat" en modo de escritura ("w"). Si el archivo se abre correctamente (es decir, ar no es NULL), se llama a la función escribe pasando ar como argumento. Si el archivo no se puede abrir, se imprime un mensaje de error.
fclose(ar);//Cierre del archivo apuntado por ar.
}

void escribe(FILE *ap)
{
alumno alu;
int i = 0, r;
printf("\nDesea ingresar informacion sobre alumno? (Si-1 No-0): ");
scanf("%d", &r);
while(r)
{
    i++;
    printf("Matricula del alumno %d: ", i);
    scanf("%d", &alu.matricula);
    printf("Nombre del alumno %d: ", i);
    fflush(stdin);
    gets(alu.nombre);
    printf("Carrera del alumno %d: ", i);
    scanf("%d", &alu.carrera);
    printf("Promedio del alumno %d: ", i);
    scanf("%f", &alu.promedio);//nicio de un bucle while que se ejecutará mientras r sea diferente de 0 (es decir, mientras el usuario desee ingresar más alumnos).

    fwrite(&alu, sizeof(alumno), 1, ap);//Escritura de los datos del alumno almacenados en alu en el archivo apuntado por ap.

    printf("\nDesea ingresar informacion sobre mas alumnos? (Si-1 No-0): ");
    scanf("%d", &r);//Impresión de un mensaje preguntando al usuario si desea ingresar información sobre más alumnos.

}
}
