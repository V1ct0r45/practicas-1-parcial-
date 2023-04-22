/**
 * @file prog5.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que calcula la suma de los digitos de un numero entero
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
 * @brief  calcula la suma de los digitos
 * 
 * @param n numero entero
 * @return el valor de la suma 
 */
int Suma_Numeros(int n);

int main()
{
    int n = 0;
    printf("Ingrese un numero entero positivo\n");
    scanf("%d", &n);
    int res = Suma_Numeros(n);
    printf("la suma de los digitos del numero %d, es %d",n,res);
    return 0;
}


int Suma_Numeros(int n){
    if (n < 10) {
        return n;
    }
    int entero = n % 10;
    return entero + Suma_Numeros(n / 10);
}