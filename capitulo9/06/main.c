#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int i, j, n, mat;
float cal, pro;//Declaración de variables enteras i, j, n y mat, y variables de punto flotante cal y pro.
FILE *ar;
if((ar = fopen("arc9.txt", "r")) != NULL)
{
    fscanf(ar, "%d", &n);//Lectura del número de alumnos del archivo y almacenamiento en la variable n.
    for(i=0; i<n; i++)
    {
        fscanf(ar, "%d", &mat);//Lectura de la matrícula del alumno del archivo y almacenamiento en la variable mat.
        printf("%d\t", mat);//Impresión de la matrícula del alumno.
        pro = 0;
        for(j=0; j<5; j++)//Inicio de un bucle for anidado que se ejecutará 5 veces, para procesar las 5 calificaciones de cada alumno.
        {
            fscanf(ar, "%f", &cal);
            pro += cal;
        }
        printf("\t %.2f ", pro / 5);
        printf("\n");
    }
    fclose(ar);
}
else
printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}
