# Atividade Avaliativa 3 — Filas Dinâmicas em C

## Objetivo

Implementar dois desafios com filas dinâmicas usando `struct`, ponteiros, `malloc` e `free`.

---

# Desafio 1 — Fila de atendimento

Cada cliente possui:

- `id`
- `tempoAtendimento`

A fila segue FIFO

## Estrutura principal

```c
typedef struct Node {
    int id;
    int tempoAtendimento;
    struct Node *proximo;
} Node;
```

## Controle da fila

```c
typedef struct {
    Node *inicio;
    Node *fim;
} Fila;
```

- `inicio`: primeiro cliente
- `fim`: último cliente

O ponteiro `fim` permite inserir no final sem percorrer toda a fila.

## Operações

- `enqueue()` insere no final.
- `dequeue()` remove do início.

# Desafio 2 — Fila de impressão com prioridade

Cada documento possui:

id
paginas
prioridade

Quanto menor o número, maior a prioridade.

## Estrutura principal

```c
typedef struct Node {
    int id;
    int paginas;
    int prioridade;
    struct Node *proximo;
} Node;
```

## Controle da fila

```c
typedef struct {
    Node *inicio;
} Fila;
```

## Operações

- `enqueue()` insere já na posição correta.
- `dequeue()` remove do início.

## Enqueue

A inserção usa:

novo->proximo = atual->proximo;
atual->proximo = novo;

Isso conecta o novo nó no meio da fila sem perder a sequência.

## Empate de prioridade

A condição:

```c
atual->proximo->prioridade <= prioridade
```

Mantém ordem de chegada quando prioridades são iguais.
