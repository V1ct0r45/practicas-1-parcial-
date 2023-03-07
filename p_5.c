/**
 * @file p_5.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  programa que convierte grados centigrados a Fahrenheit.
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
    float c = 0, f = 0;

    printf("Programa que convierte grados cencigrados a Fahrenheit.\n\n");
    printf("escibre los grados centigrados\n");
    scanf("%f", &c);

    f = (c * 1.8) + 32;

    printf("%0.2f en grados cenigrados es igual a %0.2f grados Fahrenheit", c, f);
    return 0;
}
