/**
 * @file prog8.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief 
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
    char c, *texto;
    int tamanio = 0;

    printf("Ingrese su texto (termina con '.'): ");


    while (1) {
        c = getch();    
        putchar(c);
        texto = realloc(texto, (tamanio + 1) * sizeof(char));


        if (c == '.') {
            *(texto+tamanio) = '\0';  
            break;  
        } 
        *(texto+tamanio) = c;
        tamanio++; 
    }

    printf("\nEl texto ingresado es: %s\n", texto);

    free(texto);

    return 0;
}
