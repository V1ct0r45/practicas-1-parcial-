/**
 * @file prog5.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que cuenta las vocales y consonantes de una cadena de caracteres
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char cadena[100];
    char *ptrCadena = cadena;
    int *ptrVocales, *ptrConsonantes, *ptrTotal;
    int vocales = 0, consonantes = 0, total = 0;

    ptrVocales = &vocales;
    ptrConsonantes = &consonantes;
    ptrTotal = &total;

    printf("Escriba una cadena de caracteres de no mas de 100 caracteres:\n");
    fgets(cadena, 100, stdin);

    while (*ptrCadena != '\0')
    {
        char caracter = tolower(*ptrCadena);
        if (caracter >= 'a' && caracter <= 'z')
        {
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
            {
                (*ptrVocales)++;
            }
            else
            {
                (*ptrConsonantes)++;
            }
        }
        ptrCadena++;
    }
    *ptrTotal = *ptrVocales + *ptrConsonantes;

    printf("El total de vocales es: %d\n", *ptrVocales);
    printf("El total de consonantes es: %d\n", *ptrConsonantes);
    printf("El total de letras es: %d\n", *ptrTotal);
    return 0;
}







