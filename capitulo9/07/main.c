#include <stdio.h>
#include <stdlib.h>

void promedio(FILE *);//Declaración de la función promedio que recibe un puntero a FILE como parámetro.

void main(void)
{
FILE *ar;
if((ar = fopen("arc9.txt", "r")) != NULL)
{
    promedio(ar);//Llamada a la función promedio pasando el puntero ar como argumento.
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ar es NULL), se imprime un mensaje de error.
}

void promedio(FILE *ar1)//Definición de la función promedio que recibe un puntero a FILE llamado ar1
{
int i, j, n, mat;
float pro, cal;//Declaración de variables enteras i, j, n y mat, y variables de punto flotante pro y cal
fscanf(ar1, "%d", &n);
for(i=0; i<n; i++)//Inicio de un bucle for que se ejecutará n veces, para procesar los datos de cada alumno.
{
    fscanf(ar1, "%d", &mat);
    printf("%d\t", mat);
    pro = 0;
    for(j=0; j<5; j++)//Inicio de un bucle for anidado que se ejecutará 5 veces, para procesar las 5 calificaciones de cada alumno.
    {
        fscanf(ar1, "%f", &cal);//Cálculo del promedio dividiendo pro entre 5 y almacenamiento en pro.
        pro += cal;
    }
    printf("\t %.2f ", pro / 5);
    printf("\n");
}
}
