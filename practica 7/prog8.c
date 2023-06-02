/**
 * @file prog8.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief programa que imprime un texto cuando se escriba .
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright GPL v3
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char c, *texto=NULL;
    int tam = 0;

    printf("Ingrese un texto y termine con un punto : ");


    while (1) {
        c = getch();    
        putchar(c);
        texto = realloc(texto, (tam + 1) * sizeof(char));


        if (c == '.') {
            *(texto+tam) = '\0';  
            break;  
        } 
        *(texto+tam) = c;
        tam++; 
    }

    printf("\nEl texto ingresado es: %s\n", texto);

    free(texto);

    return 0;
}