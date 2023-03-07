/**
 * @file p_3.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que calcule la distancia entre dos puntos proporcionados por el usuario
 * @version 0.1
 * @date 2023-03-05
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a1 = 0, a2 = 0, b1 = 0, b2 = 0, res = 0;

    printf("Programa que calcula la distancia entre dos puntos con coordenas proporcionadas por el usuario\n\n");

    printf("escribir la coordena X del punto A\n");
    scanf("%f", &a1);
    printf("escribir la coordena Y del punto A\n");
    scanf("%f", &a2);
    printf("escribir la coordena X del punto B\n");
    scanf("%f", &b1);
    printf("escribir la coordena Y del punto B\n");
    scanf("%f", &b2);

    res = sqrt(pow((b1 - a1), 2) + pow((b2 - a2), 2));

    printf("la distancia entre los dos puntos es: %0.2f", res);
    return 0;
}
