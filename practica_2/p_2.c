/**
 * @file p_2.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que permita al usuario obtener la ra ́ız en ́esima de un n ́umero entero positivo
mayor a 0. usando logaritmos
 * @version 0.1
 * @date 2023-03-05
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float raiz = 0, num = 0, result = 0;
    const float eul = 2.71828;
    printf("Programa que calcula la raiz en-esima de un numero positivo mayor a 0\n\n");
    printf("escribir el numero dentro de la raiz\n");
    scanf("%f", &num);
    printf("escribir el numero de la raiz\n");
    scanf("%f", &raiz);

    while (num < 0 || raiz < 0)
    {
        printf("numeros nos validos, favor de escribir un numeros positivos\n");
        raiz = 0;
        num = 0;
        printf("escribir el numero dentro de la raiz\n");
        scanf("%f", &num);
        printf("escribir el numero de la raiz\n");
        scanf("%f", &raiz);
    }

    result = pow(eul, ((1 / raiz) * log(num)));
    printf("el resultado de la raiz es: %0.2f", result);

    return 0;
}
