/**
 * @file prog7.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que realiza la seri de hailstone
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */


#include <stdio.h>
#include <stdlib.h>

/**
 * @brief verifica si el numero es par o impar y realiza la operacion
 * 
 * @param n el numero inicial de la serie 
 */
void serie(int n);

int main()
{
    int n = 0;
    printf("Ingrese un numero entero positivo\n");
    scanf("%d",&n);
    printf("La serie de hailstone, es la siguiente\n");
    serie(n);
    return 0;
}

void serie(int n){
    printf("%d",n);
    if (n!=1){
        printf(", ");
    }
    if (n==1){
        return;
    }
    else if (n % 2 == 0){
        n = n / 2;
        serie(n);
    }
    else {
        n = n * 3 + 1;
        serie(n);
    }
}