#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float nota;
} Aluno;

Aluno *maiorNota(Aluno *alunos, int n)
{
    Aluno *maior = alunos;

    for (int i = 1; i < n; i++)
    {
        if ((alunos + i)->nota > maior->nota)
        {
            maior = alunos + i;
        }
    }

    return maior;
}

int main()
{
    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = malloc(n * sizeof(Aluno));

    if (alunos == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", (alunos + i)->nome);

        printf("Nota: ");
        scanf("%f", &(alunos + i)->nota);
    }

    Aluno *melhor = maiorNota(alunos, n);

    printf("\nAluno com maior nota:\n");
    printf("Nome: %s\n", melhor->nome);
    printf("Nota: %.2f\n", melhor->nota);

    free(alunos);

    return 0;
}