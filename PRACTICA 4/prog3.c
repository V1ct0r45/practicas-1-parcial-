/**
 * @file prog3.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmai.com)
 * @brief  Programa que resuelve un sistema de ecuaciones de 3 incognitas con 3 ecuaciones
 * @version 0.1
 * @date 2023-03-29
 *
 * @boleta 2023640349
 *
 * @copyright GPL v3
 *
 */

#include <stdio.h>

float A[3][3], B[3][1], C[3][1], trans[3][3], adj[3][3], inv[3][3], res[3][1], det = 0.0;

int main()
{
    // solicita al usuario ingresar los valores de las ecuaciones
    printf("ingrede los valores de la matriz A:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("escriba el valor de x en la ecuacion %d: ", i + 1);
            }
            else if (j == 1)
            {
                printf("escriba el valor de y en la ecuacion %d: ", i + 1);
            }
            else if (j == 2)
            {
                printf("escriba el valor de z en la ecuacion %d: ", i + 1);
            }

            scanf("%f", &A[i][j]);
        }
    }
    // soliicta al usuario los valores de los resultados de las ecuaciones
    printf("ingrede los valores de la matriz B:\n");

    for (int i = 0; i < 3; i++)
    {

        printf("Escriba el resultado de la ecuacion %d: ", i + 1);
        scanf("%f", &B[i][0]);
    }

    // muestra en pantalla el sistema de ecuaciones
    printf("Su sistema de ecuaciones quedaria de la siguiente forma\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.2f", A[i][j]);
            if (j == 0)
            {
                printf("x ");
                if (A[i][j + 1] > 0)
                {
                    printf("+");
                }
                else
                {
                }
            }
            else if (j == 1)
            {
                printf("y ");
                if (A[i][j + 1] > 0)
                {
                    printf("+");
                }
                else
                {
                }
            }
            else if (j == 2)
            {
                printf("z");
            }
        }
        printf(" = %0.2f", B[i][0]);
        printf("\n");
    }

    // matriz A trnaspuesta
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = A[i][j];
        }
    }

    det = (A[0][0] * A[1][1] * A[2][2] + A[1][0] * A[2][1] * A[0][2] + A[2][0] * A[0][1] * A[1][2]) - // Cálculo la matriz determinante de A
          (A[2][0] * A[1][1] * A[0][2] + A[0][0] * A[2][1] * A[1][2] + A[1][0] * A[0][1] * A[2][2]);

    adj[0][0] = ((+1) * (trans[1][1] * trans[2][2] - trans[2][1] * trans[1][2])); // calcula la adjunta por cofactores en la transpuesta
    adj[1][0] = ((-1) * (trans[0][1] * trans[2][2] - trans[2][1] * trans[0][2]));
    adj[2][0] = ((+1) * (trans[0][1] * trans[1][2] - trans[1][1] * trans[0][2]));
    adj[0][1] = ((-1) * (trans[1][0] * trans[2][2] - trans[2][0] * trans[1][2]));
    adj[1][1] = ((+1) * (trans[0][0] * trans[2][2] - trans[2][0] * trans[0][2]));
    adj[2][1] = ((-1) * (trans[0][0] * trans[1][2] - trans[1][0] * trans[0][2]));
    adj[0][2] = ((+1) * (trans[1][0] * trans[2][1] - trans[2][0] * trans[1][1]));
    adj[1][2] = ((-1) * (trans[0][0] * trans[2][1] - trans[2][0] * trans[0][1]));
    adj[2][2] = ((+1) * (trans[0][0] * trans[1][1] - trans[1][0] * trans[0][1]));

    for (int i = 0; i < 3; i++)
    { // calcular la inversa
        for (int j = 0; j < 3; j++)
        {
            inv[i][j] = ((1.0 / det) * adj[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) //borra todas las variables que se hayan guardado en la matriz de C
    {
        C[i][0] = 0.0;
    }

    for (int i = 0; i < 3; i++) //calcula el resultado de las incognitas
    { 
        for (int j = 0; j < 3; j++)
        {
            C[i][0] = (inv[i][j] * B[j][0])+C[i][0];
        }
    }
    for (int i = 0; i < 3; i++) //borra todas las variables que se hayan guardado en la matriz de res
    {
        res[i][0] = 0.0;
    }
    for (int i = 0; i < 3; i++) //hace el producto punto entre vecotores y los suma 
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][0] = (A[i][j] * C[j][0]) + res[i][0];
        }
    }
    printf("\n La matriz variables : \n"); //imprime los resultaoos 
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("el valor de la variable x es:");
        }
        else if (i == 1)
        {
            printf("el valor de la variable y es:");
        }
        else if (i == 2)
        {
            printf("el valor de la variable z es:");
        }

        printf("%.4f", C[i][0]);
        printf("\n");
    }
    printf("\n el producto punto de los vectores A y los resultados es: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", res[i][0]);
        printf("\n");
    }

    return 0;
}
