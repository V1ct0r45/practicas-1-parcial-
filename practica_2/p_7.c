/**
 * @file p_7.c
* @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que permita calcular el en ́esimo n ́umero de la sucesi ́on de Fibonacci sin la
necesidad de producir todos los n ́umeros anteriores.
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
    int num = 0, resu = 0;
    printf("Programa que indica el enesimo numero de la sucecion de fibonacci\n\n");
    printf("escibe el numero entero positivo del numero que quieras saber\n");

    scanf ("%d",&num);

    while (num<=0)
    {
        printf("numero no valido, escibir un numero entero positivo\n\n");
        scanf ("%d",&num);
    }
    
    resu =(1/sqrt(5)) * ((pow((1+sqrt(5))/2,num))-(pow((1-sqrt(5))/2,num)));

    printf("el numero en la sucecion de fibonacci es %d",resu);
    return 0;
}
