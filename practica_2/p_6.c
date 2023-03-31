/**
 * @file p_6.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  programa que convierte grados Fahrenheit a centigrados 
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
    float c = 0, f = 0;
    
    printf("Programa que convierte grados Fahrenheit a cencigrados\n\n");
    printf("escibre los grados Fahrenheit\n");
    scanf("%f",&f);

    c=(f-32)/1.8;

    printf("%0.2f en grados Fahrenheit es igual a %0.2f grados centigrados",f,c);
    return 0;
}
