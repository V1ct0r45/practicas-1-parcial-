/**
 * @file prog8.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
<<<<<<< HEAD
 * @brief programa que imprime un texto cuando se escriba .
=======
 * @brief 
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
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
<<<<<<< HEAD
    char c, *texto=NULL;
    int tam = 0;

    printf("Ingrese un texto y termine con un punto : ");
=======
    char c, *texto;
    int tamanio = 0;

    printf("Ingrese su texto (termina con '.'): ");
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e


    while (1) {
        c = getch();    
        putchar(c);
<<<<<<< HEAD
        texto = realloc(texto, (tam + 1) * sizeof(char));


        if (c == '.') {
            *(texto+tam) = '\0';  
            break;  
        } 
        *(texto+tam) = c;
        tam++; 
=======
        texto = realloc(texto, (tamanio + 1) * sizeof(char));


        if (c == '.') {
            *(texto+tamanio) = '\0';  
            break;  
        } 
        *(texto+tamanio) = c;
        tamanio++; 
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
    }

    printf("\nEl texto ingresado es: %s\n", texto);

    free(texto);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 0d83cc31653b78417648b518d24da71a67e5a64e
