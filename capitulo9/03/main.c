#include <stdio.h>

void main(void)
{
char cad[50];
int res;
FILE *ar;//Declaración de un puntero ar de tipo FILE, que se utilizará para manejar el archivo.
if((ar = fopen("arc.txt", "w")) != NULL)//Apertura del archivo "arc.txt" en modo de escritura ("w"). Si el archivo se abre correctamente (es decir, ar no es NULL), se entra al bloque if.
{
    printf("\nDesea ingresar una cadena de caracteres? Si-1 No-0: ");//Impresión de un mensaje preguntando al usuario si desea ingresar una cadena de caracteres.
    scanf("%d", &res);
    while(res)//Inicio de un bucle while que se ejecutará mientras res sea diferente de 0 (es decir, mientras el usuario desee ingresar más cadenas).
    {
        fflush(stdin);
        printf("Ingrese la cadena: ");//Impresión de un mensaje solicitando al usuario que ingrese una cadena de caracteres.
        gets(cad);
        fputs(cad, ar);
        printf("\nDesea ingresar otra cadena de caracteres? Si-1 No-0:");//Impresión de un mensaje preguntando al usuario si desea ingresar otra cadena.
        scanf("%d", &res);
        if(res)
            fputs("\n", ar);
    }
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");
}
