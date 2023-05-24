/**
 * @file prog7.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief 
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 *  
 **/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n;
    int *suma;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

     for (int i = 0; i < n; i++)
    {
        printf("Escribe el numero en la posicion %d: ", i);
        scanf("%d", arr + i);
        
    }

    printf("El arreglo generado es:\n");
    *suma = 0;
    for (int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
        *suma = *suma + *(arr + i);
    }

    printf("\nLa suma del arreglo es: %d\n", *suma);

    return 0;
}
