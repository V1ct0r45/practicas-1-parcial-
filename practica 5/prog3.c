/**
 * @file prog3.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que genera numeros aleatorios y los ordena 
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * @brief genera numeros aleatorios
 * 
 * @param n arreglo de los numeros 
 * @param j tamaño del arreglo 
 */
void NumAleatorios(int n[], int j);

/**
 * @brief ordenamiento del arreglo por burbuja
 * 
 * @param n arreglo desordenaod
 * @param i variable de incremento
 * @param j variable de incremento
 * @param aux auxilar para cambio de orden
 */
void Burbuja(int n[], int i, int j, int aux);

int main()
{
    int n[20], j = 20;
    srand(time(NULL));
    printf("Programa que genera numeros aleatorios entre 50 y 100 y encuentra al mas pequeno y al mas grande\n\nArreglo Generado aleatoriamente\n");
    NumAleatorios(n,j);
    printf("\nNumeros ordenados\n");
    Burbuja(n,0,0,0);
    for (int i = 0; i < 20; i++)
    {
        printf("%d",n[i]);
        if (i<19){
            printf(", ");
        }
    }
    
    printf("\nel numero mas pequeno es %d, y el mas grande es %d\n",n[0],n[19]);
    return 0;
}

void NumAleatorios(int n[],int j){
    if (j == 0)
    {
        return;
    }
    n[j-1] = rand() % 51+50;
    printf("%d",n[j-1]);
    if (j > 1){
        printf(", ");
    }
    j--;
    NumAleatorios(n, j);
}

void Burbuja(int n[], int i, int j, int aux){
    if (i == 20-1){
        return;
    }
    if (j == 20-i-1){
        i++;
        Burbuja(n,i,0,aux);
        return;
    }
    if (n[j]>n[j+1]){
        aux = n[j];
        n[j] = n[j+1];
        n[j+1] = aux;
    }
    j++;
    Burbuja(n,i,j,aux);
}