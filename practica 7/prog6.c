/**
 * @file prog6.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que genera numeros aleatorios y los ordena en memoria dinamica
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        *(arr + i) = (rand() % 2001)-1000;
        
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int aux = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = aux;
            }
            
        }
        
    }

    printf("Los valores del arreglo ordenado son:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    
    free(arr);
    
    return 0;
}