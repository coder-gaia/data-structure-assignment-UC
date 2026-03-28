# Atividade Avaliativa 2 - Pilha Dinâmica

## Desafio 1

Foi implementada uma pilha dinâmica usando struct encadeada.

Cada símbolo de abertura é empilhado.  
Quando aparece um símbolo de fechamento, o topo da pilha é removido e comparado.

Se houver incompatibilidade ou sobrar elemento na pilha ao final, a expressão é inválida.

### Funções principais

- push: insere elemento no topo
- pop: remove elemento do topo
- isEmpty: verifica se pilha está vazia
- combina: verifica se abertura e fechamento correspondem

---

## Desafio 2

Cada caractere da string é inserido na pilha.

Como pilha funciona em ordem inversa (LIFO), ao remover os elementos a string sai invertida.

### Funções principais

- push: insere caractere
- pop: remove caractere

A inversão ocorre naturalmente pela lógica da pilha.
