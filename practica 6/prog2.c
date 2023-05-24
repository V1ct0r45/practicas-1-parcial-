/**
 * @file prog2.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que muesta el total de palabras, letras, numeros, y caracteres especiales
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int palabras = 0, letras = 0, numeros = 0, especiales = 0, i = 0;

    printf("Escriba un texto\n");
    fgets(cadena, 100, stdin);

    while (cadena[i] != '\0') {
        if (cadena[i] == ' ') {
            palabras++;
        } else if (isdigit(cadena[i])) {
            numeros++;
        } else if (isalpha(cadena[i])) {
            letras++;
        } else {
            especiales++;
        }
        
        i++;
    }

    printf("La cantidad de palabras es %d\nLa cantidad de letras es %d\nLa cantidad de numeros es %d\nLa cantidad de especiales es %d\n", palabras + 1, letras, numeros, especiales);

    return 0;
}