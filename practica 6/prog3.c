/**
 * @file prog3.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que encuentra la letra que mas se repite en una cadena
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];
    int tam = 0, aux = 0, i=0, cont[256] = {0}, MasG=0;
    printf("Escriba una cadena de texto: ");
    fgets(cadena,100,stdin);
    tam = strlen(cadena);
    while (cadena[i] != '\0')
    {
        aux = (int)cadena[i];
        cont[aux]++;
        i++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (cont[i]>cont[MasG])
        {
            MasG = i;
        }
    }

    printf("La letra que mas se repite es %c, con %d repeticiones", (char)MasG, cont[MasG]);
    
    return 0;
}

