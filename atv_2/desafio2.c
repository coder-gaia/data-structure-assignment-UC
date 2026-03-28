#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char valor;
    struct Node *proximo;
} Node;

// Insere caractere no topo da pilha
void push(Node **topo, char c)
{
    Node *novo = malloc(sizeof(Node));

    // guarda caractere e aponta para topo antigo
    novo->valor = c;
    novo->proximo = *topo;

    *topo = novo;
}

char pop(Node **topo)
{
    if (*topo == NULL)
        return '\0';

    // guarda topo atual temporariamente
    Node *temp = *topo;
    char valor = temp->valor;

    // topo avança para próximo nó
    *topo = temp->proximo;
    free(temp);

    return valor;
}

int main()
{
    char texto[100];
    Node *topo = NULL;

    printf("Digite uma string: ");
    scanf(" %[^\n]", texto);

    // Empilha cada caractere da string
    for (int i = 0; i < strlen(texto); i++)
    {
        push(&topo, texto[i]);
    }

    printf("String invertida: ");

    // Desempilha até acabar
    while (topo != NULL)
    {
        printf("%c", pop(&topo));
    }

    printf("\n");

    return 0;
}