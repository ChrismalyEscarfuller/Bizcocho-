#include <stdio.h>
#include <stdlib.h>//Se incluye la biblioteca estándar stdlib.h para utilizar funciones estándar.

void main(void)//Se declara la función main como void, indicando que no devuelve ningún valor.
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;//Se declaran las variables VOT, C1, C2, C3, C4, C5, NU y SVO como enteros. C1, C2, C3, C4, C5 y NU se inicializan en 0, y SVO se inicializa en 0.
    float PO1, PO2, PO3, PO4, PO5, PON;// Se declaran las variables PO1, PO2, PO3, PO4, PO5 y PON como flotantes.
    printf("Ingrese el primer voto: ");//Se imprime el mensaje "Ingrese el primer voto: ".
    scanf("%s", &VOT);//Se lee una entrada de tipo cadena (%s) y se asigna a la variable VOT.
    while (VOT)//Se inicia un bucle while que se repetirá mientras VOT sea diferente de 0.
    {
        switch(VOT)//Se evalúa el valor de VOT y se incrementa C1 en 1 si es igual a 1.
        {
            case 1: C1++; break;//
            case 2: C2++; break;//Se evalúa el valor de VOT y se incrementa C2 en 1 si es igual a 2.
            case 3: C3++; break;//Se evalúa el valor de VOT y se incrementa C3 en 1 si es igual a 3.
            case 4: C4++; break;//Se evalúa el valor de VOT y se incrementa C4 en 1 si es igual a 4.
            case 5: C5++; break;//Se evalúa el valor de VOT y se incrementa C5 en 1 si es igual a 5.
            default: NU++; break;//Se evalúa el valor de VOT y se incrementa NU en 1 si no es ninguno de los casos anteriores.
        }//
        printf("ingrese el siguiente voto -0 para terminar-: ");//Se imprime el mensaje "ingrese el siguiente voto -0 para terminar-: ".
        printf("%d", &VOT);//Se imprime el valor actual de VOT.
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU;// Se calcula el total de votos SVO como la suma de C1, C2, C3, C4, C5 y NU.
    P01 = ((float) C1 / SVO) * 100;//Se calcula el porcentaje de votos para el candidato 1 PO1 como la división de C1 entre SVO y se multiplica por 100.
    P02 = ((float) C2 / SVO) * 100;//Se calcula el porcentaje de votos para el candidato 2 PO2 como la división de C2 entre SVO y se multiplica por 100.
    P03 = ((float) C3 / SVO) * 100;//Se calcula el porcentaje de votos para el candidato 3 PO3 como la división de C3 entre SVO y se multiplica por 100.
    P04 = ((float) C4 / SVO) * 100;//Se calcula el porcentaje de votos para el candidato 4 PO4 como la división de C4 entre SVO y se multiplica por 100.
    P05 = ((float) C5 / SVO) * 100;//Se calcula el porcentaje de votos para el candidato 5 PO5 como la división de C5 entre SVO y se multiplica por 100.
    P0N = ((float) NU / SVO) * 100;//Se calcula el porcentaje de votos nulos PON como la división de NU entre SVO y se multiplica por 100.
    printf(“\nTotal de votos: %d”, SVO);// Se imprime el mensaje "Total de votos: %d" donde %d se reemplaza con el valor de SVO.
    printf(“\n\nCandidato 1: %d votos -- Porcentaje: %5.2f”, C1, PO1);//Se imprime el mensaje "Candidato 1: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de C1 y %5.2f se reemplaza con el valor de PO1.
    printf(“\nCandidato 2: %d votos -- Porcentaje: %5.2f”, C2, PO2);//Se imprime el mensaje "Candidato 2: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de C2 y %5.2f se reemplaza con el valor de PO2.
    printf(“\nCandidato 3: %d votos -- Porcentaje: %5.2f”, C3, PO3);//Se imprime el mensaje "Candidato 3: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de C3 y %5.2f se reemplaza con el valor de PO3.
    printf(“\nCandidato 4: %d votos -- Porcentaje: %5.2f”, C4, PO4);//Se imprime el mensaje "Candidato 4: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de C4 y %5.2f se reemplaza con el valor de PO4.
    printf(“\nCandidato 5: %d votos -- Porcentaje: %5.2f”, C5, PO5);//Se imprime el mensaje "Candidato 5: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de C5 y %5.2f se reemplaza con el valor de PO5.
    printf(“\nNulos:       %d votos -- Porcentaje: %5.2f”, NU, PON);// Se imprime el mensaje "Nulos: %d votos -- Porcentaje: %5.2f" donde %d se reemplaza con el valor de NU y %5.2f se reemplaza con el valor de PON.
}
