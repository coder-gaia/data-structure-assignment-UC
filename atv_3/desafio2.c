#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    int paginas;
    int prioridade;
    struct Node *proximo;
} Node;

typedef struct
{
    Node *inicio;
} Fila;

// Insere documento já na posição correta pela prioridade
void enqueue(Fila *fila, int id, int paginas, int prioridade)
{
    Node *novo = malloc(sizeof(Node));

    novo->id = id;
    novo->paginas = paginas;
    novo->prioridade = prioridade;
    novo->proximo = NULL;

    if (fila->inicio == NULL || prioridade < fila->inicio->prioridade)
    {
        novo->proximo = fila->inicio;
        fila->inicio = novo;
        return;
    }

    Node *atual = fila->inicio;

    while (atual->proximo != NULL &&
           atual->proximo->prioridade <= prioridade)
    {
        atual = atual->proximo;
    }

    novo->proximo = atual->proximo;
    atual->proximo = novo;
}

Node *dequeue(Fila *fila)
{
    if (fila->inicio == NULL)
        return NULL;

    Node *temp = fila->inicio;

    fila->inicio = fila->inicio->proximo;

    return temp;
}

int main()
{
    Fila fila = {NULL};

    int n;

    printf("Quantidade de documentos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int id, paginas, prioridade;

        printf("\nDocumento %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &id);

        printf("Paginas: ");
        scanf("%d", &paginas);

        printf("Prioridade: ");
        scanf("%d", &prioridade);

        enqueue(&fila, id, paginas, prioridade);
    }

    printf("\nOrdem de impressao:\n");

    while (fila.inicio != NULL)
    {
        Node *doc = dequeue(&fila);

        printf("ID %d | Paginas %d | Prioridade %d\n",
               doc->id,
               doc->paginas,
               doc->prioridade);

        free(doc);
    }

    return 0;
}