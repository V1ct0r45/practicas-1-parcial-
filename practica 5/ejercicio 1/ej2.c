/**
 * @file ej2.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que realiza operaciones de dos matrices 3*3
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright GPL v3
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcion.h"

int main()
{
    int arrA[3][3],arrB[3][3],suma[3][3],resta[3][3],multi[3][3];
    printf("introudcir los valores de la matriz A\n");
    matrizA(arrA);
    printf("introucir los valores de la matriz B\n");
    matrizB(arrB);
    Suma(arrA,arrB,suma);
    res(arrA,arrB,resta);
    mult(arrA,arrB,multi);
    printf("Su matriz A es\n");
    ImprimMa(arrA);
    printf("Su matriz B es\n");
    ImprimMa(arrB);
    printf("Su matriz suma es\n");
    ImprimMa(suma);
    printf("Su matriz resta es\n");
    ImprimMa(resta);
    printf("Su matriz multiplicacion es\n");
    ImprimMa(multi);
    return 0;
}
