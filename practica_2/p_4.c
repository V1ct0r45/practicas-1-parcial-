/**
 * @file p_4.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que solicite al usuario un n ́umero y le indique si es par o impar.
 * @version 0.1
 * @date 2023-03-05
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>

int main()
{
    int num = 0, num2 = 0;

    printf("Programa que define si un numero es par o impar\n\n");
    printf("Escribir un numero entero ");
    scanf("%d", &num);

    num2 = num % 2;

    (num2 == 0 && num2 != 1 ) ? printf("el numero %d es un numero par",num) : printf("el numero %d es un numero inpar",num); 

    return 0;
}
