/**
 * @file prog4.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief Programa que encuentra la palabra mas corta y mas larga
 * @version 0.1
 * @date 2023-04-30
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <string.h>
#define MAX 200
int main()
{
    char cadena[MAX], palabra[MAX], corta[MAX], larga[MAX];
    int Lcorta = MAX, Llarga = 0, tam = 0, i=0, j=0;

    printf("Escriba una cadena de texto: ");
    fgets(cadena,100,stdin);

    while (cadena[i] != '\0')
    {
        if (cadena[i] != ' ' && cadena[i] != '\n')
        {
            palabra[j] = cadena[i];
            j++;
        }
        else
        {
            palabra[j] = '\0';
            tam = strlen(palabra);
            if (tam < Lcorta)
            {
                Lcorta = tam;
                strcpy(corta, palabra);
            }
            if (tam > Llarga)
            {
                Llarga = tam;
                strcpy(larga, palabra);
            }
            j = 0;
        }
        i++;
    }

    printf("La palabra mas corta es '%s'\n", corta);
    printf("La palabra mas larga es '%s'\n", larga);

    return 0;
}
