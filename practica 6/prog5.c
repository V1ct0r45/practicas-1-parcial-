/**
 * @file prog5.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que determina si un caracter es numero, mayuscula, minuscula o caracter especial
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    if (caracter >= 'A' && caracter <= 'Z')
    {
        printf("El caracter es mayuscula.\n");
    }
    else if (caracter >= 'a' && caracter <= 'z')
    {
        printf("El caracter es minuscula.\n");
    }
    else if (caracter >= '0' && caracter <= '9')
    {
        printf("El caracter es numero.\n");
    }
    else
    {
        printf("El caracter es especial.\n");
    }

    return 0;
}
