/**
 * @file prog3.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  programa que imprime la sucecuin de fibonacci con for
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
    int n =0, i=1, t1 = 0, t2 = 1, siT;

    printf("indique un numero : ");
    scanf("%d", &n);

    printf("la sucecion de Fibonacci hasta el numero %d: es\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d  ", t2);
        siT = t1 + t2;
        t1 = t2;
        t2 = siT;
    }

    return 0;
}