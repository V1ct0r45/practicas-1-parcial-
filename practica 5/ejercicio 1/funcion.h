/**
 * @file funcion.h
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @boleta 2023640349
 * @brief Biblioteca de funciones
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright GPL v3
 *
 */

#ifndef __funcion_h__
#define __funcion_h__ 
/**
 * @brief Genera un arreglo aleatorio 
 * 
 * @param arr el arreglo que va a generar 
 * @param j  la cantidad de digitos que tendra el arreglo
 * @param max  el numero maximo para numeros aleatorios
 * @param min el nmero minimo para los numeros aleatorios
 */
void ArrAlea(int arr[], int j, int max, int min);

/**
 * @brief Genera el ordenamiento por burbuja
 * 
 * @param arr2 arreglo desordenado
 * @param n  tamaño del arreglo 
 */
void Burbuja(int arr2[], int n);

/**
 * @brief Ingresar los valores para una matriz 3*3
 * 
 * @param arrA el arreglo de la matriz
 */
void matrizA(int arrA[][3]);

/**
 * @brief ingresar los valores para una matriz 3*3
 * 
 * @param arrB el arreglo de la matriz
 */
void matrizB(int arrB[][3]);

/**
 * @brief Imprime los valores de culaquier matriz de 3*3
 * 
 * @param arr la matriz de 3*3
 */
void ImprimMa(int arr[][3]);


/**
 * @brief Realiza la suma de dos matrices 3*3
 * 
 * @param arr1 matriz 1 a sumar
 * @param arr2 matriz 2 a sumar
 * @param sum resultado de la suma
 */
void Suma(int arr1[][3], int arr2[][3], int sum[][3]);

/**
 * @brief realiza la resta de dos matrices 3*3
 * 
 * @param arr1 matriz 1
 * @param arr2 matriz 2
 * @param res resultado de la resta
 */
void res(int arr1[][3], int arr2[][3], int res[][3]);

/**
 * @brief realiza la multiplicacion de 2dos matrices 3*3
 * 
 * @param arr1 matriz 1
 * @param arr2 matriz 2
 * @param mult resultado de la multiplicacion
 */
void mult(int arr1[][3], int arr2[][3], int mult[][3]);

/**
 * @brief ingresa los valores de una sistema de ecuaciones de 3 incognitas 
 * 
 * @param A matriz 3*3 para las ecuaciones
 * @param B matriz 3*1 para los resultados
 */
void ecu(float A[][3], float B[][1]);

/**
 * @brief Genera la matriz transpuesta
 * 
 * @param A matriz 3*3 para transponer
 * @param trans resultado
 */
void tran(float A[][3], float trans[][3]);

/**
 * @brief Calcula el determinante de una matriz 3*3
 * 
 * @param A matriz 3*3
 * @return el resultado del determinante
 */
float det(float A[][3]);

/**
 * @brief Calcula la adjunta de una matriz
 * 
 * @param trans matriz transpuesta
 * @param adj resultado de la matriz adjunta
 */
void adju(float trans[][3], float adj[][3]);

/**
 * @brief calcula la matriz inversa 
 * 
 * @param det determinate
 * @param adj adjunta
 * @param inv resultado de la inversa
 */
void inver(float det,float adj[][3],float inv[][3]);


/**
 * @brief calcula las variables incognitas
 * 
 * @param C el resultado de las incognitas
 * @param B matriz de los resultados de las ecuaciones
 * @param inv matriz inversa
 */
void resInco(float C[][1],float B[][1],float inv[][3]);

/**
 * @brief realiza la comprobacion de los resultados con producto punto 
 * 
 * @param A matriz 3*3
 * @param C resultaods de incognitas
 * @param res resultado de las ecuaciones
 */
void Compr(float A[][3],float C[][1],float res[][1]);

/**
 * @brief imprime los resultados de las ecuaciones
 * 
 * @param C resultados
 */
void ImrimRes(float C[][1]);

/**
 * @brief imprime el sistema de ecuaciones con sus resultados
 * 
 * @param A ecuaciones
 * @param B resultados
 */
void Sistema(float A[][3], float B[][1]);
#endif

