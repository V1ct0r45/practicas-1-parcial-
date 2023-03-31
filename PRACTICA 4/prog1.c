/**
 * @file prog1.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmai.com)
 * @brief  Programa que hace el ordenamiento por burbuja de n cantidad de numeros aleatorios entre 50 y 300
 * @version 0.1
 * @date 2023-03-29
 *
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define min 50
#define max 300

int n = 0, des = 0, aux = 0;
int arr[max];

int main()
{
    srand(time(NULL));
    printf("Escriba el numero de muestras que quiera que tenga su programa\n");
    scanf("%d", &n);

    printf("\nel arreglo desoordenado es: ");
    // codigo para generar numeros aleatorios e imprimirlos en un rango de 50 a 300, desordenado
    for (int i = 0; i < n; i++) 
    {
        arr[i] = (rand() % (max - min + 1)) + min;
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf("-");
        }
    }
    // ordenamiento por burbuja
    for (int j = 0; j < n; j++) 
    {
        for (int k = 0; k < n - 1 - j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                aux = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = aux;
            }
        }
    }

    // imprime el arreglo ya ordenado
    printf("\n\nel arreglo ordenado es:     ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf("-");
        }
    }

    return 0;
}
