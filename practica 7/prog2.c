/**
 * @file prog2.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief 
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

float sumarNumeros(float *a, float *b) {
    return *a + *b;
}

int main() {
    float num1, num2, suma;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    suma = sumarNumeros(&num1, &num2);

    printf("La suma de %0.2f y %0.2f es: %0.2f\n", num1, num2, suma);

    return 0;
}