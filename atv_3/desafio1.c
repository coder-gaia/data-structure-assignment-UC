#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    int tempoAtendimento;
    struct Node *proximo;
} Node;

typedef struct
{
    Node *inicio;
    Node *fim;
} Fila;

// Insere cliente no final da fila
void enqueue(Fila *fila, int id, int tempo)
{
    Node *novo = malloc(sizeof(Node));

    novo->id = id;
    novo->tempoAtendimento = tempo;
    novo->proximo = NULL;

    if (fila->fim == NULL)
    {
        fila->inicio = novo;
        fila->fim = novo;
    }
    else
    {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
}

// Remove cliente do início da fila
Node *dequeue(Fila *fila)
{
    if (fila->inicio == NULL)
        return NULL;

    Node *temp = fila->inicio;
    fila->inicio = fila->inicio->proximo;

    if (fila->inicio == NULL)
        fila->fim = NULL;

    return temp;
}

int main()
{
    Fila fila = {NULL, NULL};

    int n;
    int espera = 0;

    printf("Quantidade de clientes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int id, tempo;

        printf("\nCliente %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &id);

        printf("Tempo de atendimento: ");
        scanf("%d", &tempo);

        enqueue(&fila, id, tempo);
    }

    printf("\nAtendimento:\n");

    while (fila.inicio != NULL)
    {
        Node *cliente = dequeue(&fila);

        printf("Cliente %d | Espera: %d min\n", cliente->id, espera);

        espera += cliente->tempoAtendimento;

        free(cliente);
    }

    return 0;
}