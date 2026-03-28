#include <stdio.h>
#include <string.h>

typedef struct
{
    char titulo[31];
    char autor[16];
    int ano;
} Livro;

int main()
{
    Livro livros[5];
    char busca[31];
    int encontrado = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Livro %d\n", i + 1);

        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    printf("\nTitulo para buscar: ");
    scanf(" %[^\n]", busca);

    printf("\nResultado da busca:\n");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(livros[i].titulo, busca) == 0)
        {
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("Livro nao encontrado.\n");
    }

    return 0;
}