#include <stdio.h>

typedef struct
{
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main()
{
    Aluno alunos[10], aprovados[10], reprovados[10];
    int aprovados_count = 0, reprovados_count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Aluno %d:\n", i + 1);
        scanf("%s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].media);

        if (alunos[i].media >= 5.0)
            aprovados[aprovados_count++] = alunos[i];
        else
            reprovados[reprovados_count++] = alunos[i];
    }

    printf("\nAprovados:\n");
    for (int i = 0; i < aprovados_count; i++)
    {
        printf("%s %d %.2f\n", aprovados[i].nome, aprovados[i].matricula, aprovados[i].media);
    }

    printf("\nReprovados:\n");
    for (int i = 0; i < reprovados_count; i++)
    {
        printf("%s %d %.2f\n", reprovados[i].nome, reprovados[i].matricula, reprovados[i].media);
    }

    return 0;
}