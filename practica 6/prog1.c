/**
 * @file prog1.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que cuenta la cantidad de caracteres en un texto 
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>


int main()
{
    char cadena[100];
    int cont = 0;

    printf("Escriba una cadena de caracteres\n");
    fgets(cadena, 100, stdin);

    while (cadena[cont] != '\0')
    {
        cont++;
    }
    
    printf("la cadena de texto contiene %d caracteres",cont);

    return 0;
}



