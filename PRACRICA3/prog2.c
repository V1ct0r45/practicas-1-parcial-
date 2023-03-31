/**
 * @file prog2.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que solicite al usuario un n ́umero e imprima el triangulo de Floyd
 * @version 0.1
 * @date 2023-03-11
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0, num2 = 0, num3 = 0, num4 = 0;

    printf("proporcione el numero de filas: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num2 <= num)
        {

            num3 = 1;

            while (num3 <= num2)
            {
                (num4 % 2 == 0) ? printf("0") : printf("1");
                num3++;
                num4++;
            }
            printf("\n");
            num2++;
        }
    }
    else
    {
        printf("numero no valido");
        }

    return 0;
}
