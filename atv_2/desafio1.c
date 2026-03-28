#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char valor;
    struct Node *proximo;
} Node;

// Insere um novo caractere no topo da pilha
void push(Node **topo, char c)
{
    Node *novo = malloc(sizeof(Node));

    novo->valor = c;
    // novo nó aponta para o topo antigo
    novo->proximo = *topo;

    *topo = novo; // topo agora passa a ser o novo nó
}

char pop(Node **topo)
{
    if (*topo == NULL)
        return '\0';

    // guarda topo atual temporariamente
    Node *temp = *topo;
    // salva valor antes de remover
    char valor = temp->valor;

    // topo avança para o próximo nó
    *topo = temp->proximo;
    free(temp);

    return valor;
}

int isEmpty(Node *topo)
{
    return topo == NULL;
}

// Confere se abertura e fechamento combinam corretamente
int combina(char abertura, char fechamento)
{
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '{' && fechamento == '}') ||
           (abertura == '[' && fechamento == ']');
}

int main()
{
    char expressao[100];
    Node *topo = NULL;

    printf("Digite a expressao: ");
    scanf("%s", expressao);

    for (int i = 0; i < strlen(expressao); i++)
    {
        char c = expressao[i];

        // se for abertura, empilha
        if (c == '(' || c == '{' || c == '[')
        {
            push(&topo, c);
        }

        // se for fechamento, desempilha e compara
        else if (c == ')' || c == '}' || c == ']')
        {
            char aberto = pop(&topo);

            // se não combinar, expressão inválida
            if (!combina(aberto, c))
            {
                printf("Expressao invalida\n");
                return 0;
            }
        }
    }

    if (isEmpty(topo))
    {
        printf("Expressao valida\n");
    }
    else
    {
        printf("Expressao invalida\n");
    }

    return 0;
}