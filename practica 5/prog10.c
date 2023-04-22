/**
 * @file prog10.c
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
 * @brief Realiza la serie de fibonacci hasta que la diferencia de razones sea igual o menor a 0.001
 * 
 * @param arr arreglo de fibonacci
 * @param i incremento 
 */
void Fibonacci(int arr[], int i);

int main()
{
    int t1 = 0, t2 = 0;
    int i = 2;
    int arr[100];
    printf("ingrese el primer termino de la serie de fibonacci\n");
    scanf("%d", &t1);
    printf("ingrese el segundo termino de la serie de fibonacci\n");
    scanf("%d", &t2);
    arr[0] = t1;
    arr[1] = t2;
    arr[2] = arr[1] + arr[0];
    printf("%d, %d, %d", arr[0], arr[1], arr[2]);
    Fibonacci(arr, i);
    return 0;
}

void Fibonacci(int arr[], int i)
{
    double n;
    n = ((double) arr[i] / (double) arr[i-1]) - ((double) arr[i-1] / (double) arr[i-2]);
    if (fabs(n) > 0.001)
    {
        arr[i + 1] = arr[i] + arr[i - 1];
        i++;
        printf(", %d", arr[i]);
    }
    Fibonacci(arr, i);
}
