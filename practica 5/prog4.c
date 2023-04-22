/**
 * @file prog4.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que indica la cantidad de digitos en un numero 
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief calcula la cantidad de digitos de un numeor
 * 
 * @param n numero dado por el usuario
 * @return la cantidad de digitos
 */
int Cantidad_Numeros(int n);

int main()
{
    int n = 0;
    printf("Ingrese un numero entero positivo\n");
    scanf("%d", &n);
    int res = Cantidad_Numeros(n);
    printf("la cantidad de digitos en el numero %d, es %d",n,res);
    return 0;
}


int Cantidad_Numeros(int n){
    if (n == 0){
        return 0;
    }
    else{
        n = n /10;
        return 1 + Cantidad_Numeros(n);
    }  
}
