#include <stdio.h>

int main()
{
    int matriz[3][3], identidade[3][3], resultado[3][3] = {0};

    printf("Digite a matriz 3x3:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            identidade[i][j] = (i == j) ? 1 : 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                resultado[i][j] += matriz[i][k] * identidade[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}