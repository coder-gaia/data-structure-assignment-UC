# Atividade Avaliativa 1 - Soluções em C

## Exercício 1

Leitura de três palavras em vetores de caracteres e impressão em ordem inversa.

## Exercício 2

Uso de vetor inteiro com leitura por laço `for` e impressão invertida percorrendo do último índice até o primeiro.

## Exercício 3

Leitura de matriz 3x3 e multiplicação direta de cada elemento por 5 durante a impressão.

## Exercício 4

A matriz identidade é criada colocando 1 na diagonal principal e 0 nas demais posições.  
A multiplicação usa três laços `for`: dois percorrem linhas e colunas do resultado, e o terceiro realiza a soma dos produtos entre linha da matriz original e coluna da identidade.  
Isso demonstra que multiplicar por identidade mantém os valores originais.

## Exercício 5

A multiplicação é feita entre um vetor e as colunas da matriz.  
Cada posição do resultado recebe a soma dos produtos entre cada elemento do vetor e os elementos da coluna correspondente.

## Exercício 6

Foi utilizada `struct` para armazenar nome, matrícula e média.  
Após a leitura, cada aluno é enviado para vetor de aprovados ou reprovados conforme a média.

## Exercício 7

Foi usada `struct` para armazenar livros.  
A busca é feita comparando títulos com `strcmp`, permitindo localizar livros pelo nome informado.

## Exercício 8

Leitura feita apenas com aritmética de ponteiros, sem acessar índices diretamente.  
Cada valor é lido por ponteiro e impresso em dobro.

## Exercício 9

A função recebe três variáveis por referência, permitindo alterar os valores originais.  
As trocas são feitas por comparação entre pares até ordenar do menor para o maior.  
Ao final, a função retorna 1 se os três forem iguais e 0 caso contrário.

## Exercício 10

A memória é alocada dinamicamente com `malloc`, permitindo definir a quantidade de alunos em tempo de execução.  
A função `maiorNota` percorre os alunos usando ponteiros e mantém o endereço do aluno com maior nota encontrado.
