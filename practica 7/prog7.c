/**
 * @file prog7.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
<<<<<<< HEAD
 * @brief programa que suma los digitos de un arreglo 
=======
 * @brief 
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 *  
 **/

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int main()
{
    int n;
    printf("Ingrese el tamanioo del arreglo: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Escribe el numero en la posicion %d: ", i);
        scanf("%d", arr + i);
    }

    printf("El arreglo generado es:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }

    int *suma = (int*)malloc(sizeof(int));
    *suma = 0;
    for (int i = 0; i < n; i++){
=======

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
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
        *suma = *suma + *(arr + i);
    }

    printf("\nLa suma del arreglo es: %d\n", *suma);

<<<<<<< HEAD
    free(suma);
    free(arr);

=======
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
    return 0;
}
