/**
 * @file ej1.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief Programa que genera un arreglo aleatorio y los ordena
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
#define max 300
#define min 50

int main()
{
    int n = 0;
    srand(time(NULL));
    printf("Escriba la cantidad de digitos que quiera que tenga el arreglo\n");
    scanf("%d",&n);
    int arr[n];
    printf("El arreglo desordenado es\n");
    ArrAlea(arr,n,max,min);
    printf("\n");
    printf("El arreglo ordenado es\n");
    Burbuja(arr,n);
    return 0;
}

