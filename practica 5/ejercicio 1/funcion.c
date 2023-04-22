/**
 * @file funcion.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief definicion de funciones
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "funcion.h"

void ArrAlea(int arr[], int j, int max, int min)
{
    for (int i = 0; i < j; i++)
    {
        arr[i] = rand() % (max - min + 1) + min;
        printf("%d", arr[i]);
        if (i < j - 1)
        {
            printf(", ");
        }
    }
}

void Burbuja(int arr2[], int n)
{
    int aux;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                aux = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
}


void matrizA(int arrA[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &arrA[i][j]);
        }
    }
}


void matrizB(int arrB[][3]){
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &arrB[i][j]);
        }
    }
}

void ImprimMa(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    } 
}

void Suma(int arr1[][3], int arr2[][3], int sum[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    } 
}

void res(int arr1[][3], int arr2[][3], int res[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = arr1[i][j] - arr2[i][j];
        }
        
    } 
}

void mult(int arr1[][3], int arr2[][3], int mult[][3]){
    int mult1;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mult1 = arr1[i][k] * arr2[k][j];
                mult[i][j] = mult1 + mult[i][j];
            }
        }
        
    } 
}
void ecu(float A[][3], float B[][1]){
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("escriba el valor de x en la ecuacion %d: ", i + 1);
            }
            else if (j == 1)
            {
                printf("escriba el valor de y en la ecuacion %d: ", i + 1);
            }
            else if (j == 2)
            {
                printf("escriba el valor de z en la ecuacion %d: ", i + 1);
            }

            scanf("%f", &A[i][j]);
        }
    }
        for (int i = 0; i < 3; i++)
    {

        printf("Escriba el resultado de la ecuacion %d: ", i + 1);
        scanf("%f", &B[i][0]);
    }
}

void tran(float A[][3], float trans[][3]){
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = A[i][j];
        }
    }
}

float det(float A[][3]){
    float dete;
    dete = (A[0][0] * A[1][1] * A[2][2] + A[1][0] * A[2][1] * A[0][2] + A[2][0] * A[0][1] * A[1][2]) - // Cálculo la matriz determinante de A
          (A[2][0] * A[1][1] * A[0][2] + A[0][0] * A[2][1] * A[1][2] + A[1][0] * A[0][1] * A[2][2]);
    return dete;
}

void adju(float trans[][3], float adj[][3]){
    adj[0][0] = ((+1) * (trans[1][1] * trans[2][2] - trans[2][1] * trans[1][2])); // calcula la adjunta por cofactores en la transpuesta
    adj[1][0] = ((-1) * (trans[0][1] * trans[2][2] - trans[2][1] * trans[0][2]));
    adj[2][0] = ((+1) * (trans[0][1] * trans[1][2] - trans[1][1] * trans[0][2]));
    adj[0][1] = ((-1) * (trans[1][0] * trans[2][2] - trans[2][0] * trans[1][2]));
    adj[1][1] = ((+1) * (trans[0][0] * trans[2][2] - trans[2][0] * trans[0][2]));
    adj[2][1] = ((-1) * (trans[0][0] * trans[1][2] - trans[1][0] * trans[0][2]));
    adj[0][2] = ((+1) * (trans[1][0] * trans[2][1] - trans[2][0] * trans[1][1]));
    adj[1][2] = ((-1) * (trans[0][0] * trans[2][1] - trans[2][0] * trans[0][1]));
    adj[2][2] = ((+1) * (trans[0][0] * trans[1][1] - trans[1][0] * trans[0][1]));
}

void inver(float det,float adj[][3],float inv[][3]){
    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
        {
            inv[i][j] = ((1.0 / det) * adj[i][j]);
        }
    }
}

void resInco(float C[][1],float B[][1],float inv[][3]){
    for (int i = 0; i < 3; i++){
        C[i][0] = 0.0;
    }
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++)
        {
            C[i][0] = (inv[i][j] * B[j][0])+C[i][0];
        }
    }
}

void Compr(float A[][3],float C[][1],float res[][1]){
        for (int i = 0; i < 3; i++) 
    {
        res[i][0] = 0.0;
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][0] = (A[i][j] * C[j][0]) + res[i][0];
        }
    }
}

void ImrimRes(float C[][1]){
    printf("\n La matriz variables : \n"); //imprime los resultaoos 
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("el valor de la variable x es:");
        }
        else if (i == 1)
        {
            printf("el valor de la variable y es:");
        }
        else if (i == 2)
        {
            printf("el valor de la variable z es:");
        }

        printf("%.4f", C[i][0]);
        printf("\n");
    }
}

void Sistema(float A[][3], float B[][1]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.2f", A[i][j]);
            if (j == 0)
            {
                printf("x ");
                if (A[i][j + 1] > 0)
                {
                    printf("+");
                }
                else
                {
                }
            }
            else if (j == 1)
            {
                printf("y ");
                if (A[i][j + 1] > 0)
                {
                    printf("+");
                }
                else
                {
                }
            }
            else if (j == 2)
            {
                printf("z");
            }
        }
        printf(" = %0.2f", B[i][0]);
        printf("\n");
    }
}

