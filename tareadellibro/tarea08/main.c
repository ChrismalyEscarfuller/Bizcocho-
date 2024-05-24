#include <stdio.h>
#include <stdlib.h>

void main(void)//esta línea declara la función principal,que es el punto de entrada del programa.
{
    int MAT, CAR, SEM;//es para almacenar el número de matrícula del estudiante, para almacenar el código de carrera elegido y para almacenar el semestre del estudiante. MAT CARSEM
    float PRO;//Declara una variable de punto flotante PRO para almacenar el promedio académico del estudiante (promedio).
    printf("ingrese matricula: ");//Imprime un mensaje solicitando al usuario que ingrese su número de matrícula.
    scanf("%d", &MAT)//Lee un valor entero del usuario y lo almacena en la MATvariable.
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");//Imprime un mensaje solicitando al usuario seleccionar su carrera ingresando el código correspondiente
    scanf("%d", %CAR);//
    printf("ingrese semestre: ");//Imprime un mensaje solicitando al usuario que ingrese su semestre actual.
    scanf("%d", %SEM);//
    printf("ingrese promedio: ");//Imprime un mensaje solicitando al usuario que ingrese su promedio académico.
    scanf("%f", %PRO);//
    switch(CAR)// Inicia una switchdeclaración que evalúa el valor almacenado en la CARvariable.
    {
    case 1://Si el valor de CARes 1 (Industrial), se ejecuta el siguiente bloque de código.
        if (SEM >= 6 &&PRO >= 8.5//SEM >= 6 este Verifica si el semestre del estudiante es mayor o igual a 6 y PRO >= 8.5 Verifica si el promedio académico del estudiante es mayor o igual a 8. 5.
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Si ambas condiciones son verdaderas, esta línea imprime el número de matrícula, el código de carrera y el promedio académico.
        break;//Sale del bloque actual casepara evitar la ejecución no deseada de casos posteriores.
    case 2://Para estos casos se aplica una lógica similar, con distintos semestres mínimos y requisitos promedio para cada carrera: case 3 case 4.
        if (SEM >= 5 && PRO >= 9.0)//Telemática (semestre >= 5, promedio >= 9. 0)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//
        break;//
    case 3://Informática (semestre >= 6, promedio >= 8, 8)
        if (SEM >= 6 &&PRO >= 8.8)//
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//
        break;//
    case 4://Mecánica (semestre >= 7, promedio >= 9. 0)
        if (SEM >= 7 && PRO >= 9.0)//
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//
        break;//
    default://Si el valor de CARno coincide con ninguno de los códigos de carrera definidos (1-4), se ejecuta este bloque de código.
        ("\n Error en la carrera");// Imprime un mensaje de error indicando que se ingresó un código de carrera no válido.
        break;//Sale de la switchdeclaración por completo.
    }
}
