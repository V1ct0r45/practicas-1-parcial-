/**
 * @file ej3.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que resuleve un sistema de ecuaciones por matrices
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
    float A[3][3], B[3][1], C[3][1], trans[3][3], adj[3][3], inv[3][3], res[3][1], dete = 0.0;
    printf("ingrese los valores del sistema de ecuaciones que es el sistema de ecuaciones\n");
    ecu(A,B);
    Sistema(A,B);
    tran(A,trans);
    dete=det(A);
    adju(trans,adj);
    inver(dete,adj,inv);
    resInco(C,B,inv);
    Compr(A,C,res);
    ImrimRes(C);
    printf("\n el producto punto de los vectores A y los resultados es: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", res[i][0]);
        printf("\n");
    }


    return 0;
}
