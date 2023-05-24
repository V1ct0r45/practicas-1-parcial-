/**
 * @file prog4.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief 
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
    int n, MasG = 0;

    printf("Escriba la cantidad del arreglo: ");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Escribe el numero en la posicion %d: ", i);
        scanf("%d", arr + i);

        if (*(arr+i) > MasG)
        {
            MasG = *(arr+i);
        }
        
    }

    printf("El numero mas Grande es: %d\n",MasG);

    free(arr);
    return 0;
}
