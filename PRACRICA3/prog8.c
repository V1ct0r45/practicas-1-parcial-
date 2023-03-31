/**
* @file prog8.c
* @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
* @brief  programa que imprima la serie armonica usando while
*@version 0.1
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
    int num = 0, i = 0;
    float sum = 0;

    printf("Escibir un numero de terminos:");
    scanf("%d",&num);

    printf ("serie:" );
    i=1;
    while (i<=num)
    {
        sum = (1/(float)i) + sum;
        printf (" 1/%d  ",i);
        if (i<num)
        {
            printf(" + ");
        }
        i++;
    }
    
    printf("\nla suma de la serie en los primeros %d terminos es: %0.3f",num, sum);
    return 0;
}
