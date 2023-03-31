/**
 * @file prog2_1.c
* @author Ramirez Aguilar Victor Saul (victors.ramireza@gmai.com)
 * @brief  Programa que soliicta 2 matrices 3x3 y hace las operaciones de suma, resta, y multiplicacion
 * @version 0.1
 * @date 2023-03-29
 *
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int arrA[MAX][MAX], arrB[MAX][MAX], suma[MAX][MAX], resta[MAX][MAX], mult2[MAX][MAX], mult1 = 0;

int main()
{
    // ciclo para introducir los valores de la matriz A
    printf("Ingrese los elementos de la matriz A en numeros enteros:\n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &arrA[i][j]);
        }
    }

    // ciclo para introudcir los valores de la matriz B
    printf("Ingrese los elementos de la matriz B en numeros enteros:\n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &arrB[i][j]);
        }
    }

    // ciclo que muetsra la matriz A y B
    printf("   la matriz A es:\t\t   La matriz B es:\n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%5d", arrA[i][j]);
        }
        printf("\t\t\t ");
        for (int k = 0; k < MAX; k++)
        {
            printf("%5d", arrB[i][k]);
        }

        printf("\n");
    }

    // SUMA Y RESTA DE LAS MATRICES A Y B
    printf("la multiplicacion de la matriz A*B es igual a:\t\tLa resta de la matriz A-B es igual a:\t\tLa suma de la matriz A+B es igual a:\n\t\t");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++) // OPERACIONES DE LA MATRIZ
        {
            suma[i][j] = arrA[i][j] + arrB[i][j];
            resta[i][j] = arrA[i][j] - arrB[i][j];
            for (int k = 0; k < MAX; k++)
            {
                mult1 = arrA[i][k] * arrB[k][j];
                mult2[i][j] = mult1 + mult2[i][j];
            }
            printf("%5d", mult2[i][j]); // mult
        }
        printf("\t\t\t\t\t  ");
        for (int l = 0; l < MAX; l++) // IMRPIME LA RESTA DE LA MATRIZ
        {
            printf("%5d", resta[i][l]);
        }
        printf("\t\t\t\t ");
        for (int m = 0; m < MAX; m++) // IMRPIME LA multiplicacion
        {
            printf("%5d", suma[i][m]);
        }
        printf("\n\t\t");
    }
    return 0;
}
