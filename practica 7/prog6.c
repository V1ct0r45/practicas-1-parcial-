/**
 * @file prog6.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
<<<<<<< HEAD
 * @brief programa que genera numeros aleatorios y los ordena en memoria dinamica
=======
 * @brief 
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
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
<<<<<<< HEAD
    printf("Ingrese el tamanio del arreglo: ");
=======
    printf("Ingrese el tamaño del arreglo: ");
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
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
    
<<<<<<< HEAD
    free(arr);
    
    return 0;
}
=======
    
    
    return 0;
}
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
