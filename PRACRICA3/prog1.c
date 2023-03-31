/**
 * @file prog1.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
 * @brief  Programa que muestra un menu y dependiendo la seleccion va a calcular el area y perimetro de una figura
 * @version 0.1
 * @date 2023-03-11
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <math.h>
#define False 0
#define True 1

int main()
{
    int opcion = 0;
    float area = 0, perimetro = 0, radio = 0, l1 = 0, l2 = 0;
    const float PI = 3.1416;

    do
    {
        printf("calculador de areas y perimetros\n1.-Circulo\n2.-Cuadrado\n3.-Rectangulo\n4.-Salir\nseleccione una opcion ");
        scanf("%d", &opcion);
        getc(stdin);
        switch (opcion)
        {
        case 1:
            printf("indique el radio\n");
            scanf("%f", &radio);
            area = PI * radio * radio;
            perimetro = PI * 2 * radio;
            printf("el area es: %0.2f\nel perimetro es:%0.2f\n", area, perimetro);
            getc(stdin);
            break;
        case 2:

            printf("indique un lado del cuadrado\n");
            scanf("%f", &l1);
            area = l1 * l1;
            perimetro = 4 * l1;
            printf("el area es: %0.2f\nel perimetro es:%0.2f\n", area, perimetro);
            getc(stdin);
            break;
        case 3:

            printf("indique un lado del rectangunlo\n");
            scanf("%f", &l1);
            printf("indique el otro lado del rectangunlo\n");
            scanf("%f", &l2);
            area = l1 * l2;
            perimetro = l1 + l1 + l2 + l2;
            printf("el area es: %0.2f\nel perimetro es:%0.2f\n", area, perimetro);
            getc(stdin);
            break;

        case 4:
            printf("salir\n");
            break;

        default:
            printf("numero no valido ");
            break;
        }
        printf("Presione enter para %s...", opcion == 4 ? "salir" : "volver al menu" );
        getc(stdin);

        
    } while (opcion != 4);

    return 0;
}
