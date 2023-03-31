/**
 * @file P_1.C
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 * @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>

int main()
{
    char nombre[100]; /*Variable donde se guardara el nombre del usuario*/
    int edad = 0, nacimiento=0;      /*Variable donde se guardara la edad del usuario*/
    float estatura = 0; /*Variable donde se guardara la estatura del usuario*/

    printf("Buenas tardes usuario, favor de introducir los siguientes datos\n");
    printf("Nombre Completo : ");
    scanf("%[^\n]s", &nombre); /*lee el nombre del usuario*/
    printf("edad en numeros enteros: ");
    scanf("%d", &edad);  /*lee la edad del usuario*/
    printf("estatura en metros: ");
    scanf("%f", &estatura); /*lee la estatura del usuario*/
    nacimiento=2023-edad;
    printf("\nNombre: %s\nEdad: %d anios\n anio de nacimiento: %d\n Estatura: %0.2f metros\n", nombre, edad, nacimiento, estatura); /*imprime todos los datos ingresados*/
    return 0;
}




