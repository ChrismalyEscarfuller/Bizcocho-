#include <stdio.h>
#include <stdlib.h>

void main(void)//esta linea marca el inicio de la funcion main, que es el punto de entrada del programa.
{
    float SAL;//es una variable llamada SAL de tipo float para almacenar el salario del profesor.
    int NIV;//variable NIV de tipo int para almacenar el nivel académico del profesor.
    printf("Ingrese el nivel academico del profeor:  ");//Se utiliza la función printf para mostrar un mensaje en la pantalla que solicita al usuario que ingrese el nivel académico del profesor.
    scanf("%d", &NIV);//Se utiliza la función scanf para leer un valor entero del usuario y almacenarlo en la variable NIV.
    printf("Ingrese el salario:   ");//Se utiliza la función printf para mostrar un mensaje en la pantalla que solicita al usuario que ingrese el salario del profesor.
    scanf("%f", &SAL);//Se utiliza la función scanf para leer un valor float del usuario y almacenarlo en SAL.
    switch(NIV)//Se inicia una sentencia switch que se basa en el valor de la variable NIV.
        printf("Ingrese el salario:   ");//
    scanf("%f", &SAL);//
    switch(NIV)//
{
    case 1: SAL = SAL * 1.035; break;//Si el valor de NIV es 1, se aumenta el salario de la variable SAL en un 3.5%. Luego, se utiliza la instrucción break para salir del caso actual.
    case 2: SAL = SAL * 1.041; break;//Si el valor de NIV es 2, se aumenta el salario de la variable SAL en un 4.1%. Luego, se utiliza la instrucción break para salir del caso actual.
    case 3: SAL = SAL * 1.048; break;//Si el valor de NIV es 3, se aumenta el salario de la variable SAL en un 4.8%. Luego, se utiliza la instrucción break para salir del caso actual.
    case 4: SAL = SAL * 1.053; break;//Si el valor de NIV es 4, se aumenta el salario de la variable SAL en un 5.3%. Luego, se utiliza la instrucción break para salir del caso actual, asi se repite.
}
  printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);//e utiliza la función printf para mostrar un mensaje en la pantalla
}
