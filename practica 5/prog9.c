/**
 * @file prog9.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que realiza la serie de fibonacci
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief realiza la serie de fibonacci dados los pirmeros dos digitos
 * 
 * @param t1 primer termino 
 * @param t2 segundo termino 
 * @param arr arreglo de la serie
 * @param n tamaño de la serie
 * @param i incremento 
 */
void Fibonacci(int t1, int t2, int arr[], int n, int i);

int main()
{
    int t1 = 0, t2 = 0, i = 2, n = 0;
    int arr[n];
    printf("ingrese el primer termino de la serie de fibonacci\n");
    scanf("%d", &t1);
    printf("ingrese el segundo termino de la serie de fibonacci\n");
    scanf("%d", &t2);
    printf("ingrese el tamanio que quiera que tenga la serie de fibonacci\n");
    scanf("%d", &n);
    arr[0] = t1;
    arr[1] = t2;
    printf("%d, %d, ", arr[0], arr[1]);
    Fibonacci(t1, t2, arr, n, i);
    return 0;
}

void Fibonacci(int t1, int t2, int arr[], int n, int i){
    if (i <= n){
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d, ", arr[i]);
        i++;
    }
    Fibonacci(t1, t2, arr, n, i);
}
