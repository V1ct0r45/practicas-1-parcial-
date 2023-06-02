/**
 * @file prog1.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief  Programa que suma dosnumeros usando punteros
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main() {
    float num1, num2, suma;
    float *ptr1, *ptr2;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    
    suma = *ptr1 + *ptr2;

    printf("La suma de %0.2f y %0.2f es: %0.2f\n", num1, num2, suma);

    return 0;
}
 