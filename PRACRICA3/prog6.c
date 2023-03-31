/**
 * @file prog5.c
  * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  programa que calcula el factorial de un numero usando while
 * @version 0.1
 * @date 2023-03-11
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>

int main()
{
    int num = 0, fact = 0, i = 0;
    printf ("escriba un numero que quiera calcular su factorial\n");
    scanf("%d",&num);

    fact = num;
    i=num-1;
    while (i>=1)
    {
        fact = fact * i;
        i--;
    }
    printf("el factorial de %d es %d",num, fact);
    return 0;
}