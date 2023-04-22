/**
 * @file prog2.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que genera 20 numeros aleatorios 
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * @brief 
 * 
 * @param n es el arreglo de 20 numeros 
 * @param j es el contador para los numeros aleatorios
 */
void NumAleatorios(int n[], int j);

int main()
{
    int n[20], j = 20;
    srand(time(NULL));
    printf ("Generador de un arreglo con 20 numeros aleatorios del 10 al 100\n");
    NumAleatorios(n, j);
    return 0;
}


void NumAleatorios(int n[],int j){
    if (j == 0)
    {
        return;
    }
    n[j-1] = rand() % 91+10;
    printf("%d",n[j-1]);
    if (j > 1){
        printf(", ");
    }
    j--;
    NumAleatorios(n, j);
}
