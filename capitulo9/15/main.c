#include <stdio.h>

void minymay(FILE *);

void main(void)
{
FILE *ap;
if((ap = fopen("arc.txt", "r")) != NULL)//Apertura del archivo "arc.txt" en modo de lectura ("r"). Si el archivo se abre correctamente (es decir, ap no es NULL), se entra al bloque if.
{
    minymay(ap);//Llamada a la función minymay pasando el puntero ap como argumento.
    fclose(ap);
}
else
    printf("No se puede abrir el archivo");//Si el archivo no pudo abrirse correctamente (es decir, ap es NULL), se imprime un mensaje de error.
}

void minymay(FILE *ap1)//Definición de la función minymay que recibe un puntero a FILE como parámetro.
{
char cad[30];//Declaración de un arreglo cad de tipo char con un tamaño máximo de 30 caracteres, para almacenar las líneas leídas del archivo.
int i, mi = 0, ma = 0;
while(!feof(ap1))//Inicio de un bucle while que se ejecutará mientras no se haya alcanzado el final del archivo (feof(ap1)).
{
    fgets(cad,30,ap1);
    i = 0;
    while((cad[i] != '\0'))//Inicio de un bucle while que se ejecutará mientras no se haya llegado al final de la línea (cad[i] != '\0').
    {
        if(islower(cad[i]))//Verificación si el carácter actual en cad[i] es una letra minúscula utilizando la función islower(). Si es así, se incrementa el contador mi.
            mi++;
        else
            if(isupper(cad[i]))
                ma++;
        i++;
    }
}
printf("\n\nNumero de letras minusculas: %d", mi);//Impresión del número de letras minúsculas y mayúsculas encontradas.
printf("\nNumero de letras mayusculas: %d", ma);//Fin de la función minymay().
}
