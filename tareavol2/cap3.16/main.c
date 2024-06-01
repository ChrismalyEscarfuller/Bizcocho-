#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones estándar.

void main(void)//Se declara la función main como void, indicando que no devuelve ningún valor.
{
    int I, MAT, MAMAT, MEMAT;//Se declaran las variables I, MAT, MAMAT y MEMAT como enteros.
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;// Se declaran las variables SUM, PRO, CAL, MAPRO y MEPRO como flotantes. MAPRO se inicializa en 0.0 y MEPRO se inicializa en 11.0.
    printf("ingrese la matricula del primer alumno:\t");//Se imprime el mensaje "ingrese la matricula del primer alumno:" seguido de un tabulador (\t).
    scanf("%d", &MAT);//Se lee una entrada entera (%d) y se asigna a la variable MAT.
    while (MAT)//Se inicia un bucle while que se repetirá mientras MAT sea diferente de 0.
    {
        SUM = 0;//Se inicializa SUM en 0.
        for (I = 1; I <= 5; I++)//Se inicia un bucle for que se repetirá 5 veces. En cada iteración, se solicita al usuario ingresar una calificación, se lee y se suma a SUM.
        {
            printf("\tIngrese la calificacion del alumno: ", I);//
            scanf("%f", &CAL);//
            SUM += CAL;//
        }
        PRO = SUM / 5;//Se calcula el promedio PRO dividiendo SUM entre 5.
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO);//Se imprime el mensaje "Matricula: %d \t Promedio: %5.2f" donde %d se reemplaza con el valor de MAT y %5.2f se reemplaza con el valor de PRO.
        if (PRO > MAPRO)// Si PRO es mayor que MAPRO, se actualiza MAPRO con el valor de PRO y MAMAT con el valor de MAT.
        {
            MAPRO = PRO;//
            MAMAT = MAT;//
        }//
        if (PRO < MEPRO)//Si PRO es menor que MEPRO, se actualiza MEPRO con el valor de PRO y MEMAT con el valor de MAT.
        {//
            MEPRO = PRO;//
            MEMAT = MAT;//
        }//
        printf("\n\nIngrese la matricula del siguiente alumno: ");//Se imprime el mensaje "Ingrese la matricula del siguiente alumno: " y se lee una entrada entera (%d) asignándola a MAT.
        scanf("%d", &MAT);
    }
    printf("\n\nAlumno con mayor promedio:\t%d\t\%5.2f", MAMAT, MAPRO);//Se imprime el mensaje "Alumno con mayor promedio: \t %d \t %5.2f" donde %d se reemplaza con el valor de MAMAT y %5.2f se reemplaza con el valor de MAPRO.
    printf("\n\nAlumno con peor promedio:\t%d\t\%5.2f", MAMAT, MAPRO);// Se imprime el mensaje "Alumno con peor promedio: \t %d \t %5.2f" donde %d se reemplaza con el valor de MAMAT y %5.2f se reemplaza con el valor de MAPRO.
}
