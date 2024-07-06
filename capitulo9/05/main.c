#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int i, j, n, mat;
float cal;//Declaración de variables enteras i, j, n y mat, y una variable de punto flotante cal.
FILE *ar;
printf("\nIngrese el numero de alumnos: ");
scanf("%d", &n);//Lectura del número de alumnos y almacenamiento en la variable n.
if((ar = fopen("arc8.txt", "w")) != NULL)//Apertura del archivo "arc8.txt" en modo de escritura ("w"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
{
    fprintf(ar, "%d ", n);//Escritura del número de alumnos en el archivo apuntado por ar.
    for(i=0; i<n; i++)
    {
        printf("\nIngrese la matricula del alumno %d: ", i+1);//Impresión de un mensaje solicitando la matrícula del alumno.
        scanf("%d", &mat);
        fprintf(ar,"\n%d ", mat);
        for(j=0; j<5; j++)
        {
            printf("\nCalificacion %d: ", j+1);//Impresión de un mensaje solicitando la calificación.
            scanf("%f", &cal);
            fprintf(ar,"%.2f ", cal);
        }
    }
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
