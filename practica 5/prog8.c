/**
 * @file prog8.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que realiza la serie de leibz
 * @version 0.1
 * @date 2023-04-15
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * @brief realiza la sumatoria de una operacion para calcular la serie de leibz
 * 
 * @param m el valor maximo
 * @param n incremento de la serie
 * @param suma es la suma de los valores
 * @return sumatoria total de la serie
 */
double Leib(int m, double n, double suma);

int main()
{
    int m = 0;
    double res = 0;
    float Naprox = 0;
    Naprox = 3.1416/4;
    printf("Programa que ejeuta la serie de leibz con los valores de 10 y de 500\n el numero al que se debe aproximar es a %f\n",Naprox);
     res = Leib(10,0,0);
    printf("el valor de la serie, tomando el valor de m = 10 es: %f\n ",res);
    res = Leib(500,0,0);
    printf("el valor de la serie, tomando el valor de m = 500 es: %f\n ",res);
    
    return 0;
}


double Leib(int m, double n, double suma){
    if (n==m){
        return suma;
    }
    else if (n<=m)
    {
        suma = (pow(-1,n)/((2*n)+1))+ suma;
        n++;
        return Leib(m, n, suma);
    }
}