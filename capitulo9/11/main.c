#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
}empleado;

void incrementa(FILE *);

void main(void)
{
FILE *ar;
if((ar = fopen("ad5.dat", "r+")) != NULL)//Apertura del archivo "ad5.dat" en modo de lectura y escritura ("r+"). Si el archivo se abre correctamente (es decir, ar no es NULL), se llama a la función incrementa pasando ar como argumento. Si el archivo no se puede abrir, se imprime un mensaje de error.
    incrementa(ar);
else
    printf("\nEl archivo no se puede abrir");

rewind(ar);

fclose(ar);
}

void incrementa(FILE *ap)//Definición de la función incrementa que recibe un puntero a FILE como parámetro.
{
int i, j, t;
float sum;
empleado emple;//Declaración de variables enteras i, j y t, y variables de punto flotante sum y emple de tipo empleado.

t = sizeof(empleado);//Se calcula el tamaño de la estructura empleado y se almacena en la variable t.

fread(&emple, sizeof(empleado), 1, ap);

while(!feof(ap))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (!feof(ap)).
{
    i = ftell(ap) / t;//Se calcula el número de registro actual utilizando ftell() y se almacena en la variable i.

    sum = 0;
    for(j=0; j<12; j++)
        sum += emple.ventas[j];//Se inicializa la variable sum en 0 y se calcula la suma de las ventas de los 12 meses del empleado actual.

    if(sum > 1000000)
    {
        emple.salario = emple.salario * 1.1;//Si la suma de las ventas es mayor a 1,000,000, se incrementa el salario del empleado en un 10%.

        fseek(ap, (i-1)*sizeof(empleado), 0);
        fwrite(&emple, sizeof(empleado), 1, ap);
        fseek(ap, i*sizeof(empleado), 0);//Se posiciona el puntero de archivo al registro anterior utilizando fseek().
    }
    fread(&emple, sizeof(empleado), 1, ap);//Se lee el siguiente registro del archivo y se almacena en la variable emple.
}
}
