/**
 * @file prog6.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que muestre el numero de repeticiones de cada letra en una cadena 
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cadena[100];
    int tam = 0, aux = 0, i=0, cont[256] = {0};
    printf("Escriba una cadena de texto: ");
    fgets(cadena,100,stdin);
    tam = strlen(cadena);
    while (cadena[i] != '\0' && cadena[i]!='\n')
    {
        aux = (int)tolower(cadena[i]); // convertir a minúscula
        cont[aux]++;
        i++;
        
    }

    printf("Repeticiones de cada letra:\n");
    for (int i = 0; i < 256; i++)
    {
        if (cont[i] > 0)
        {
            printf("%c:         %d\n", i, cont[i]);
        }
    }
    
    return 0;
}
