/**
 * @file p_1.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que le solicta a un usuario el radio de un circulo y calcula su perimetro
 * y area
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
    float radio = 0, area = 0, perimetro = 0;
    const float pi = 3.1416;
    printf("Programa que calcula el Perimetro y Area con el radio\n\n");
    printf("Escribir el radio del circulo\n");
    scanf("%f", &radio);
    area = pi * radio * radio;
    perimetro = 2 * radio * pi;
    printf("el area de la circunferencia es: %0.3f\nEl perimetro de la circunferencia es: %0.3f", area, perimetro);

    return 0;
}
