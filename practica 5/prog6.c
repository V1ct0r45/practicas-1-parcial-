/**
 * @file prog6.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-18
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Programa que realiza ordenamiento por burbuja y al fina imprime el resultado
 * 
 * @param arr arreglo aleatorio
 * @param n contador desendente
 */
void burbuja(int arr[], int n);

int main() {
    int arr[10000];
    srand(time(NULL));
    printf("el arreglo desordenado es;\n");
    for (int i = 0; i < 10000; i++) {
        arr[i] = rand() % 100000 + 1;
        printf("%d ", arr[i]);
    }
    printf("\nArreglo ordenado en orden descendente:\n");
    burbuja(arr, 10000);
    return 0;
}

void burbuja(int arr[], int n) {
    if (n == 1) {
        for (int j = 0; j < 10000; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            int aux = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = aux;
        }
    }
    burbuja(arr, n - 1);
}
