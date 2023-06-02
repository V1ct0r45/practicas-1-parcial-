/**
 * @file prog3.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que imprime un arreglo de tamaño n
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Escriba la cantidad que quiere que tenga el arreglo: ");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Escribe el numero en la posicion %d: ", i);
        scanf("%d", arr +i);
    }

    printf("El arreglo generado es:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *(arr+i));
    }
    
    free(arr);
    return 0;
}
