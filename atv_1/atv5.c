#include <stdio.h>

int main()
{
    int vetor[3], matriz[3][3], resultado[3] = {0};

    printf("Digite vetor de 3 elementos:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite matriz 3x3:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }

    printf("Resultado:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", resultado[i]);
    }

    printf("\n");

    return 0;
}