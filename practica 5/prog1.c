/**
 * @file prog1.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que realiza una secuencia de 3 en 3 hasta llegar a un numero 
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */
#include <stdio.h>


/**
 * @brief imprime una serie de numeros enteros de 3 en 3 hasta llegar al numero indicado
 * 
 * @param n es el numero al que queremos llegar con el incremento  
 * @param i es el numero que va a imprimir 
 */
void numeros(int n, int i);
int main()
{
    int n = 0;
    printf("Escriba un numero entero\n");
    scanf("%d",&n);
    numeros(n,1);

    return 0;
}


void numeros(int n, int i){
    if (i<=n){
        printf ("%d ", i);
        i = i + 3;
        numeros (n,i);
    }
}



