#include <stdio.h>

int ordenar(int *a, int *b, int *c)
{
    int temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a == *b && *b == *c)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int x, y, z;
    int resultado;

    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    resultado = ordenar(&x, &y, &z);

    printf("\nValores ordenados:\n");
    printf("Primeiro: %d\n", x);
    printf("Segundo: %d\n", y);
    printf("Terceiro: %d\n", z);

    printf("Retorno da funcao: %d\n", resultado);

    return 0;
}