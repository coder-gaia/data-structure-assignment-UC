#include <stdio.h>

int main()
{
    int vetor[5];
    int *p = vetor;

    printf("Digite 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("O dobro de %d eh: ", *(p + i));
        printf("%d \n", *(p + i) * 2);
    }

    printf("\n");

    return 0;
}